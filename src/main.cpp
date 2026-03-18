#include <Geode/Geode.hpp>
#include <Geode/ui/GeodeUI.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include "includes/TitleAnim.hpp"
#include "includes/CenterAnim.hpp"
#include "includes/BottomAnim.hpp"
#include "includes/LinksAnim.hpp"
#include "includes/SideAnim.hpp"
#include "includes/ProfileAnim.hpp"
#include "includes/RightAnim.hpp"
#include "includes/GamesAnim.hpp"
#include "includes/HideMenu.hpp"

using namespace geode::prelude;


bool menusAreHidden = false;
CCSize winSize = CCDirector::sharedDirector()->getWinSize();
int64_t speed = Mod::get()->getSettingValue<int64_t>("slide-speed");
std::string slideType = Mod::get()->getSettingValue<std::string>("slide-type");
bool moreGamesBtn = Mod::get()->getSettingValue<bool>("toggle-moreGames");
bool reDashSupport;
bool btnRepos = Mod::get()->getSettingValue<bool>("btn-repos");
bool profBtnRepos = Mod::get()->getSettingValue<bool>("profbtnrepos");
bool infoBtn = Mod::get()->getSettingValue<bool>("disable-info");
bool linksMenu = Mod::get()->getSettingValue<bool>("toggle-links");
CCMenu* bottomMenu;
CCMenu* rightMenu;
float rightX;
float rightY;

HideMenu* HideMenu::s_instance;
float startPos;

class $modify(AnimMenuLayer, MenuLayer) {
	bool init() override {
		if (!MenuLayer::init()) return false;

		reDashSupport = Loader::get()->isModLoaded("ninxout.redash");;
		
		if (reDashSupport) {
			profBtnRepos = false;
		} // To prevent whatever happens with these 2 combined

		bool enable = Mod::get()->getSettingValue<bool>("enable-mod");

		// Needed for the mod to work even if its disabled with the toggle
		float profileY = 45.0f;
		auto profileMenu = getChildByID("profile-menu");
		auto userName = getChildByID("player-username");
		
		// If the mod isnt enabled & linksMenu isnt on, do this
		if(!linksMenu && !enable) {
			profileMenu->setPositionY(profileY);
			userName->setPositionY(profileY * 2 - 5.0f);
		}

		auto links = getChildByID("social-media-menu");

		auto leftSideMenu = getChildByID("side-menu");


		if (!linksMenu) {
			if (links) {
				links->setPosition({-1000, 1000});
				links->setVisible(false);
			}
		}

		auto moreGames = getChildByID("more-games-menu");
		startPos = moreGames->getPositionX();

		if (!moreGamesBtn) {
			moreGames->setVisible(false);
			moreGames->setPosition({-1000, 1000});
		}

		rightMenu = static_cast<CCMenu*>(getChildByID("right-side-menu"));
		rightX = rightMenu->getPositionX();
		rightY = rightMenu->getPositionY() - 20.f;

		if (enable) {
			bottomMenu = static_cast<CCMenu*>(getChildByID("bottom-menu"));

			if (!reDashSupport) {
				HideMenu::create(winSize, reDashSupport);
				auto hideMenu = HideMenu::getHideMenu();
				this->addChild(hideMenu);

				auto hideBtn = CCMenuItemToggler::create(
				CCSprite::createWithSpriteFrameName("hideBtn_001.png"),
				CCSprite::create("MMP_showBtn_001.png"_spr),
				this,
				menu_selector(AnimMenuLayer::hideBtnClicked)
				);
				hideMenu->addChild(hideBtn);
				hideBtn->setPosition({285, 176});
				hideMenu->updateLayout();
			}

			AnimateTitle::animate(this, winSize, speed, slideType, false);
				
			AnimateCenter::animate(this, winSize, speed, slideType, reDashSupport);

			AnimateBottom::animate(this, bottomMenu, winSize, speed, slideType, reDashSupport, false);

			AnimateLinks::animate(this, winSize, speed, slideType, linksMenu, reDashSupport, btnRepos, false);

			AnimateSide::animate(this, winSize, speed, slideType, btnRepos, reDashSupport, false);
			AnimateSide::doMisc(this, reDashSupport);

			AnimateProfile::animate(this, winSize, speed, slideType, reDashSupport, linksMenu, profBtnRepos, btnRepos, false);

			AnimateRight::animate(this, winSize, speed, slideType, false, rightX, rightY);

			AnimateGames::animate(this, winSize, speed, slideType, reDashSupport, moreGamesBtn, false, startPos);

			if (!infoBtn) {
        		auto modInfoBtn = CCMenuItemSpriteExtra::create(
					CCSprite::createWithSpriteFrameName("GJ_plainBtn_001.png"),
	        		this,
	        		menu_selector(AnimMenuLayer::modInfoBtnClicked)
	    		);

	    		modInfoBtn->setID("info-button"_spr);

	    		if (btnRepos && !reDashSupport) {
	    			bottomMenu->addChild(modInfoBtn);
	    		}
	    		else {
	    			leftSideMenu->addChild(modInfoBtn);
	    		}

	    		auto modInfoBtnText = CCLabelBMFont::create("?", "bigFont.fnt");

	    		modInfoBtnText->setID("btn-text"_spr);

	    		modInfoBtn->addChild(modInfoBtnText);

	    		modInfoBtnText->setPosition({23.875, 25.500});
    		}
			auto modSettingsBtn = CCMenuItemSpriteExtra::create(
				CCSprite::createWithSpriteFrameName("accountBtn_settings_001.png"),
				this,
				menu_selector(AnimMenuLayer::modSettingsBtnClicked)
			);

			modSettingsBtn->setID("settings-button"_spr);

			if (btnRepos && !reDashSupport) {
				bottomMenu->addChild(modSettingsBtn);
			}
			else {
				leftSideMenu->addChild(modSettingsBtn);
			}

			leftSideMenu->updateLayout();
			bottomMenu->updateLayout();

			geode::log::info("OMM: {}", reDashSupport);

			queueInMainThread([self = WeakRef(this)]{ if (auto s = self.lock()) { AnimateBottom::createWarning();} });
		}
		return true;

	}


	void modInfoBtnClicked(CCObject* sender) {
		FLAlertLayer::create(
			"Mod Info",
			"This Mod Reworks The Main Menu With Animations and other!",
			"OK"
		)->show();
	}

	void modSettingsBtnClicked(CCObject* sender) {
		openSettingsPopup(Mod::get(), false);
		log::info("Opened Settings");
	}
		

	void hideBtnClicked(CCObject* sender) {
		menusAreHidden = !static_cast<CCMenuItemToggler*>(sender)->isToggled();
		if (menusAreHidden) {
			AnimateTitle::hide(this, winSize, speed, slideType);
			AnimateGames::hide(this, winSize, speed, slideType, reDashSupport, moreGamesBtn);
			AnimateCenter::hide(this, winSize, speed, slideType, reDashSupport);
			AnimateSide::hide(this, winSize, speed, slideType, btnRepos, reDashSupport);
			AnimateProfile::hide(this, winSize, speed, slideType, reDashSupport, linksMenu, profBtnRepos, btnRepos);
			AnimateLinks::hide(this, winSize, speed, slideType, linksMenu, btnRepos);
			AnimateBottom::hide(this, bottomMenu, winSize, speed, slideType);
			AnimateRight::hide(this, winSize, speed, slideType);
		}
		else {
			AnimateTitle::animate(this, winSize, speed, slideType, true);
			AnimateGames::animate(this, winSize, speed, slideType, reDashSupport, moreGamesBtn, true, startPos);
			AnimateCenter::animate(this, winSize, speed, slideType, reDashSupport);
			AnimateSide::animate(this, winSize, speed, slideType, btnRepos, reDashSupport, true);
			AnimateProfile::animate(this, winSize, speed, slideType, reDashSupport, linksMenu, profBtnRepos, btnRepos, true);
			AnimateLinks::animate(this, winSize, speed, slideType, linksMenu, reDashSupport, btnRepos, true);
			AnimateBottom::animate(this, bottomMenu, winSize, speed, slideType, reDashSupport, true);
			AnimateRight::animate(this, winSize, speed, slideType, true, rightX, rightY);
		}
	}
};
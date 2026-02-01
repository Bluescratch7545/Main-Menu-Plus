#include <Geode/Geode.hpp>
#include <Geode/ui/GeodeUI.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

#include "includes/TitleAnim.hpp"
#include "includes/CenterAnim.hpp"
#include "includes/BottomAnim.hpp"
#include "includes/LinksAnim.hpp"
#include "includes/SideAnim.hpp"
#include "includes/ProfileAnim.hpp"
#include "includes/RightAnim.hpp"
#include "includes/GamesAnim.hpp"
#include "includes/HideMenu.hpp"

class $modify(AnimMenuLayer, MenuLayer) {
	$override
	bool init() {
		if (!MenuLayer::init()) return false;

		// Define enable
		bool enable = Mod::get()->getSettingValue<bool>("enable-mod");

		// Needed for the mod to work even if its desabled with the toggle
		float profileY = 45.0f;
		auto profileMenu = getChildByID("profile-menu");
		auto userName = getChildByID("player-username");

		// Define redashSupport
		auto reDashSupport = Loader::get()->isModLoaded("ninxout.redash");

		// Define slideType
		std::string slideType = Mod::get()->getSettingValue<std::string>("slide-type");

		// Makes The Speed Of The Anims Be Diff Using Setting
		int64_t speed = Mod::get()->getSettingValue<int64_t>("slide-speed");

		// Define winSize
		auto winSize = CCDirector::sharedDirector()->getWinSize();

		// Define infoBtn
		bool infoBtn = Mod::get()->getSettingValue<bool>("disable-info");

		// Define moreGamesBtn
		bool moreGamesBtn = Mod::get()->getSettingValue<bool>("toggle-moreGames");

		// Define linksMenu
		bool linksMenu = Mod::get()->getSettingValue<bool>("toggle-links");
		
		// If the mod isnt enabled & linksMenu isnt on, do this
		if(!linksMenu && !enable) {
			profileMenu->setPositionY(profileY);
			userName->setPositionY(profileY * 2 - 5.0f);
		}

		// Define btnRepos
		bool btnRepos = Mod::get()->getSettingValue<bool>("btn-repos");

		// Define links
		auto links = getChildByID("social-media-menu");

		// Define leftSideMenu
		auto leftSideMenu = getChildByID("side-menu");

		// Define profBtnRepos
		bool profBtnRepos = Mod::get()->getSettingValue<bool>("profbtnrepos");

		// if the social media menu is off in the settings, delete the social media menu
		if (!linksMenu) {
			if (links) {
				links->setPosition({-1000, 1000});
				links->setVisible(false);
			}
		}

		// Define moreGames
		auto moreGames = getChildByID("more-games-menu");

		// If Do Delete More Games
		if (!moreGamesBtn) {
			moreGames->setVisible(false);
			moreGames->setPosition({-1000, 1000});
		}

		if (enable) {
			auto bottomMenu = getChildByID("bottom-menu");

			if (!reDashSupport) {
				auto hideMenu = CCMenu::create();
    			hideMenu->setLayout(RowLayout::create());
    			hideMenu->setZOrder(9999);
    			hideMenu->setPosition({winSize.width / 2, winSize.height - 30});
				this->addChild(hideMenu);

				auto hideBtn = CCMenuItemToggler::create(
				CCSprite::createWithSpriteFrameName("hideBtn_001.png"),
				CCSprite::create("MMP_showBtn_001.png"_spr),
				hideMenu,
				menu_selector(AnimMenuLayer::hideBtnClicked)
				);
				// hideMenu->addChild(hideBtn); Beta feature so hidden
				hideBtn->setPosition({285, 176});
			}

			AnimateTitle::animate(this, winSize, speed, slideType);
				
			animateCenter(this, winSize, speed, slideType, reDashSupport);

			animateBottom(this, leftSideMenu, bottomMenu, winSize, speed, slideType, reDashSupport);

			AnimateLinks::animate(this, winSize, speed, slideType, linksMenu, reDashSupport, btnRepos);

			AnimateSide::animate(this, winSize, speed, slideType, btnRepos, reDashSupport);

			AnimateProfile::animate(this, winSize, speed, slideType, reDashSupport, linksMenu, profBtnRepos, btnRepos);

			AnimateRight::animate(this, winSize, speed, slideType);

			animateGames(this, winSize, speed, slideType, reDashSupport, moreGamesBtn);

			createHideMenu(this, winSize, speed, slideType, reDashSupport);

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

	}
};
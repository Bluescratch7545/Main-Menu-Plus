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

class $modify(MyMenuLayer, MenuLayer) {
	$override
	bool init() {
		if (!MenuLayer::init()) return false;

		// Define enable
		auto enable = Mod::get()->getSettingValue<bool>("enable-mod");

		// Needed for the mod to work even if its desabled with the toggle
		float profileY = 45.0f;
		auto profileMenu = getChildByID("profile-menu");
		auto userName = getChildByID("player-username");

		// Define redashSupport
		auto reDashSupport = Loader::get()->isModLoaded("ninxout.redash");

		// Define slideType
		auto slideType = Mod::get()->getSettingValue<std::string>("slide-type");

		// Makes The Speed Of The Anims Be Diff Using Setting
		auto speed = Mod::get()->getSettingValue<int64_t>("slide-speed");

		// Define winSize
		auto winSize = CCDirector::sharedDirector()->getWinSize();

		// Define infoBtn
		auto infoBtn = Mod::get()->getSettingValue<bool>("disable-info");

		// Define moreGamesBtn
		auto moreGamesBtn = Mod::get()->getSettingValue<bool>("toggle-moreGames");

		// Define linksMenu
		auto linksMenu = Mod::get()->getSettingValue<bool>("toggle-links");
		
		// If the mod isnt enabled & linksMenu isnt on, do this
		if(!linksMenu && !enable) {
			profileMenu->setPositionY(profileY);
			userName->setPositionY(profileY * 2 - 5.0f);
		}

		// Define btnRepos
		auto btnRepos = Mod::get()->getSettingValue<bool>("btn-repos");

		// Define links
		auto links = getChildByID("social-media-menu");

		// Define leftSideMenu
		auto leftSideMenu = getChildByID("side-menu");

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

			animateTitle(this, winSize, speed, slideType);
			
			animateCenter(this, winSize, speed, slideType, reDashSupport);

			animateBottom(this, leftSideMenu, bottomMenu, winSize, speed, slideType, reDashSupport);

			animateLinks(this, winSize, speed, slideType, linksMenu, reDashSupport, btnRepos);

			animateSide(this, winSize, speed, slideType, btnRepos, reDashSupport);

			animateProfile(this, winSize, speed, slideType, reDashSupport, linksMenu);

			animateRight(this, winSize, speed, slideType);

			animateGames(this, winSize, speed, slideType, reDashSupport, moreGamesBtn);

			if (!infoBtn) {
        		auto modInfoBtn = CCMenuItemSpriteExtra::create(
					CCSprite::createWithSpriteFrameName("GJ_plainBtn_001.png"),
	        		this,
	        		menu_selector(MyMenuLayer::modInfoBtnClicked)
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
				menu_selector(MyMenuLayer::modSettingsBtnClicked)
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
};
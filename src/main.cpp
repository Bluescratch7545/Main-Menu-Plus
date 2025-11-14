#include <Geode/Geode.hpp>
#include <Geode/ui/GeodeUI.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
	$override
	bool init() {
		if (!MenuLayer::init()) return false;

		// Define targetMGXSetting
		auto targetMGXSetting = Mod::get()->getSettingValue<int64_t>("more-games-target-pos");

		// Define enable
		auto enable = Mod::get()->getSettingValue<bool>("enable-mod");

		// Needed for the mod to work even if its desabled with the toggle
		float profileY = 45.0f;
		auto profileMenu = getChildByID("profile-menu");
		auto userName = getChildByID("player-username");

		// Explainable
		if (!enable) {
			profileMenu->setPositionY(profileY);
			userName->setPositionY(profileY *2 -5.0f);
		}

		// Define redashSupport
		auto reDashSupport = Mod::get()->getSettingValue<bool>("redash-support");

		// Define slideType
		auto slideType = Mod::get()->getSettingValue<std::string>("slide-type");

		// Makes The Speed Of The Anims Be Diff Using Setting
		auto speed = Mod::get()->getSettingValue<int64_t>("slide-speed");

		// Define winSize
		auto winSize = CCDirector::sharedDirector()->getWinSize();

		// Define 4x3Fix
		auto fourXThreeFix = Mod::get()->getSettingValue<bool>("4x3Fix");

		// Define infoBtn
		auto infoBtn = Mod::get()->getSettingValue<bool>("disable-info");

		// Define moreGamesBtn
		auto moreGamesBtn = Mod::get()->getSettingValue<bool>("toggle-moreGames");

		// Define linksMenu
		auto linksMenu = Mod::get()->getSettingValue<bool>("toggle-links");

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
			// Define Logo
			auto Logo = getChildByID("main-title");
			

			// SLides The Title In
			if (Logo) {
				// Move Logo
				Logo->setPosition({ winSize.width / 2, winSize.height + 100});

        		auto logoMoveAction = CCMoveTo::create(speed + 3.0f, CCPoint{winSize.width / 2, winSize.height - 70});

     			//Movement define
        		auto easeEXPLogoMoveAction = CCEaseExponentialOut::create(logoMoveAction);
				auto easeBNCLogoMoveAction = CCEaseBounceOut::create(logoMoveAction);
				auto easeBCKLogoMoveAction = CCEaseBackOut::create(logoMoveAction);

       			if (slideType == "Exponential Out") {
            		Logo->runAction(easeEXPLogoMoveAction);
        		}
        		else if (slideType == "Bounce Out") {
           			Logo->runAction(easeBNCLogoMoveAction);
        		}
        		else {
           			Logo->runAction(easeBCKLogoMoveAction);
        		}
			}

			// Define bottomMenu
			auto bottomMenu = getChildByID("bottom-menu");

			// Needed.
			float startY = -200.0f; // Start Pos

			if (!reDashSupport) {		

				// Slides The Center Buttons
				auto mainMenu = getChildByID("main-menu");

				float targetMY = 160.0f; // Target Pos

				// Start below screen
				mainMenu->setPositionY(startY);

				// Slide Up
				auto btnMMoveAction = CCMoveTo::create(speed, CCPoint{mainMenu->getPositionX(), targetMY});
				auto easeEXPBtnMMoveAction = CCEaseExponentialOut::create(btnMMoveAction);
				auto easeBNCBtnMMoveAction = CCEaseBounceOut::create(btnMMoveAction);
				auto easeBCKBtnMMoveAction = CCEaseBackOut::create(btnMMoveAction);

				// Depends on the slideType setting
				// runs movement
				if (slideType == "Exponential Out") {
					mainMenu->runAction(easeEXPBtnMMoveAction);
				}
				else if (slideType == "Bounce Out") {
					mainMenu->runAction(easeBNCBtnMMoveAction);
				}
				else {
					mainMenu->runAction(easeBCKBtnMMoveAction);
				}
			}
			// Slide Bottom menu
			float targetBY = 45.0f;
			auto bottomMenuXPos = bottomMenu->getPositionX();

			// Needed.
			if (reDashSupport) {
				targetBY = 153.0f;
			}

			// Start below Screen (again)
			bottomMenu->setPositionY(startY);

			// Slide Up
			auto btnBMoveAction = CCMoveTo::create(speed + 0.5f, CCPoint{bottomMenuXPos, targetBY});
			auto easeEXPBtnBMoveAction = CCEaseExponentialOut::create(btnBMoveAction);
			auto easeBNCBtnBMoveAction = CCEaseBounceOut::create(btnBMoveAction);
			auto easeBCKBtnBMoveAction = CCEaseBackOut::create(btnBMoveAction);

			// Run Movement
			if (slideType == "Exponential Out") {
				bottomMenu->runAction(easeEXPBtnBMoveAction);
			}
			else if (slideType == "Bounce Out") {
				bottomMenu->runAction(easeBNCBtnBMoveAction);
			}
			else {
				bottomMenu->runAction(easeBCKBtnBMoveAction);
			}

			// Slides the links menu, ONLY if the linksMenu is True
			if (linksMenu) {
				// Define The Needed Thing
				auto linksXPos = links->getPositionX();
				// Start under screen
				links->setPosition({linksXPos, startY});
				
				// Define Movement
				auto grpLinksMoveAction = CCMoveTo::create(speed + 1.0f, CCPoint{linksXPos, targetBY - 33.0f});
				auto easeEXPGrpLinksMoveAction = CCEaseExponentialOut::create(grpLinksMoveAction);
				auto easeBNCGrpLinksMoveAction = CCEaseBounceOut::create(grpLinksMoveAction);
				auto easeBCKGrpLinksMoveAction = CCEaseBackOut::create(grpLinksMoveAction);

				// Run Movement
				if (slideType == "Exponential Out") {
					links->runAction(easeEXPGrpLinksMoveAction);
				}
				else if (slideType == "Bounce Out") {
					links->runAction(easeBNCGrpLinksMoveAction);
				}
				else {
					links->runAction(easeBCKGrpLinksMoveAction);
				}
				
			}

			// settings shortcut
			auto modSettingsBtn = CCMenuItemSpriteExtra::create(
				CCSprite::createWithSpriteFrameName("accountBtn_settings_001.png"),
				this,
				menu_selector(MyMenuLayer::modSettingsBtnClicked)
			);

			modSettingsBtn->setID("main.menu.plus/settings-button");

			// Mod Info Btn
			if (!infoBtn) {
				auto modInfoBtn = CCMenuItemSpriteExtra::create(
					CCSprite::createWithSpriteFrameName("GJ_plainBtn_001.png"),
					this,
					menu_selector(MyMenuLayer::modInfoBtnClicked)
				);

				modInfoBtn->setID("main.menu.plus/info-button");

				// Fixes The Mobile Issue Of Buttons Overlap
				if (btnRepos && !reDashSupport) {
					leftSideMenu->addChild(modInfoBtn);
				}
				else {
					bottomMenu->addChild(modInfoBtn);
				}

				auto modInfoBtnText = CCLabelBMFont::create("?", "bigFont.fnt");

				modInfoBtnText->setID("main.menu.plus/btn-text");

				modInfoBtn->addChild(modInfoBtnText);

				modInfoBtnText->setPosition({23.875, 25.500});
			}

			// Fixes The Mobile Issue Of Buttons Overlap
			if (btnRepos && !reDashSupport) {
				leftSideMenu->addChild(modSettingsBtn);
			}
			else {
				bottomMenu->addChild(modSettingsBtn);
			}

			// Updates The Menus Layout
			leftSideMenu->updateLayout();
			bottomMenu->updateLayout();

			// Only Works if btnRepos is set to TRUE
			if (btnRepos && !reDashSupport) {
				float startLSMX = -99.0f;
				float targetLSMX = 25.0f;
				auto leftSideMenuYPos = leftSideMenu->getPositionY();

				// Start next to screen
				leftSideMenu->setPositionX(startLSMX);

				// Movement define
				auto grpLSMMoveAction = CCMoveTo::create(speed + 0.5f, CCPoint{targetLSMX, leftSideMenuYPos});
				auto easeEXPGrpLSMMoveAction = CCEaseExponentialOut::create(grpLSMMoveAction);
				auto easeBNCGrpLSMMoveAction = CCEaseBounceOut::create(grpLSMMoveAction);
				auto easeBCKGrpLSMMoveAction = CCEaseBackOut::create(grpLSMMoveAction);

				if (slideType == "Exponential Out") {
					leftSideMenu->runAction(easeEXPGrpLSMMoveAction);
				}
				else if (slideType == "Bounce Out") {
					leftSideMenu->runAction(easeBNCGrpLSMMoveAction);
				}
				else {
					leftSideMenu->runAction(easeBCKGrpLSMMoveAction);
				}
			}

			// Slide Profile
			float startPX = 0.0f;
			float targetPX = 90.0f;
			float targetUNX = 45.0f;
			float uNYDeviation = 40.0f;

			// Needed.
			if (reDashSupport) {
				profileY = 30.0f;
				targetPX = 95.0f;
				targetUNX = 55.0f;
				uNYDeviation = 25.0f;
			}
			
			if (linksMenu) {
				profileY = 95.0f;
				uNYDeviation = 35.0f;
			}

			// Start next TO screen
			profileMenu->setPositionX(startPX);
			userName->setPositionX(startPX);

			// Slide Right
			auto btnPMoveAction = CCMoveTo::create(speed + 1.5f, CCPoint{targetPX, profileY});
			auto uNMoveAction = CCMoveTo::create(speed + 1.0f, CCPoint{targetUNX, profileY + uNYDeviation});
			auto easeEXPBtnPMoveAction = CCEaseExponentialOut::create(btnPMoveAction);
			auto easeEXPUNMoveAction = CCEaseExponentialOut::create(uNMoveAction);
			auto easeBNCBtnPMoveAction = CCEaseBounceOut::create(btnPMoveAction);
			auto easeBNCUNMoveAction = CCEaseBounceOut::create(uNMoveAction);
			auto easeBCKBtnPMoveAction = CCEaseBackOut::create(btnPMoveAction);
			auto easeBCKUNMoveAction = CCEaseBackOut::create(uNMoveAction);

			// Run Movement
			if (slideType == "Exponential Out") {
				profileMenu->runAction(easeEXPBtnPMoveAction);
				userName->runAction(easeEXPUNMoveAction);
			}
			else if (slideType == "Bounce Out") {
				profileMenu->runAction(easeBNCBtnPMoveAction);
				userName->runAction(easeBNCUNMoveAction);
			}
			else {
				profileMenu->runAction(easeBCKBtnPMoveAction);
				userName->runAction(easeBCKUNMoveAction);
			}

			// Needed.
			float startMGX = 999.0f;
			float targetMGX = targetMGXSetting * 100;

			if (reDashSupport) {
				targetMGX = targetMGXSetting * 100 - 191.0f;
			}

			// This Will Work If moreGamesBtn is True, but not if reDashSupport is on
			// Slides More Games
			if (!reDashSupport) {
				// fixes The 4:3 bug
				if (fourXThreeFix) {
					targetMGX = targetMGXSetting * 100 - 100.0f;
				}

				// Start Next To Screen Right
				moreGames->setPosition(startMGX, profileY); // A Bit Of Reusing

				// Slide Left
				auto btnMGMoveAction = CCMoveTo::create(speed + 1.0f, CCPoint{targetMGX, profileY});
				auto easeEXPBtnMGMoveAction = CCEaseExponentialOut::create(btnMGMoveAction);
				auto easeBNCBtnMGMoveAction = CCEaseBounceOut::create(btnMGMoveAction);
				auto easeBCKBtnMGMoveAction = CCEaseBackOut::create(btnMGMoveAction);

				// Run Action
				if (slideType == "Exponential Out") {
					moreGames->runAction(easeEXPBtnMGMoveAction);
				}
				else if (slideType == "Bounce Out") {
					moreGames->runAction(easeBNCBtnMGMoveAction);
				}
				else {
					moreGames->runAction(easeBCKBtnMGMoveAction);
				}
			};

			// Slide Right Side Menu
			auto rightSideMenu = getChildByID("right-side-menu");
			auto rSMDY = rightSideMenu->getPositionY();

			// start off-screen
			rightSideMenu->setPosition(startMGX, rSMDY);

			// Slide
			auto grpRSMMoveAction = CCMoveTo::create(speed + 2.0f, CCPoint{targetMGX + 20.0f, rSMDY}); // More Reusing
			auto easeEXPGrpRSMMoveAction = CCEaseExponentialOut::create(grpRSMMoveAction);
			auto easeBNCGrpRSMMoveAction = CCEaseBounceOut::create(grpRSMMoveAction);
			auto easeBCKGrpRSMMoveAction = CCEaseBackOut::create(grpRSMMoveAction);

			// Run Action
			if (slideType == "Exponential Out") {
				rightSideMenu->runAction(easeEXPGrpRSMMoveAction);
			}
			else if (slideType == "Bounce Out") {
				rightSideMenu->runAction(easeBNCGrpRSMMoveAction);
			}
			else {
				rightSideMenu->runAction(easeBCKGrpRSMMoveAction);
			};
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
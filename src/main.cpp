#include <Geode/Geode.hpp>
#include <Geode/ui/GeodeUI.hpp>
#include <geode.custom-keybinds/include/Keybinds.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;
using namespace keybinds;

$execute {
	BindManager::get()->registerBindable({
		"open-settings"_spr,
		"Main Menu Plus: Open Settings",
		"Open Settings for Main Menu Plus",
		{ Keybind::create(KEY_Q, Modifier::None) },
		"Main Menu Plus/ Open Settings"
	});
}

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

		// DELETE social media thing
		if (auto links = this->getChildByID("social-media-menu")) {
			links->setVisible(false);
			links->setPosition({-1000, 1000});
		}

		// Define moreGamesValue
		auto moreGamesValue = Mod::get()->getSettingValue<bool>("toggle-moreGames");

		// Define moreGames
		auto moreGames = getChildByID("more-games-menu");

		// If Do Delete More Games
		if (!moreGamesValue) {
			moreGames->setVisible(false);
			moreGames->setPosition({-1000, 1000});
		}

		if (enable) {
			// Define Logo
			auto Logo = getChildByID("main-title");
			

			// SLides The Title In
			if (Logo) {
				// Start The Logo Up, Up, And Above!
				Logo->setPosition(CCPoint{winSize.width / 2, winSize.height + 100});

				// Slide To Normal, Boring Position
				auto logoMoveAction = CCMoveTo::create(speed + 3.0f, CCPoint{winSize.width / 2, winSize.height - 70});
				// Defines All 3 Way Of Moving
				auto easeEXPLogoMoveAction = CCEaseExponentialOut::create(logoMoveAction);
				auto easeBNCLogoMoveAction = CCEaseBounceOut::create(logoMoveAction);
				auto easeBCKLogoMoveAction = CCEaseBackOut::create(logoMoveAction);

				// Main Thing That Defines What Movement To Use (i will refer to it as MVMNTD)
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

			// Mod Info Btn
			if (!infoBtn) {
				auto modInfoBtn = CCMenuItemSpriteExtra::create(
					CCSprite::createWithSpriteFrameName("GJ_plainBtn_001.png"),
					this,
					menu_selector(MyMenuLayer::modInfoBtnClicked)
				);

				modInfoBtn->setID("main.menu.plus/info-button");

				bottomMenu->addChild(modInfoBtn);
				modInfoBtn->setScale(1.1f);

				auto modInfoBtnText = CCLabelBMFont::create("?", "bigFont.fnt");

				modInfoBtnText->setID("main.menu.plus/btn-text");

				modInfoBtn->addChild(modInfoBtnText);

				modInfoBtnText->setPosition({23.875, 25.500});
			}

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

			// Needed.
			if (reDashSupport) {
				targetBY = 153.0f;
			}

			// Start below Screen (again)
			bottomMenu->setPositionY(startY);

			// Slide Up
			auto btnBMoveAction = CCMoveTo::create(speed + 0.5f, CCPoint{bottomMenu->getPositionX(), targetBY});
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

			// settings shortcut
			auto modSettingsBtn = CCMenuItemSpriteExtra::create(
				CCSprite::createWithSpriteFrameName("GJ_plainBtn_001.png"),
				this,
				menu_selector(MyMenuLayer::modSettingsBtnClicked)
			);

			modSettingsBtn->setID("main.menu.plus/settings-button");

			bottomMenu->addChild(modSettingsBtn);

			// add text for setting shortcut btn
			auto modSettingsBtnText = CCLabelBMFont::create("MS", "goldFont.fnt");

			modSettingsBtnText->setID("main.menu.plus/btn-text-settings");
			modSettingsBtnText->setScale(0.5f);

			modSettingsBtn->addChild(modSettingsBtnText);

			modSettingsBtnText->setPosition({23.5, 24});

			auto modSettingsBtnCog = CCSprite::createWithSpriteFrameName("blackCogwheel_02_color_001.png");
			modSettingsBtnCog->setScale(0.7f);
			modSettingsBtnCog->setPosition({23.5, 24});
			modSettingsBtnCog->setID("main.menu.plus/btn-overlay");
			modSettingsBtnCog->setColor({ 255, 208, 0 });

			modSettingsBtn->addChild(modSettingsBtnCog);


			// Slide Profile
			float startPX = 0.0f;
			float targetPX = 90.0f;
			float targetUNX = 45.0f;

			// Needed.
			if (reDashSupport) {
				profileY = 30.0f;
				targetPX = 95.0f;
				targetUNX = 55.0f;
			}

			// Start NEXT TO screen
			profileMenu->setPositionX(startPX);
			userName->setPositionX(startPX);

			// Slide Right
			auto btnPMoveAction = CCMoveTo::create(speed + 1.5f, CCPoint{targetPX, profileY});
			auto uNMoveAction = CCMoveTo::create(speed + 1.0f, CCPoint{targetUNX, profileY * 2 - 5});
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

			// This Will Work If moreGamesValue is True, but not if reDashSupport is on
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

			this->addEventListener<InvokeBindFilter>([=](InvokeBindEvent* event) {
				if (event->isDown()) {
					openSettingsPopup(Mod::get(), false);
				}

				return ListenerResult::Propagate;
			}, "open-settings"_spr);

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
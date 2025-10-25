#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
	$override
	bool init() {
		if (!MenuLayer::init()) return false;

		// Makes The Speed Of The Anims Be Diff Using Setting
		auto speed = Mod::get()->getSettingValue<int64_t>("slide-speed");

		// Define winSize
		auto winSize = CCDirector::sharedDirector()->getWinSize();

		// Define 4x3Fix
		auto fourXThreeFix = Mod::get()->getSettingValue<bool>("4x3Fix");

		// Define extraBtns
		auto extraBtns = Mod::get()->getSettingValue<bool>("extra-buttons");

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

		// Define Logo
		auto Logo = this->getChildByID("main-title");

		// SLides The Title In
		if (Logo) {
			// Start The Logo Up, Up, And Above!
			Logo->setPosition(CCPoint{winSize.width / 2, winSize.height + 100});

			// Slide To Normal, Boring Position
			auto logoMoveAction = CCMoveTo::create(speed + 3.0f, CCPoint{winSize.width / 2, winSize.height - 70});
			// Makes The movement exponential out instead of having movement type: none
			auto easeLogoMoveAction = CCEaseExponentialOut::create(logoMoveAction);
			Logo->runAction(easeLogoMoveAction);
		}

		// Define bottomMenu
		auto bottomMenu = getChildByID("bottom-menu");

		// Mod Info Btn
		if (!infoBtn) {
			auto modInfoBtn = CCMenuItemSpriteExtra::create(
				CCSprite::createWithSpriteFrameName("GJ_infoBtn_001.png"),
				this,
				menu_selector(MyMenuLayer::modInfoBtnClicked)
			);

			bottomMenu->addChild(modInfoBtn);
			modInfoBtn->setScale(1.05f);
		}

		// Slides The Center Buttons
		auto mainMenu = getChildByID("main-menu");

		float startY = -200.0f; // Start Pos
		float targetMY = 160.0f; // Target Pos

		// Start below screen
		mainMenu->setPositionY(startY);

		// Slide Up
		auto btnMMoveAction = CCMoveTo::create(speed, CCPoint{mainMenu->getPositionX(), targetMY});
		auto easeBtnMMoveAction = CCEaseExponentialOut::create(btnMMoveAction);

		// Run Movement
		mainMenu->runAction(easeBtnMMoveAction);

		// Slide Bottom menu
		float targetBY = 45.0f;

		// Start below Screen (again)
		bottomMenu->setPositionY(startY);

		// Slide Up
		auto btnBMoveAction = CCMoveTo::create(speed + 0.5f, CCPoint{bottomMenu->getPositionX(), targetBY});
		auto easeBtnBMoveAction = CCEaseExponentialOut::create(btnBMoveAction);

		// Run Movement
		bottomMenu->runAction(easeBtnBMoveAction);

		// Slide Profile
		auto profileMenu = getChildByID("profile-menu");
		auto userName = getChildByID("player-username");

		float profileY = targetBY;
		float startPX = 0.0f;
		float targetPX = 90.0f;

		// Start NEXT TO screen
		profileMenu->setPosition(startPX, profileY);
		userName->setPosition(startPX, profileY * 2 + 10.0f);

		// Slide Right
		auto btnPMoveAction = CCMoveTo::create(speed + 1.5f, CCPoint{targetPX, profileY});
		auto uNMoveAction = CCMoveTo::create(speed + 1.0f, CCPoint{targetPX / 2, profileY * 2 - 10});
		auto easeBtnPMoveAction = CCEaseExponentialOut::create(btnPMoveAction);
		auto easeUNMoveAction = CCEaseExponentialOut::create(uNMoveAction);

		// Run Movement
		profileMenu->runAction(easeBtnPMoveAction);
		userName->runAction(easeUNMoveAction);

		// This Will Work If moreGamesValue is True
		// Slides More Games
		float startMGX = 999.0f;
		float targetMGX = 500.0f;

		// Fixes The 4:3 bug
		if (fourXThreeFix) {
			targetMGX = 400.0f;
		}

		// Start Next To Screen Right
		moreGames->setPosition(startMGX, profileY); // A Bit Of Reusing

		// Slide Left
		auto btnMGMoveAction = CCMoveTo::create(speed + 1.0f, CCPoint{targetMGX, profileY});
		auto easeBtnMGMoveAction = CCEaseExponentialOut::create(btnMGMoveAction);

		// Run Action
		moreGames->runAction(easeBtnMGMoveAction);

		// Slide Right Side Menu (btw im getting bored of saying "SLIDE THE _________________________")
		auto rightSideMenu = getChildByID("right-side-menu");
		auto rSMDY = rightSideMenu->getPositionY();

		// start off-screen
		rightSideMenu->setPosition(startMGX, rSMDY);

		// Slide
		auto grpRSMMoveAction = CCMoveTo::create(speed + 2.0f, CCPoint{targetMGX + 20.0f, rSMDY});
		auto easeGrpRSMMoveAction = CCEaseExponentialOut::create(grpRSMMoveAction);

		// Run Action
		rightSideMenu->runAction(easeGrpRSMMoveAction);

		if (extraBtns) {
			// Add Extra Buttons
			auto credits = CCMenuItemSpriteExtra::create(
				CCSprite::createWithSpriteFrameName("communityCreditsBtn_001.png"),
				this,
				menu_selector(MyMenuLayer::creditsBtnClicked)
			);

			auto changelog = CCMenuItemSpriteExtra::create(
				CCSprite::createWithSpriteFrameName("GJ_chatBtn_001.png"),
				this,
				menu_selector(MyMenuLayer::changelogBtnClicked)
			);

			bottomMenu->addChild(changelog);
			bottomMenu->addChild(credits);
			credits->setScale(1.3f);
			changelog->setScale(1.1f);
		}

		return true;
	}

	void modInfoBtnClicked(CCObject* sender) {
		FLAlertLayer::create(
			"Mod Info",
			"This Mod Reworks The Main Menu With Animations and other!",
			"OK"
		)->show();
	};

	void creditsBtnClicked(CCObject* sender) {
		FLAlertLayer::create(
			"Credits",
			"Thank You, Rob For Making This Awesome Game, Thanks Geode Team For This Mod Loader, and Thank You For Downloading This Mod!",
			"OK"
		)->show();
	};

	void changelogBtnClicked(CCObject* sender) {
		FLAlertLayer::create(
			"Changelog",
			"v1.1.0: Added 4:3 fix and More Buttons",
			"OK"
		)->show();
	}
};
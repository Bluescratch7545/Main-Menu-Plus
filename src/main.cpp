#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
	$override
	bool init() {
		if (!MenuLayer::init()) return false;

		// Define winSize
		auto winSize = CCDirector::sharedDirector()->getWinSize();

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

		// Removes Title
		if (auto oldLogo = this->getChildByID("main-title")) {
   			oldLogo->setVisible(false);
		}

		// SLides The Title In
		auto title = CCSprite::createWithSpriteFrameName("GJ_logo_001.png");
		if (title) {
			// Start The Logo Up, Up, And Above!
			title->setPosition(CCPoint{winSize.width / 2, winSize.height + 100});
			this->addChild(title);

			// Slide To Normal, Boring Position
			auto logoMoveAction = CCMoveTo::create(2.0f, CCPoint{winSize.width / 2, winSize.height - 70});
			// Makes The movement exponential out instead of having movement type: none
			auto easeLogoMoveAction = CCEaseExponentialOut::create(logoMoveAction);
			title->runAction(easeLogoMoveAction);
		}

		// Define bottomMenu
		auto bottomMenu = getChildByID("bottom-menu");

		// Mod Info Btn
		auto modInfoBtn = CCMenuItemSpriteExtra::create(
			CCSprite::createWithSpriteFrameName("GJ_reportBtn_001.png"),
			this,
			menu_selector(MyMenuLayer::modInfoBtnClicked)
		);

		bottomMenu->addChild(modInfoBtn);
		modInfoBtn->setScale(1.05f);

		// Slides The Center Buttons
		auto mainMenu = getChildByID("main-menu");

		float startY = -200.0f; // Start Pos
		float targetMY = 160.0f; // Target Pos

		// Start below screen
		mainMenu->setPositionY(startY);

		// Slide Up
		auto btnMMoveAction = CCMoveTo::create(2.0f, CCPoint{mainMenu->getPositionX(), targetMY});
		auto easeBtnMMoveAction = CCEaseExponentialOut::create(btnMMoveAction);

		// Run Movement
		mainMenu->runAction(easeBtnMMoveAction);

		// Slide Bottom menu
		float targetBY = 45.0f;

		// Start below Screen (again)
		bottomMenu->setPositionY(startY);

		// Slide Up
		auto btnBMoveAction = CCMoveTo::create(2.0f, CCPoint{bottomMenu->getPositionX(), targetBY});
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
		auto btnPMoveAction = CCMoveTo::create(2.0f, CCPoint{targetPX, profileY});
		auto uNMoveAction = CCMoveTo::create(2.0f, CCPoint{targetPX / 2, profileY * 2 - 10});
		auto easeBtnPMoveAction = CCEaseExponentialOut::create(btnPMoveAction);
		auto easeUNMoveAction = CCEaseExponentialOut::create(uNMoveAction);

		// Run Movement
		profileMenu->runAction(easeBtnPMoveAction);
		userName->runAction(easeUNMoveAction);

		// This Will Work If moreGamesValue is True
		// Slides More Games
		float startMGX = 999.0f;
		float targetMGX = 500.0f;

		// Start Next To Screen Right
		moreGames->setPosition(startMGX, profileY); // A Bit Of Reusing

		// Slide Left
		auto btnMGMoveAction = CCMoveTo::create(2.0f, CCPoint{targetMGX, profileY});
		auto easeBtnMGMoveAction = CCEaseExponentialOut::create(btnMGMoveAction);

		// Run Action
		moreGames->runAction(easeBtnMGMoveAction);

		// Slide Right Side Menu (btw im getting bored of saying "SLIDE THE _________________________")
		auto rightSideMenu = getChildByID("right-side-menu");
		auto rSMDY = rightSideMenu->getPositionY();

		// start off-screen
		rightSideMenu->setPosition(startMGX, rSMDY);

		// Slide
		auto grpRSMMoveAction = CCMoveTo::create(2.0f, CCPoint{targetMGX + 20.0f, rSMDY});
		auto easeGrpRSMMoveAction = CCEaseExponentialOut::create(grpRSMMoveAction);

		// Run Action
		rightSideMenu->runAction(easeGrpRSMMoveAction);

		return true;
	}

	void modInfoBtnClicked(CCObject* sender) {
		FLAlertLayer::create(
			"Mod Info",
			"This Mod Reworks The Main Menu With Animations and other!",
			"OK"
		)->show();
	}
};
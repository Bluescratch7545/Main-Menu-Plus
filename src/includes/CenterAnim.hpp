#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

inline void animateCenter(
    CCNode* parent,
    const CCSize& winSize,
    float speed,
    const std::string& slideType,
    bool reDashSupport
) {
    if (reDashSupport) return;

    auto mainMenu = parent->getChildByID("main-menu");
    if (!mainMenu) return;
    auto targetY = 160.0f;

    mainMenu->setPositionY(-200.0f);

    auto move = CCMoveTo::create(speed, CCPoint{mainMenu->getPositionX(), targetY});

    CCActionInterval* action = nullptr;

    if (slideType == "Exponential Out") {
        action = CCEaseExponentialOut::create(move);
    }
    else if (slideType == "Bounce Out") {
        action = CCEaseBounceOut::create(move);
    }
    else {
        action = CCEaseBackOut::create(move);
    }

    mainMenu->runAction(action);
}
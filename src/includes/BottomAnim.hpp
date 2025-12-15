#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

inline void animateBottom(
    CCNode* parent,
    CCNode* leftSideMenu,
    CCNode* bottomMenu,
    const CCSize& winSize,
    float speed,
    const std::string& slideType,
    bool reDashSupport
) {
    if (!bottomMenu) return;
    float startY = -200.0f;
    float targetY = 45.0f;
    if (reDashSupport) {
        targetY = 153.0f;
    }
    auto xPos = bottomMenu->getPositionX();

    bottomMenu->setPositionY(startY);

    auto move = CCMoveTo::create(speed + 0.5f, CCPoint{xPos, targetY});

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

    bottomMenu->runAction(action);
}
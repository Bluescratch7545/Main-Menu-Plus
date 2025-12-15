#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

inline void animateRight(
    CCNode* parent,
    const CCSize& winSize,
    float speed,
    const std::string& slideType
) {
    auto rightSideMenu = parent->getChildByID("right-side-menu");
    if (!rightSideMenu) return;

    float startX = 1000.0f;
    auto yPos = rightSideMenu->getPositionY();
    float targetX = rightSideMenu->getPositionX();

    rightSideMenu->setPositionX(startX);

    auto move = CCMoveTo::create(speed + 2.0f, CCPoint{targetX, yPos});

    CCActionInterval* action = nullptr;

    if (slideType == "Exponential Out"){
        action = CCEaseExponentialOut::create(move);
    }
    else if (slideType == "Bounce Out") {
        action = CCEaseBounceOut::create(move);
    }
    else {
        action = CCEaseBackOut::create(move);
    }

    rightSideMenu->runAction(action);
}
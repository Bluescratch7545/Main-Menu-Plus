#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

inline void animateSide(
    CCNode* parent,
    const CCSize& winSize,
    float speed,
    const std::string& slideType,
    bool btnRepos,
    bool reDashSupport
) {
    if (!btnRepos && reDashSupport) return;

    auto leftSideMenu = parent->getChildByID("side-menu");
    if (!leftSideMenu) return;
    float startX = -99.0f;
    float targetX = 25.0f;
    auto yPos = leftSideMenu->getPositionY();

    leftSideMenu->setPositionX(startX);

    auto move = CCMoveTo::create(speed + 0.5f, CCPoint{targetX, yPos});

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

    leftSideMenu->runAction(action);
}
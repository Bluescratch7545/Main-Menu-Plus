#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

inline void animateProfile(
    CCNode* parent,
    const CCSize& winSize,
    float speed,
    const std::string& slideType,
    bool reDashSupport,
    bool linksMenu
) {
    auto profile = parent->getChildByID("profile-menu");
    auto userName = parent->getChildByID("player-username");
    if (!profile || !userName) return;

    auto profileY = 286.0f;
    float startX = 999.0f;
    float targetX = 564.0f;
    float targetUNX = 519.0f;
    float yDeviation = 40.0f;
    if (reDashSupport) {
        startX = 0.0f;
        profileY = 30.0f;
        targetX = 95.0f;
        targetUNX = 55.0f;
        yDeviation = 25.0f;
    }

    profile->setPositionX(startX);
    userName->setPositionX(startX);

    auto move = CCMoveTo::create(speed + 1.5f, CCPoint{targetX, profileY});
    auto uNMove = CCMoveTo::create(speed + 1.0f, CCPoint{targetUNX, profileY - yDeviation});

    CCActionInterval* action = nullptr;
    CCActionInterval* uNAction = nullptr;

    if (slideType == "Exponential Out") {
        action = CCEaseExponentialOut::create(move);
        uNAction = CCEaseExponentialOut::create(uNMove);
    }
    else if (slideType == "Bounce Out") {
        action = CCEaseBounceOut::create(move);
        uNAction = CCEaseBounceOut::create(uNMove);
    }
    else {
        action = CCEaseBackOut::create(move);
        uNAction = CCEaseBackOut::create(uNMove);
    }

    profile->runAction(action);
    userName->runAction(uNAction);
}
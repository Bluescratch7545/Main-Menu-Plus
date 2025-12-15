#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

inline void animateTitle(
    CCNode* parent,
    const CCSize& winSize,
    float speed,
    const std::string& slideType
) {
    auto Logo = parent->getChildByID("main-title");
    if (!Logo) return;

    Logo->setPosition({ winSize.width / 2, winSize.height + 100});

    auto move = CCMoveTo::create(speed + 3.f, CCPoint{winSize.width / 2, winSize.height - 70.0f});

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

    Logo->runAction(action);
}
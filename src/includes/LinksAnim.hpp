#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

inline void animateLinks(
    CCNode* parent,
    const CCSize& winSize,
    float speed,
    const std::string& slideType,
    bool linksMenu,
    bool reDashSupport,
    bool btnRepos
) {
    auto links = parent->getChildByID("social-media-menu");
    if (!links) return;

    float startY = -200.0f;
    float targetY = 12.0f;
    if (reDashSupport) {
        targetY = 120.0f;
    }
    auto xPos = links->getPositionX() + 28.0f;
    if (btnRepos) {
        xPos = links->getPositionX();
    }

    links->setPositionY(startY);

    auto move = CCMoveTo::create(speed + 1.0f, CCPoint{xPos, targetY});

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

    links->runAction(action);
}
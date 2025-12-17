#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

inline void animateGames(
    CCNode* parent,
    const CCSize& winSize,
    float speed,
    const std::string& slideType,
    bool reDashSupport,
    bool moreGamesValue
) {
    if (reDashSupport || !moreGamesValue) return;

    auto moreGames = parent->getChildByID("more-games-menu");
    if (!moreGames) return;

    float startX = 999.0f;
    float targetX = moreGames->getPositionX();
    auto yPos = moreGames->getPositionY();

    moreGames->setPositionX(startX);

    auto move = CCMoveTo::create(speed + 1.0f, CCPoint{targetX, yPos});

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

    moreGames->runAction(action);
    
    auto moreGamesBtn = static_cast<CCMenuItemSpriteExtra*>(moreGames->getChildByID("more-games-button"));
    moreGamesBtn->setScale(0.7f);
    moreGamesBtn->m_baseScale = 0.7f;
}
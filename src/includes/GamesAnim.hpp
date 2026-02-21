#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

class AnimateGames : public CCNode {
protected:

    bool init(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool reDashSupport, bool moreGamesValue, bool isFromHide, float load_pos) {
        if (!CCNode::init()) return false;

        float speedDiff = 0.f;

        if (!isFromHide) {
            speedDiff = 1.f;
        }

        if (reDashSupport || !moreGamesValue) return false;

        auto moreGames = parent->getChildByID("more-games-menu");
        if (!moreGames) return false;

        float startX = 999.0f;
        float targetX = load_pos;
        auto yPos = moreGames->getPositionY();

        moreGames->setPositionX(startX);

        auto move = CCMoveTo::create(speed + speedDiff, CCPoint{targetX, yPos});

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

        return true;
    }

    bool moveAway(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool reDashSupport, bool moreGamesValue) {
        if (!CCNode::init()) return false;

        if (reDashSupport || !moreGamesValue) return false;

        auto moreGames = parent->getChildByID("more-games-menu");
        if (!moreGames) return false;

        float targetX = 999.f;
        auto yPos = moreGames->getPositionY();


        auto move = CCMoveTo::create(speed, CCPoint{targetX, yPos});

        CCActionInterval* action = CCEaseBackIn::create(move);

        moreGames->runAction(action);
    
        auto moreGamesBtn = static_cast<CCMenuItemSpriteExtra*>(moreGames->getChildByID("more-games-button"));
        moreGamesBtn->setScale(0.7f);
        moreGamesBtn->m_baseScale = 0.7f;

        return true;
    }

public:
    static AnimateGames *animate(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool reDashSupport, bool moreGamesValue, bool isFromHide, float loadPos) {
        auto ret = new AnimateGames();
        if (ret->init(parent, winSize, speed, slideType, reDashSupport, moreGamesValue, isFromHide, loadPos)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }

    static AnimateGames *hide(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool reDashSupport, bool moreGamesValue) {
        auto ret = new AnimateGames();
        if (ret->moveAway(parent, winSize, speed, slideType, reDashSupport, moreGamesValue)) {
            ret->autorelease(); 
            return ret;
        }

        delete ret;
        return nullptr;
    }
};
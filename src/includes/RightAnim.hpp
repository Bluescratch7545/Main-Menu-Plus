#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

class AnimateRight : public CCNode {
protected:
    bool init(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool isFromHide, float x, float y) {
        if (!CCNode::init()) return false;

        float speedDiff = 0.f;
        if (!isFromHide) {
            speedDiff = 2.f;
        }

        auto rightSideMenu = parent->getChildByID("right-side-menu");
        if (!rightSideMenu) return false;

        float startX = 1000.0f;
        auto yPos = y;
        float targetX = x;

        rightSideMenu->setPositionX(startX);

        auto move = CCMoveTo::create(speed + speedDiff, CCPoint{targetX, yPos});

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

        return true;
    }
    bool moveAway(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType) {
        if (!CCNode::init()) return false;

        auto rightSideMenu = parent->getChildByID("right-side-menu");
        if (!rightSideMenu) return false;

        auto yPos = rightSideMenu->getPositionY() - 20.0f;
        float targetX = 1000.f;

        auto move = CCMoveTo::create(speed, CCPoint{targetX, yPos});

        CCActionInterval* action = CCEaseBackIn::create(move);

        rightSideMenu->runAction(action);

        return true;
    }

public:
    static AnimateRight *animate(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool isFromHide, float x, float y) {
        auto ret = new AnimateRight();
        if (ret->init(parent, winSize, speed, slideType, isFromHide, x, y)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }

    static AnimateRight *hide(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType) {
        auto ret = new AnimateRight();
        if (ret->moveAway(parent, winSize, speed, slideType)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }
};
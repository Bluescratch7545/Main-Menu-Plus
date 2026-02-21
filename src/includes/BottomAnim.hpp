#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

class AnimateBottom : public CCNode {
protected:
    bool init(CCNode* parent, CCNode* bottomMenu, const CCSize& winSize, int64_t speed, const std::string& slideType, bool reDashSupport, bool isFromHide) {
        if (!CCNode::init()) return false;

        float speedDiff = 0.f;
        if (!isFromHide) {
            speedDiff = 0.5f;
        }
        
        if (!bottomMenu) return false;
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

        return true;
    }
    bool moveAway(CCNode* parent, CCNode* bottomMenu, const CCSize& winSize, int64_t speed, const std::string& slideType) {
        if (!CCNode::init()) return false;
        
        if (!bottomMenu) return false;
        float targetY = -200.f;
        auto xPos = bottomMenu->getPositionX();

        auto move = CCMoveTo::create(speed, CCPoint{xPos, targetY});

        CCActionInterval* action = CCEaseBackIn::create(move);

        bottomMenu->runAction(action);

        return true;
    }

public:
    static AnimateBottom *animate(CCNode* parent, CCNode* bottomMenu, const CCSize& winSize, int64_t speed, const std::string& slideType, bool reDashSupport, bool isFromHide) {
        auto ret = new AnimateBottom();
        if (ret->init(parent, bottomMenu, winSize, speed, slideType, reDashSupport, isFromHide)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }
    static AnimateBottom *hide(CCNode* parent, CCNode* bottomMenu, const CCSize& winSize, int64_t speed, const std::string& slideType) {
        auto ret = new AnimateBottom();
        if (ret->moveAway(parent, bottomMenu, winSize, speed, slideType)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }
};
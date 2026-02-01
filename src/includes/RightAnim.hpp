#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

class AnimateRight : public CCNode {
protected:
    bool init(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType) {
        if (!CCNode::init()) return false;

        auto rightSideMenu = parent->getChildByID("right-side-menu");
        if (!rightSideMenu) return false;

        float startX = 1000.0f;
        auto yPos = rightSideMenu->getPositionY() - 20.0f;
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

        return true;
    }

public:
    static AnimateRight *animate(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType) {
        auto ret = new AnimateRight();
        if (ret->init(parent, winSize, speed, slideType)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }
};
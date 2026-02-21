#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

class AnimateCenter : public CCNode {
protected:
    bool init(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool reDashSupport) {
        if (!CCNode::init()) return false;

        if (reDashSupport) return false;

        auto mainMenu = parent->getChildByID("main-menu");
        if (!mainMenu) return false;
        auto targetY = 160.0f;

        mainMenu->setPositionY(-200.0f);

        auto move = CCMoveTo::create(speed, CCPoint{mainMenu->getPositionX(), targetY});

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

        mainMenu->runAction(action);

        return true;
    }

    bool moveAway(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool reDashSupport) {
        if (!CCNode::init()) return false;

        if (reDashSupport) return false;

        auto mainMenu = parent->getChildByID("main-menu");
        if (!mainMenu) return false;
        auto targetY = -200.0f;

        auto move = CCMoveTo::create(speed, CCPoint{mainMenu->getPositionX(), targetY});

        CCActionInterval* action = CCEaseBackIn::create(move);

        mainMenu->runAction(action);

        return true;
    }

public:
    static AnimateCenter *animate(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool reDashSupport) {
        auto ret = new AnimateCenter();
        if (ret->init(parent, winSize, speed, slideType, reDashSupport)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }

    static AnimateCenter *hide(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool reDashSupport) {
        auto ret = new AnimateCenter();
        if (ret->moveAway(parent, winSize, speed, slideType, reDashSupport)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }
};
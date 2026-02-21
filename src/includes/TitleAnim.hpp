#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;
class AnimateTitle : public CCNode {
protected:
    bool init(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool isFromHide) {
        if (!CCNode::init()) return false;

        float speedDiff = 0.f;

        if (!isFromHide) {
            speedDiff = 3.f;
        }

        auto Logo = parent->getChildByID("main-title");
        if (Logo == nullptr) return false;

        Logo->setPosition({ winSize.width / 2, winSize.height + 100});

        auto move = CCMoveTo::create(speed + speedDiff, CCPoint{winSize.width / 2, winSize.height - 70.0f});

        CCActionInterval* action = CCEaseBackOut::create(move);

        Logo->runAction(action);

        return true;
    }

    bool moveAway(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType) {
        if (!CCNode::init()) return false;

        auto Logo = parent->getChildByID("main-title");
        if (Logo == nullptr) return false;

        auto move = CCMoveTo::create(speed, CCPoint{ winSize.width / 2, winSize.height + 100});

        CCActionInterval* action = CCEaseBackIn::create(move);

        Logo->runAction(action);

        return true;
    }
public:
    static AnimateTitle *animate(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool isFromHide) {
        auto ret = new AnimateTitle();
        if (ret->init(parent, winSize, speed, slideType, isFromHide)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }

    static AnimateTitle *hide(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType) {
        auto ret = new AnimateTitle();
        if (ret->moveAway(parent, winSize, speed, slideType)) {
            ret->autorelease();
            return ret;
        }

    delete ret;
    return nullptr;
    }
};
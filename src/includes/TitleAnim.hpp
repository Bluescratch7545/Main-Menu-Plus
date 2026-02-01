#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;
class AnimateTitle : public CCNode {
protected:
    bool init(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType) {
        if (!CCNode::init()) return false;

        auto Logo = parent->getChildByID("main-title");
        if (Logo == nullptr) return false;

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

        return true;
    }
public:
    static AnimateTitle *animate(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType) {
        auto ret = new AnimateTitle();
        if (ret->init(parent, winSize, speed, slideType)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }
};
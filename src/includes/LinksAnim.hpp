#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

class AnimateLinks : public CCNode {
protected:
    bool init(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool linksMenu, bool reDashSupport, bool btnRepos, bool isFromHide) {
        if (!CCNode::init()) return false;

        float speedDiff = 0.f;
        if (!isFromHide) {
            speedDiff = 1.f;
        }

        auto links = parent->getChildByID("social-media-menu");
        if (!links) return false;

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

        auto move = CCMoveTo::create(speed + speedDiff, CCPoint{xPos, targetY});

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

        return true;
    }
    bool moveAway(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool linksMenu, bool btnRepos) {
        if (!CCNode::init()) return false;

        auto links = parent->getChildByID("social-media-menu");
        if (!links) return false;

        float targetY = -200.f;
        auto xPos = links->getPositionX();

        auto move = CCMoveTo::create(speed, CCPoint{xPos, targetY});

        CCActionInterval* action = CCEaseBackIn::create(move);

        links->runAction(action);

        return true;
    }

public:
    static AnimateLinks *animate(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool linksMenu, bool reDashSupport, bool btnRepos, bool isFromHide) {
        auto ret = new AnimateLinks();
        if (ret->init(parent, winSize, speed, slideType, linksMenu, reDashSupport, btnRepos, isFromHide)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }
    static AnimateLinks *hide(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool linksMenu, bool btnRepos) {
        auto ret = new AnimateLinks();
        if (ret->moveAway(parent, winSize, speed, slideType, linksMenu, btnRepos)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }
};

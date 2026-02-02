#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

class AnimateLinks : public CCNode {
protected:
    bool init(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool linksMenu, bool reDashSupport, bool btnRepos) {
        if (!CCNode::init()) return false;

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

        return true;
    }

public:
    static AnimateLinks *animate(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool linksMenu, bool reDashSupport, bool btnRepos) {
        auto ret = new AnimateLinks();
        if (ret->init(parent, winSize, speed, slideType, linksMenu, reDashSupport, btnRepos)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }
};

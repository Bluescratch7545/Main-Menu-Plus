#pragma once
#include <Geode/Geode.hpp>
#include <Geode/utils/cocos.hpp>
#include <raydeeux.pages_api/include/PageMenu.h>

using namespace geode::prelude;

class AnimateSide : public CCNode {
protected:
    bool init(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool btnRepos, bool reDashSupport, bool isFromHide) {
        if (!CCNode::init()) return false;

        if (reDashSupport || btnRepos) return false;

        auto bottomMenu = parent->getChildByID("bottom-menu");
        auto leftSideMenu = parent->getChildByID("side-menu");
        if (!leftSideMenu || !bottomMenu) return false;

        auto children = bottomMenu->getChildrenExt();
        for (int i = children.size() - 1; i >= 0; i--) {
            Ref child = children[i];
            child->removeFromParent();
            leftSideMenu->addChild(child);
        }
    
        float spacing = 10.0f;
        auto childrenCount = leftSideMenu->getChildrenCount();
        float totalHeight = 0.0f;

        for (auto child : leftSideMenu->getChildrenExt()) {
            totalHeight += child->getContentSize().height * child->getScaleY();
        }   
        totalHeight += spacing * (childrenCount - 1);

        float speedDiff = 0.f;

        float startX = -99.0f;
        float targetX = 25.0f;
        auto yPos = 160.0f;

        if (!isFromHide) {
            speedDiff = 0.5f;
        }

        leftSideMenu->setPosition({startX, yPos});

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

        leftSideMenu->runAction(action);

        return true;
    }
    bool setPage(CCNode* parent) {
        if (!CCNode::init()) return false;

        auto leftSideMenu = parent->getChildByID("side-menu");
        static_cast<PageMenu*>(leftSideMenu)->setPaged(4, VERTICAL, 250);
        leftSideMenu->setContentSize({39.124, 212});

        return true;
    }
    bool moveAway(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool reDashSupport, bool btnRepos) {
        if (!CCNode::init()) return false;

        if (reDashSupport || btnRepos) return false;

        auto leftSideMenu = parent->getChildByID("side-menu");
        if (!leftSideMenu) return false;

        float targetX = -100.f;
        auto yPos = 160.0f;

        auto move = CCMoveTo::create(speed, CCPoint{targetX, yPos});

        CCActionInterval* action = CCEaseBackIn::create(move);

        leftSideMenu->runAction(action);

        return true;
    }

public:
    static AnimateSide *animate(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool btnRepos, bool reDashSupport, bool isFromHide) {
        auto ret = new AnimateSide();
        if (ret->init(parent, winSize, speed, slideType, btnRepos, reDashSupport, isFromHide)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }

    static AnimateSide *page(CCNode* parent) {
        auto ret = new AnimateSide();
        if (ret->setPage(parent)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }

    static AnimateSide *hide(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool btnRepos, bool reDashSupport) {
        auto ret = new AnimateSide();
        if (ret->moveAway(parent, winSize, speed, slideType, reDashSupport, btnRepos)) {
            ret->autorelease();
            return ret;
        }

        delete ret;

        return nullptr;
    }
};
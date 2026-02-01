#pragma once
#include <Geode/Geode.hpp>
#include <Geode/utils/cocos.hpp>
#include <alphalaneous.pages_api/include/PageMenu.h>

using namespace geode::prelude;

class AnimateSide : public CCNode {
protected:
    bool init(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool btnRepos, bool reDashSupport) {
        if (!CCNode::init()) return false;

        if (reDashSupport || btnRepos) return false;

        auto bottomMenu = parent->getChildByID("bottom-menu");
        auto leftSideMenu = parent->getChildByID("side-menu");
        if (!leftSideMenu || !bottomMenu) return false;
        // static_cast<PageMenu*>(leftSideMenu)->setPaged(4, VERTICAL, 250);

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

        leftSideMenu->setContentSize({34.124, 252});

        float startX = -99.0f;
        float targetX = 25.0f;
        auto yPos = 160.0f;

        leftSideMenu->setPosition({startX, yPos});

        auto move = CCMoveTo::create(speed + 0.5f, CCPoint{targetX, yPos});

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

public:
    static AnimateSide *animate(CCNode* parent, const CCSize& winSize, int64_t speed, const std::string& slideType, bool btnRepos, bool reDashSupport) {
        auto ret = new AnimateSide();
        if (ret->init(parent, winSize, speed, slideType, btnRepos, reDashSupport)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }
};
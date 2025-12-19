#pragma once
#include <Geode/Geode.hpp>
#include <Geode/utils/cocos.hpp>
#include <alphalaneous.pages_api/include/PageMenu.h>

using namespace geode::prelude;

inline void animateSide(
    CCNode* parent,
    const CCSize& winSize,
    float speed,
    const std::string& slideType,
    bool btnRepos,
    bool reDashSupport
) {
    if (reDashSupport || btnRepos) return;

    auto bottomMenu = parent->getChildByID("bottom-menu");
    auto leftSideMenu = static_cast<PageMenu*>(parent->getChildByID("side-menu"));
    if (!leftSideMenu || !bottomMenu) return;
    leftSideMenu->enablePages(true);
    leftSideMenu->setElementCount(4);
    leftSideMenu->setOrientation(VERTICAL);
    leftSideMenu->setMax(250);
    leftSideMenu->setButtonScale(0.8f);
    

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
}
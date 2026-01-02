#pragma once
#include <Geode/Geode.hpp>
using namespace geode::prelude;

inline void createHideMenu(
    CCNode* parent,
    const CCSize& winSize,
    float speed,
    const std::string& slideType,
    bool reDashSupport
) {
    if (reDashSupport) return;
    
    auto hideMenu = CCMenu::create();
    hideMenu->setLayout(RowLayout::create());
    hideMenu->setZOrder(9999);
    hideMenu->setPosition({winSize.width / 2, winSize.height - 30});
}

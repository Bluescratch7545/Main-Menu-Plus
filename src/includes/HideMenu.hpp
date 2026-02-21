#pragma once
#include <Geode/Geode.hpp>
using namespace geode::prelude;

class HideMenu : public CCMenu {
protected:
    static HideMenu *s_instance;

    CCMenu* m_hideMenu = nullptr;

    bool init(const CCSize& winSize, bool reDashSupport) {
        if (!CCNode::init()) return false;

        if (reDashSupport) return false;

        m_hideMenu = CCMenu::create();
        m_hideMenu->setLayout(RowLayout::create());
        m_hideMenu->setZOrder(99);
        m_hideMenu->setContentSize({33.0, 18.5});
        m_hideMenu->setID("hide-menu"_spr);
        m_hideMenu->updateLayout();
        m_hideMenu->setPosition({winSize.width / 2, winSize.height - 15.f});

        return true;
    }

public:
    static HideMenu *create(const CCSize& winSize, bool reDashSupport) {
        auto ret = new HideMenu();
        if (ret->init(winSize, reDashSupport)) {
            ret->autorelease();
            s_instance = ret;
            return ret;
        }

        delete ret;
        return nullptr;
    }

    static CCMenu* getHideMenu() {
        return s_instance ? s_instance->m_hideMenu : nullptr;
    }
};
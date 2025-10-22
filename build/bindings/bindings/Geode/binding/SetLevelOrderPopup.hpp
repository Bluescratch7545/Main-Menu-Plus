#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetIDPopup.hpp"

class SetLevelOrderPopup : public SetIDPopup {
public:
    static constexpr auto CLASS_NAME = "SetLevelOrderPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetLevelOrderPopup, SetIDPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetLevelOrderPopup();

    /**
     * @note[short] MacOS (ARM): 0x2e09f0
     * @note[short] MacOS (Intel): 0x34c0c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2456a8
     * @note[short] Android
     */
    static SetLevelOrderPopup* create(int levelID, int order, int amount);

    /**
     * @note[short] MacOS (ARM): 0x2e1e74
     * @note[short] MacOS (Intel): 0x34d660
     * @note[short] Windows: 0x2f4480
     * @note[short] iOS: 0x2465cc
     * @note[short] Android
     */
    bool init(int levelID, int order, int amount);

    /**
     * @note[short] MacOS (ARM): 0x2e21a0
     * @note[short] MacOS (Intel): 0x34d950
     * @note[short] Windows: 0x2f4750
     * @note[short] iOS: 0x2468d4
     * @note[short] Android
     */
    void onOrderButton(cocos2d::CCObject* sender);
    int m_levelID;
};

#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ButtonPage : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ButtonPage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ButtonPage, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ButtonPage();

    /**
     * @note[short] MacOS (ARM): 0x4fe9b4
     * @note[short] MacOS (Intel): 0x5ca160
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x419250
     * @note[short] Android
     */
    static ButtonPage* create(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, float p3);

    /**
     * @note[short] MacOS (ARM): 0x4feb6c
     * @note[short] MacOS (Intel): 0x5ca350
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x419398
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, float p3);
};

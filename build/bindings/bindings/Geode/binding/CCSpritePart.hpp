#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class CCSpritePart : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "CCSpritePart";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CCSpritePart, CCSpritePlus)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x45820
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpritePart();

    /**
     * @note[short] MacOS (ARM): 0x2f3e2c
     * @note[short] MacOS (Intel): 0x360fa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x82b9c
     * @note[short] Android
     */
    static CCSpritePart* create(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x2f51d8
     * @note[short] MacOS (Intel): 0x362320
     * @note[short] Windows: 0x46a30
     * @note[short] iOS: 0x8375c
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x2f3cbc
     * @note[short] MacOS (Intel): 0x360e20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x82aa4
     * @note[short] Android
     */
    static CCSpritePart* createWithSpriteFrameName(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x2f4060
     * @note[short] MacOS (Intel): 0x3611d0
     * @note[short] Windows: 0x46980
     * @note[short] iOS: 0x82dc4
     * @note[short] Android: Rebinded
     */
    void frameChanged(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x2f51d0
     * @note[short] MacOS (Intel): 0x362310
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool getBeingUsed();

    /**
     * @note[short] MacOS (ARM): 0x2f47f8
     * @note[short] MacOS (Intel): 0x361990
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideInactive();

    /**
     * @note[short] MacOS (ARM): 0x2f47f0
     * @note[short] MacOS (Intel): 0x361980
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void markAsNotBeingUsed();

    /**
     * @note[short] MacOS (ARM): 0x2f44f0
     * @note[short] MacOS (Intel): 0x361680
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetTextureRect();

    /**
     * @note[short] MacOS (ARM): 0x2f4170
     * @note[short] MacOS (Intel): 0x3612f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setBeingUsed(bool beingUsed);

    /**
     * @note[short] MacOS (ARM): 0x2f4504
     * @note[short] MacOS (Intel): 0x3616a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void updateDisplayFrame(gd::string frame);
    bool m_isBeingUsed;
    gd::string m_spriteFrameName;
    SpritePartDelegate* m_delegate;
};

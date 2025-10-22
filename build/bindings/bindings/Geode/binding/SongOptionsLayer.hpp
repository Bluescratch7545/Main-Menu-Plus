#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class SongOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SongOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongOptionsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SongOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x1b931c
     * @note[short] MacOS (Intel): 0x204140
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x147f88
     * @note[short] Android
     */
    static SongOptionsLayer* create(CustomSongDelegate* p0);

    /**
     * @note[short] MacOS (ARM): 0x1baab4
     * @note[short] MacOS (Intel): 0x205a20
     * @note[short] Windows: 0xc4920
     * @note[short] iOS: 0x1491e0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1b9c60
     * @note[short] MacOS (Intel): 0x204b20
     * @note[short] Windows: 0xc3880
     * @note[short] iOS: 0x1484fc
     * @note[short] Android
     */
    bool init(CustomSongDelegate* p0);

    /**
     * @note[short] MacOS (ARM): 0x1ba710
     * @note[short] MacOS (Intel): 0x2056b0
     * @note[short] Windows: 0xc47b0
     * @note[short] iOS: 0x148ed0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ba62c
     * @note[short] MacOS (Intel): 0x2055f0
     * @note[short] Windows: 0xc42a0
     * @note[short] iOS: 0x148dec
     * @note[short] Android
     */
    void onFadeIn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ba678
     * @note[short] MacOS (Intel): 0x205630
     * @note[short] Windows: 0xc42f0
     * @note[short] iOS: 0x148e38
     * @note[short] Android
     */
    void onFadeOut(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ba820
     * @note[short] MacOS (Intel): 0x2057b0
     * @note[short] Windows: 0xc4650
     * @note[short] iOS: 0x148fe0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ba8fc
     * @note[short] MacOS (Intel): 0x205860
     * @note[short] Windows: 0xc4390
     * @note[short] iOS: 0x149078
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ba6c4
     * @note[short] MacOS (Intel): 0x205670
     * @note[short] Windows: 0xc4340
     * @note[short] iOS: 0x148e84
     * @note[short] Android
     */
    void onSongPersistent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1baa48
     * @note[short] MacOS (Intel): 0x2059b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x149174
     * @note[short] Android
     */
    void updatePlaybackBtn();
    CustomSongDelegate* m_delegate;
    CCTextInputNode* m_offsetInput;
    CCMenuItemSpriteExtra* m_playbackButton;
};

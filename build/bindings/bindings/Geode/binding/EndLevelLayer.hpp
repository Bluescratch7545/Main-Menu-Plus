#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class EndLevelLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "EndLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndLevelLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): 0x419328
     * @note[short] MacOS (Intel): 0x4b06d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f8988
     * @note[short] Android: Out of line
     */
     EndLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x415a0c
     * @note[short] MacOS (Intel): 0x4ac950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f55b0
     * @note[short] Android: Rebinded
     */
     ~EndLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x41595c
     * @note[short] MacOS (Intel): 0x4ac8a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f5528
     * @note[short] Android
     */
    static EndLevelLayer* create(PlayLayer* playLayer);

    /**
     * @note[short] MacOS (ARM): 0x418b0c
     * @note[short] MacOS (Intel): 0x4afe70
     * @note[short] Windows: 0x133aa0
     * @note[short] iOS: 0x2f81f4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4192a4
     * @note[short] MacOS (Intel): 0x4b0620
     * @note[short] Windows: 0x135140
     * @note[short] iOS: 0x2f893c
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x415c30
     * @note[short] MacOS (Intel): 0x4acc80
     * @note[short] Windows: 0x131260
     * @note[short] iOS: 0x2f5654
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x417d7c
     * @note[short] MacOS (Intel): 0x4af060
     * @note[short] Windows: 0x133070
     * @note[short] iOS: 0x2f74d8
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x418a60
     * @note[short] MacOS (Intel): 0x4afd90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f8174
     * @note[short] Android: Out of line
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x419320
     * @note[short] MacOS (Intel): 0x4b06b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f8980
     * @note[short] Android: Out of line
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x418e98
     * @note[short] MacOS (Intel): 0x4b0230
     * @note[short] Windows: 0x134230
     * @note[short] iOS: 0x2f8550
     * @note[short] Android
     */
    void coinEnterFinished(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x418e4c
     * @note[short] MacOS (Intel): 0x4b01f0
     * @note[short] Windows: 0x1341f0
     * @note[short] iOS: 0x2f8504
     * @note[short] Android
     */
    void coinEnterFinishedO(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4190b0
     * @note[short] MacOS (Intel): 0x4b0420
     * @note[short] Windows: 0x1348e0
     * @note[short] iOS: 0x2f8750
     * @note[short] Android
     */
    void currencyEnterFinished();

    /**
     * @note[short] MacOS (ARM): 0x4191a8
     * @note[short] MacOS (Intel): 0x4b0520
     * @note[short] Windows: 0x134d70
     * @note[short] iOS: 0x2f8844
     * @note[short] Android
     */
    void diamondEnterFinished();

    /**
     * @note[short] MacOS (ARM): 0x4174b8
     * @note[short] MacOS (Intel): 0x4ae840
     * @note[short] Windows: 0x132d30
     * @note[short] iOS: 0x2f6d38
     * @note[short] Android
     */
    gd::string getCoinString();

    /**
     * @note[short] MacOS (ARM): 0x41770c
     * @note[short] MacOS (Intel): 0x4aea80
     * @note[short] Windows: 0x135190
     * @note[short] iOS: 0x2f6f00
     * @note[short] Android
     */
    const char* getEndText();

    /**
     * @note[short] MacOS (ARM): 0x418a68
     * @note[short] MacOS (Intel): 0x4afdb0
     * @note[short] Windows: 0x1336e0
     * @note[short] iOS: 0x2f8178
     * @note[short] Android
     */
    void goEdit();

    /**
     * @note[short] MacOS (ARM): 0x4159f0
     * @note[short] MacOS (Intel): 0x4ac920
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(PlayLayer* playLayer);

    /**
     * @note[short] MacOS (ARM): 0x417a1c
     * @note[short] MacOS (Intel): 0x4aed20
     * @note[short] Windows: 0x1335e0
     * @note[short] iOS: 0x2f71c0
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x418a64
     * @note[short] MacOS (Intel): 0x4afda0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x417c94
     * @note[short] MacOS (Intel): 0x4aef70
     * @note[short] Windows: 0x1337b0
     * @note[short] iOS: 0x2f7420
     * @note[short] Android
     */
    void onHideLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x417c20
     * @note[short] MacOS (Intel): 0x4aef00
     * @note[short] Windows: 0x132c30
     * @note[short] iOS: 0x2f73ac
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x417918
     * @note[short] MacOS (Intel): 0x4aec30
     * @note[short] Windows: 0x133460
     * @note[short] iOS: 0x2f70d4
     * @note[short] Android
     */
    void onMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4177f4
     * @note[short] MacOS (Intel): 0x4aeb30
     * @note[short] Windows: 0x133250
     * @note[short] iOS: 0x2f6fc8
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x417ab8
     * @note[short] MacOS (Intel): 0x4aedb0
     * @note[short] Windows: 0x133890
     * @note[short] iOS: 0x2f725c
     * @note[short] Android
     */
    void onRestartCheckpoint(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41825c
     * @note[short] MacOS (Intel): 0x4af550
     * @note[short] Windows: 0x133fb0
     * @note[short] iOS: 0x2f7998
     * @note[short] Android
     */
    void playCoinEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x4183f0
     * @note[short] MacOS (Intel): 0x4af6f0
     * @note[short] Windows: 0x134560
     * @note[short] iOS: 0x2f7b1c
     * @note[short] Android
     */
    void playCurrencyEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x418728
     * @note[short] MacOS (Intel): 0x4afa40
     * @note[short] Windows: 0x1349f0
     * @note[short] iOS: 0x2f7e48
     * @note[short] Android
     */
    void playDiamondEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x418c38
     * @note[short] MacOS (Intel): 0x4affd0
     * @note[short] Windows: 0x134e80
     * @note[short] iOS: 0x2f831c
     * @note[short] Android
     */
    void playEndEffect();

    /**
     * @note[short] MacOS (ARM): 0x417f0c
     * @note[short] MacOS (Intel): 0x4af1f0
     * @note[short] Windows: 0x133ab0
     * @note[short] iOS: 0x2f7658
     * @note[short] Android
     */
    void playStarEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x418b18
     * @note[short] MacOS (Intel): 0x4afea0
     * @note[short] Windows: 0x133e50
     * @note[short] iOS: 0x2f8200
     * @note[short] Android
     */
    void starEnterFinished();

    /**
     * @note[short] MacOS (ARM): 0x417d4c
     * @note[short] MacOS (Intel): 0x4af030
     * @note[short] Android
     */
    void tryShowBanner(float p0);
    PlayLayer* m_playLayer;
    bool m_notLocal;
    bool m_coinsVerified;
    bool m_unknown3;
    bool m_exiting;
    bool m_animateCoins;
    bool m_endEffectPlayed;
    cocos2d::CCMenu* m_sideMenu;
    cocos2d::CCArray* m_coinsToAnimate;
    cocos2d::CCPoint m_starsPosition;
    cocos2d::CCPoint m_orbsPosition;
    cocos2d::CCPoint m_diamondsPosition;
    int m_orbs;
    int m_stars;
    int m_moons;
    int m_diamonds;
    bool m_secretKey;
    bool m_hidden;
};

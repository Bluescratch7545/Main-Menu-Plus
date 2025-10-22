#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCPartAnimSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCPartAnimSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCPartAnimSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x83808
     * @note[short] Android: Out of line
     */
     CCPartAnimSprite();

    /**
     * @note[short] MacOS (ARM): 0x2f50a0
     * @note[short] MacOS (Intel): 0x362190
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x836e0
     * @note[short] Android: Rebinded
     */
     ~CCPartAnimSprite();

    /**
     * @note[short] MacOS (ARM): 0x2f346c
     * @note[short] MacOS (Intel): 0x360430
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8255c
     * @note[short] Android
     */
    static CCPartAnimSprite* createWithAnimDesc(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2f4b18
     * @note[short] MacOS (Intel): 0x361ca0
     * @note[short] Windows: 0x466b0
     * @note[short] iOS: 0x833f0
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x2f4b40
     * @note[short] MacOS (Intel): 0x361cc0
     * @note[short] Windows: 0x466d0
     * @note[short] iOS: 0x83418
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x2f4af0
     * @note[short] MacOS (Intel): 0x361c80
     * @note[short] Windows: 0x46690
     * @note[short] iOS: 0x833c8
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x2f4e04
     * @note[short] MacOS (Intel): 0x361f30
     * @note[short] Windows: 0x468a0
     * @note[short] iOS: 0x83604
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x2f4b68
     * @note[short] MacOS (Intel): 0x361ce0
     * @note[short] Windows: 0x466f0
     * @note[short] iOS: 0x83440
     * @note[short] Android
     */
    virtual void setBlendFunc(cocos2d::_ccBlendFunc p0);

    /**
     * @note[short] MacOS (ARM): 0x2f46bc
     * @note[short] MacOS (Intel): 0x361840
     * @note[short] Windows: 0x460c0
     * @note[short] iOS: 0x83094
     * @note[short] Android
     */
    virtual void setDisplayFrame(cocos2d::CCSpriteFrame* p0);

    /**
     * @note[short] MacOS (ARM): 0x2f4814
     * @note[short] MacOS (Intel): 0x3619b0
     * @note[short] Windows: 0x46330
     * @note[short] iOS: 0x831c0
     * @note[short] Android
     */
    virtual bool isFrameDisplayed(cocos2d::CCSpriteFrame* p0);

    /**
     * @note[short] MacOS (ARM): 0x2f482c
     * @note[short] MacOS (Intel): 0x3619d0
     * @note[short] Windows: 0x46350
     * @note[short] iOS: 0x831d8
     * @note[short] Android
     */
    virtual cocos2d::CCSpriteFrame* displayFrame();

    /**
     * @note[short] MacOS (ARM): 0x2f431c
     * @note[short] MacOS (Intel): 0x3614b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void changeTextureOfID(char const* key, char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x2f4fb8
     * @note[short] MacOS (Intel): 0x3620c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int countParts();

    /**
     * @note[short] MacOS (ARM): 0x2f4fd4
     * @note[short] MacOS (Intel): 0x3620e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void dirtify();

    /**
     * @note[short] MacOS (ARM): 0x2f45c8
     * @note[short] MacOS (Intel): 0x361750
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x83028
     * @note[short] Android
     */
    CCSpritePart* getSpriteForKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2f3558
     * @note[short] MacOS (Intel): 0x360510
     * @note[short] Windows: 0x45910
     * @note[short] iOS: 0x825e8
     * @note[short] Android
     */
    bool initWithAnimDesc(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2f4d18
     * @note[short] MacOS (Intel): 0x361e60
     * @note[short] Windows: 0x467c0
     * @note[short] iOS: 0x8351c
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2f4a48
     * @note[short] MacOS (Intel): 0x361bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x83370
     * @note[short] Android
     */
    void setFlipX(bool flipX);

    /**
     * @note[short] MacOS (ARM): 0x2f4aa0
     * @note[short] MacOS (Intel): 0x361c40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setFlipY(bool flipY);

    /**
     * @note[short] MacOS (ARM): 0x2f3ee0
     * @note[short] MacOS (Intel): 0x361050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x82c44
     * @note[short] Android
     */
    void transformSprite(SpriteDescription* description);

    /**
     * @note[short] MacOS (ARM): 0x2f4178
     * @note[short] MacOS (Intel): 0x361300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x82e84
     * @note[short] Android
     */
    void tweenSpriteTo(SpriteDescription* description, float duration);

    /**
     * @note[short] MacOS (ARM): 0x2f4834
     * @note[short] MacOS (Intel): 0x3619e0
     * @note[short] Windows: 0x46360
     * @note[short] iOS: 0x831e0
     * @note[short] Android
     */
    void tweenToFrame(cocos2d::CCSpriteFrame* frame, float duration);
    cocos2d::CCDictionary* m_spritePartIDs;
    cocos2d::CCSpriteFrame* m_spriteFrame;
    bool m_hasChanged;
    cocos2d::CCSize m_unkSize;
    cocos2d::CCArray* m_spriteParts;
};

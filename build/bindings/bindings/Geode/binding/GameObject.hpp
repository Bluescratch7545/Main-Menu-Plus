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

class GameObject : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "GameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameObject, CCSpritePlus)

    /**
     * @note[short] MacOS (ARM): 0x199f78
     * @note[short] MacOS (Intel): 0x1e2350
     * @note[short] Windows: 0x135ba0
     * @note[short] iOS: 0x22ee90
     * @note[short] Android: Rebinded
     */
     GameObject();

    /**
     * @note[short] MacOS (ARM): 0x4d72e4
     * @note[short] MacOS (Intel): 0x585600
     * @note[short] Windows: 0x188730
     * @note[short] iOS: 0x2534cc
     * @note[short] Android: Rebinded
     */
     ~GameObject();

    /**
     * @note[short] MacOS (ARM): 0x4d7884
     * @note[short] MacOS (Intel): 0x58a280
     * @note[short] Windows: 0x18aca0
     * @note[short] iOS: 0x253d3c
     * @note[short] Android
     */
    static GameObject* createWithFrame(char const* name);

    /**
     * @note[short] MacOS (ARM): 0x4d73bc
     * @note[short] MacOS (Intel): 0x585720
     * @note[short] Windows: 0x188850
     * @note[short] iOS: 0x253594
     * @note[short] Android
     */
    static GameObject* createWithKey(int key);

    /**
     * @note[short] MacOS (ARM): 0x4e2090
     * @note[short] MacOS (Intel): 0x5a7da0
     * @note[short] Windows: 0x19a260
     * @note[short] iOS: 0x25d1e4
     * @note[short] Android: Rebinded
     */
    static GameObject* objectFromVector(gd::vector<gd::string>& propValues, gd::vector<void*>& propIsPresent, GJBaseGameLayer* gameLayer, bool lowDetail);

    /**
     * @note[short] MacOS (ARM): 0x4d99a0
     * @note[short] MacOS (Intel): 0x5926c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x255980
     * @note[short] Android: Out of line
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de6e4
     * @note[short] MacOS (Intel): 0x5a42e0
     * @note[short] Windows: 0x1952d0
     * @note[short] iOS: 0x25a750
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de784
     * @note[short] MacOS (Intel): 0x5a4380
     * @note[short] Windows: 0x1953b0
     * @note[short] iOS: 0x25a7e8
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de824
     * @note[short] MacOS (Intel): 0x5a4420
     * @note[short] Windows: 0x1954a0
     * @note[short] iOS: 0x25a880
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de10c
     * @note[short] MacOS (Intel): 0x5a3d60
     * @note[short] Windows: 0x194be0
     * @note[short] iOS: 0x25a238
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4dee6c
     * @note[short] MacOS (Intel): 0x5a4b20
     * @note[short] Windows: 0x195cd0
     * @note[short] iOS: 0x25ade8
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4de3ac
     * @note[short] MacOS (Intel): 0x5a3fd0
     * @note[short] Windows: 0x194e80
     * @note[short] iOS: 0x25a444
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de494
     * @note[short] MacOS (Intel): 0x5a40a0
     * @note[short] Windows: 0x194fd0
     * @note[short] iOS: 0x25a51c
     * @note[short] Android
     */
    virtual void setRotationX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de570
     * @note[short] MacOS (Intel): 0x5a4160
     * @note[short] Windows: 0x195120
     * @note[short] iOS: 0x25a5e8
     * @note[short] Android
     */
    virtual void setRotationY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4deb48
     * @note[short] MacOS (Intel): 0x5a4780
     * @note[short] Windows: 0x195880
     * @note[short] iOS: 0x25aafc
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x4d7ac8
     * @note[short] MacOS (Intel): 0x58a4b0
     * @note[short] Windows: 0x18ad30
     * @note[short] iOS: 0x253f40
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);

    /**
     * @note[short] MacOS (ARM): 0x4e9884
     * @note[short] MacOS (Intel): 0x5b0a70
     * @note[short] Windows: 0x19de40
     * @note[short] iOS: 0x260390
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4de63c
     * @note[short] MacOS (Intel): 0x5a4240
     * @note[short] Windows: 0x195240
     * @note[short] iOS: 0x25a6a8
     * @note[short] Android
     */
    virtual void setFlipX(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4de690
     * @note[short] MacOS (Intel): 0x5a4290
     * @note[short] Windows: 0x195280
     * @note[short] iOS: 0x25a6fc
     * @note[short] Android
     */
    virtual void setFlipY(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x4d99a4
     * @note[short] MacOS (Intel): 0x5926d0
     * @note[short] Windows: 0x18dea0
     * @note[short] iOS: 0x255984
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x3ab2c8
     * @note[short] MacOS (Intel): 0x430540
     * @note[short] Windows: 0x1abf80
     * @note[short] iOS: 0x2ad6f8
     * @note[short] Android: Rebinded
     */
    virtual void setupCustomSprites(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x4e0268
     * @note[short] MacOS (Intel): 0x5a5e40
     * @note[short] Windows: 0x198dd0
     * @note[short] iOS: 0x25be94
     * @note[short] Android
     */
    virtual void addMainSpriteToParent(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4d8f98
     * @note[short] MacOS (Intel): 0x591b80
     * @note[short] Windows: 0x18d750
     * @note[short] iOS: 0x255010
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS (ARM): 0x4d945c
     * @note[short] MacOS (Intel): 0x5921a0
     * @note[short] Windows: 0x18db60
     * @note[short] iOS: 0x25544c
     * @note[short] Android
     */
    virtual void activateObject();

    /**
     * @note[short] MacOS (ARM): 0x4d97e0
     * @note[short] MacOS (Intel): 0x592510
     * @note[short] Windows: 0x18dc10
     * @note[short] iOS: 0x2557d0
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4ddae0
     * @note[short] MacOS (Intel): 0x5a3660
     * @note[short] Windows: 0x1946d0
     * @note[short] iOS: 0x259cf0
     * @note[short] Android
     */
    virtual void transferObjectRect(cocos2d::CCRect& p0);

    /**
     * @note[short] MacOS (ARM): 0x4ddb58
     * @note[short] MacOS (Intel): 0x5a36d0
     * @note[short] Windows: 0x194720
     * @note[short] iOS: 0x259d68
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x4ddb6c
     * @note[short] MacOS (Intel): 0x5a3700
     * @note[short] Windows: 0x194740
     * @note[short] iOS: 0x259d7c
     * @note[short] Android
     */
    virtual cocos2d::CCRect getObjectRect(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x4ddd50
     * @note[short] MacOS (Intel): 0x5a3930
     * @note[short] Windows: 0x1948d0
     * @note[short] iOS: 0x259f50
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectRect2(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x4dde14
     * @note[short] MacOS (Intel): 0x5a3a00
     * @note[short] Windows: 0x194970
     * @note[short] iOS: 0x259fd4
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectTextureRect();

    /**
     * @note[short] MacOS (ARM): 0x4de06c
     * @note[short] MacOS (Intel): 0x5a3ca0
     * @note[short] Windows: 0x194ba0
     * @note[short] iOS: 0x25a1b8
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getRealPosition();

    /**
     * @note[short] MacOS (ARM): 0x4d8e7c
     * @note[short] MacOS (Intel): 0x591a70
     * @note[short] Windows: 0x18d5d0
     * @note[short] iOS: 0x254ef4
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x4d92ec
     * @note[short] MacOS (Intel): 0x591fd0
     * @note[short] Windows: 0x18d9a0
     * @note[short] iOS: 0x25535c
     * @note[short] Android
     */
    virtual void updateStartValues();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void customObjectSetup(gd::vector<gd::string>& propValues, gd::vector<void*>& propIsPresent);

    /**
     * @note[short] MacOS (ARM): 0x4e3ca8
     * @note[short] MacOS (Intel): 0x5a9880
     * @note[short] Windows: 0x19bd50
     * @note[short] iOS: 0x25e828
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x4defb4
     * @note[short] MacOS (Intel): 0x5a4c80
     * @note[short] Windows: 0x195df0
     * @note[short] iOS: 0x25af30
     * @note[short] Android
     */
    virtual void claimParticle();

    /**
     * @note[short] MacOS (ARM): 0x4df574
     * @note[short] MacOS (Intel): 0x5a52c0
     * @note[short] Windows: 0x196320
     * @note[short] iOS: 0x25b3d0
     * @note[short] Android
     */
    virtual void unclaimParticle();

    /**
     * @note[short] MacOS (ARM): 0x4df5dc
     * @note[short] MacOS (Intel): 0x5a5330
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25b424
     * @note[short] Android: Out of line
     */
    virtual void particleWasActivated();

    /**
     * @note[short] MacOS (ARM): 0x4de62c
     * @note[short] MacOS (Intel): 0x5a4220
     * @note[short] Windows: 0x195220
     * @note[short] iOS: 0x25a698
     * @note[short] Android
     */
    virtual bool isFlipX();

    /**
     * @note[short] MacOS (ARM): 0x4de634
     * @note[short] MacOS (Intel): 0x5a4230
     * @note[short] Windows: 0x195230
     * @note[short] iOS: 0x25a6a0
     * @note[short] Android
     */
    virtual bool isFlipY();

    /**
     * @note[short] MacOS (ARM): 0x4de8c4
     * @note[short] MacOS (Intel): 0x5a44c0
     * @note[short] Windows: 0x195590
     * @note[short] iOS: 0x25a918
     * @note[short] Android
     */
    virtual void setRScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de8f8
     * @note[short] MacOS (Intel): 0x5a4500
     * @note[short] Windows: 0x1955d0
     * @note[short] iOS: 0x25a94c
     * @note[short] Android
     */
    virtual void setRScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de92c
     * @note[short] MacOS (Intel): 0x5a4540
     * @note[short] Windows: 0x195610
     * @note[short] iOS: 0x25a980
     * @note[short] Android
     */
    virtual void setRScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de9b0
     * @note[short] MacOS (Intel): 0x5a45c0
     * @note[short] Windows: 0x195650
     * @note[short] iOS: 0x25a9c4
     * @note[short] Android
     */
    virtual float getRScaleX();

    /**
     * @note[short] MacOS (ARM): 0x4de9e8
     * @note[short] MacOS (Intel): 0x5a45f0
     * @note[short] Windows: 0x195690
     * @note[short] iOS: 0x25a9fc
     * @note[short] Android
     */
    virtual float getRScaleY();

    /**
     * @note[short] MacOS (ARM): 0x4de314
     * @note[short] MacOS (Intel): 0x5a3f50
     * @note[short] Windows: 0x194df0
     * @note[short] iOS: 0x25a3c0
     * @note[short] Android
     */
    virtual void setRRotation(float p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void triggerActivated(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4e956c
     * @note[short] MacOS (Intel): 0x5b0790
     * @note[short] Windows: 0x19db00
     * @note[short] iOS: 0x260094
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4e982c
     * @note[short] MacOS (Intel): 0x5b0a20
     * @note[short] Windows: 0x19ddf0
     * @note[short] iOS: 0x260338
     * @note[short] Android
     */
    virtual void setGlowColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4df5fc
     * @note[short] MacOS (Intel): 0x5a5370
     * @note[short] Windows: 0x196410
     * @note[short] iOS: 0x25b444
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void animationTriggered();

    /**
     * @note[short] MacOS (ARM): 0x4e9910
     * @note[short] MacOS (Intel): 0x5b0ae0
     * @note[short] Windows: 0x19dec0
     * @note[short] iOS: 0x26041c
     * @note[short] Android
     */
    virtual void selectObject(cocos2d::ccColor3B p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void activatedByPlayer(PlayerObject* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool hasBeenActivatedByPlayer(PlayerObject* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool hasBeenActivated();

    /**
     * @note[short] MacOS (ARM): 0x4ea374
     * @note[short] MacOS (Intel): 0x5b1510
     * @note[short] Windows: 0x19e590
     * @note[short] iOS: 0x2609e4
     * @note[short] Android
     */
    virtual OBB2D* getOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x4ea408
     * @note[short] MacOS (Intel): 0x5b1590
     * @note[short] Windows: 0x19e5f0
     * @note[short] iOS: 0x260a78
     * @note[short] Android
     */
    virtual void updateOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x4efe24
     * @note[short] MacOS (Intel): 0x5b9cb0
     * @note[short] Windows: 0x19e570
     * @note[short] iOS: 0x264644
     * @note[short] Android
     */
    virtual float getObjectRotation();

    /**
     * @note[short] MacOS (ARM): 0x4eae24
     * @note[short] MacOS (Intel): 0x5b2150
     * @note[short] Windows: 0x19eff0
     * @note[short] iOS: 0x2612d0
     * @note[short] Android
     */
    virtual void updateMainColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4eb32c
     * @note[short] MacOS (Intel): 0x5b2660
     * @note[short] Windows: 0x19f000
     * @note[short] iOS: 0x2614a4
     * @note[short] Android
     */
    virtual void updateSecondaryColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4e09b8
     * @note[short] MacOS (Intel): 0x5a6570
     * @note[short] Windows: 0x199810
     * @note[short] iOS: 0x25c4f0
     * @note[short] Android
     */
    virtual int addToGroup(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4e0a90
     * @note[short] MacOS (Intel): 0x5a6620
     * @note[short] Windows: 0x199930
     * @note[short] iOS: 0x25c5a0
     * @note[short] Android
     */
    virtual void removeFromGroup(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4e93b4
     * @note[short] MacOS (Intel): 0x5b05d0
     * @note[short] Windows: 0x19d950
     * @note[short] iOS: 0x25ff38
     * @note[short] Android
     */
    virtual void saveActiveColors();

    /**
     * @note[short] MacOS (ARM): 0x19999c
     * @note[short] MacOS (Intel): 0x1e1b50
     * @note[short] Windows: 0x135fe0
     * @note[short] iOS: 0x22ea4c
     * @note[short] Android
     */
    virtual float spawnXPosition();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canAllowMultiActivate();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void blendModeChanged();

    /**
     * @note[short] MacOS (ARM): 0x4e9764
     * @note[short] MacOS (Intel): 0x5b0960
     * @note[short] Windows: 0x19dce0
     * @note[short] iOS: 0x260270
     * @note[short] Android
     */
    virtual void updateParticleColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4dede4
     * @note[short] MacOS (Intel): 0x5a4aa0
     * @note[short] Windows: 0x195b20
     * @note[short] iOS: 0x25ad60
     * @note[short] Android
     */
    virtual void updateParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateMainParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateSecondaryParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canReverse();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool isSpecialSpawnObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canBeOrdered();

    /**
     * @note[short] MacOS (ARM): 0x8d390
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x171fa4
     * @note[short] Android: Out of line
     */
    virtual cocos2d::CCLabelBMFont* getObjectLabel();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* p0);

    /**
     * @note[short] MacOS (ARM): 0x4ec0bc
     * @note[short] MacOS (Intel): 0x5b37c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261f40
     * @note[short] Android: Out of line
     */
    virtual bool shouldDrawEditorHitbox();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool getHasSyncedAnimation();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool getHasRotateAction();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canMultiActivate(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateTextKerning(int p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual int getTextKerning();

    /**
     * @note[short] MacOS (ARM): 0x1999bc
     * @note[short] MacOS (Intel): 0x1e1b70
     * @note[short] Windows: 0x136000
     * @note[short] iOS: 0x22ea6c
     * @note[short] Android
     */
    virtual bool getObjectRectDirty() const ;

    /**
     * @note[short] MacOS (ARM): 0x1999c4
     * @note[short] MacOS (Intel): 0x1e1b80
     * @note[short] Windows: 0x136010
     * @note[short] iOS: 0x22ea74
     * @note[short] Android
     */
    virtual void setObjectRectDirty(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x1999cc
     * @note[short] MacOS (Intel): 0x1e1b90
     * @note[short] Windows: 0x136020
     * @note[short] iOS: 0x22ea7c
     * @note[short] Android
     */
    virtual bool getOrientedRectDirty() const ;

    /**
     * @note[short] MacOS (ARM): 0x1999d4
     * @note[short] MacOS (Intel): 0x1e1ba0
     * @note[short] Windows: 0x136030
     * @note[short] iOS: 0x22ea84
     * @note[short] Android
     */
    virtual void setOrientedRectDirty(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x1999dc
     * @note[short] MacOS (Intel): 0x1e1bb0
     * @note[short] Windows: 0x136040
     * @note[short] iOS: 0x22ea8c
     * @note[short] Android
     */
    virtual GameObjectType getType() const ;

    /**
     * @note[short] MacOS (ARM): 0x1999e4
     * @note[short] MacOS (Intel): 0x1e1bc0
     * @note[short] Windows: 0x136050
     * @note[short] iOS: 0x22ea94
     * @note[short] Android
     */
    virtual void setType(GameObjectType p0);

    /**
     * @note[short] MacOS (ARM): 0x1999ec
     * @note[short] MacOS (Intel): 0x1e1bd0
     * @note[short] Windows: 0x136060
     * @note[short] iOS: 0x22ea9c
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getStartPos() const ;

    /**
     * @note[short] MacOS (ARM): 0x4d83b4
     * @note[short] MacOS (Intel): 0x58cc00
     * @note[short] Windows: 0x18b830
     * @note[short] iOS: 0x254690
     * @note[short] Android: Rebinded
     */
    void addColorSprite(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x4d95b8
     * @note[short] MacOS (Intel): 0x592300
     * @note[short] Windows: 0x199040
     * @note[short] iOS: 0x2555a8
     * @note[short] Android
     */
    void addColorSpriteToParent(bool reorder);

    /**
     * @note[short] MacOS (ARM): 0x4e045c
     * @note[short] MacOS (Intel): 0x5a6020
     * @note[short] Windows: 0x199240
     * @note[short] iOS: 0x25c010
     * @note[short] Android
     */
    void addColorSpriteToSelf();

    /**
     * @note[short] MacOS (ARM): 0x4dd4c0
     * @note[short] MacOS (Intel): 0x5a30a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addCustomBlackChild(gd::string frame, float opacity, bool color);

    /**
     * @note[short] MacOS (ARM): 0x4dd6a8
     * @note[short] MacOS (Intel): 0x5a3240
     * @note[short] Windows: 0x194330
     * @note[short] iOS: 0x259a28
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addCustomChild(gd::string frame, cocos2d::CCPoint offset, int zOrder);

    /**
     * @note[short] MacOS (ARM): 0x4dd750
     * @note[short] MacOS (Intel): 0x5a32e0
     * @note[short] Windows: 0x1943f0
     * @note[short] iOS: 0x259ad0
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addCustomColorChild(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x4d825c
     * @note[short] MacOS (Intel): 0x58ca90
     * @note[short] Windows: 0x18b6e0
     * @note[short] iOS: 0x2545d8
     * @note[short] Android
     */
    void addEmptyGlow();

    /**
     * @note[short] MacOS (ARM): 0x4d7bd0
     * @note[short] MacOS (Intel): 0x58a5c0
     * @note[short] Windows: 0x18af60
     * @note[short] iOS: 0x254034
     * @note[short] Android: Rebinded
     */
    void addGlow(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x4dd8ec
     * @note[short] MacOS (Intel): 0x5a3480
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addInternalChild(cocos2d::CCSprite* parent, gd::string frame, cocos2d::CCPoint offset, int zOrder);

    /**
     * @note[short] MacOS (ARM): 0x4dd828
     * @note[short] MacOS (Intel): 0x5a33d0
     * @note[short] Windows: 0x194530
     * @note[short] iOS: 0x259b68
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addInternalCustomColorChild(gd::string frame, cocos2d::CCPoint offset, int zOrder);

    /**
     * @note[short] MacOS (ARM): 0x4dd990
     * @note[short] MacOS (Intel): 0x5a3510
     * @note[short] Windows: 0x194600
     * @note[short] iOS: 0x259c18
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addInternalGlowChild(gd::string frame, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x4ebae0
     * @note[short] MacOS (Intel): 0x5b3230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261a74
     * @note[short] Android
     */
    void addNewSlope01(bool dontDraw);

    /**
     * @note[short] MacOS (ARM): 0x4ebbe8
     * @note[short] MacOS (Intel): 0x5b3320
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261b20
     * @note[short] Android
     */
    void addNewSlope01Glow(bool dontDraw);

    /**
     * @note[short] MacOS (ARM): 0x4ebd2c
     * @note[short] MacOS (Intel): 0x5b3460
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261c38
     * @note[short] Android
     */
    void addNewSlope02(bool dontDraw);

    /**
     * @note[short] MacOS (ARM): 0x4ebe34
     * @note[short] MacOS (Intel): 0x5b3550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261ce4
     * @note[short] Android
     */
    void addNewSlope02Glow(bool dontDraw);

    /**
     * @note[short] MacOS (ARM): 0x4de2a8
     * @note[short] MacOS (Intel): 0x5a3ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addRotation(float rotationX, float rotationY);

    /**
     * @note[short] MacOS (ARM): 0x4de21c
     * @note[short] MacOS (Intel): 0x5a3e70
     * @note[short] Windows: 0x194d50
     * @note[short] iOS: 0x25a334
     * @note[short] Android
     */
    void addRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x4e0c78
     * @note[short] MacOS (Intel): 0x5a6800
     * @note[short] Windows: 0x199a50
     * @note[short] iOS: 0x25c714
     * @note[short] Android
     */
    void addToColorGroup(int group);

    /**
     * @note[short] MacOS (ARM): 0x4dea20
     * @note[short] MacOS (Intel): 0x5a4620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25aa34
     * @note[short] Android
     */
    void addToCustomScaleX(float scale);

    /**
     * @note[short] MacOS (ARM): 0x4dea48
     * @note[short] MacOS (Intel): 0x5a4660
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25aa5c
     * @note[short] Android
     */
    void addToCustomScaleY(float scale);

    /**
     * @note[short] MacOS (ARM): 0x4e0db4
     * @note[short] MacOS (Intel): 0x5a6950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c7e0
     * @note[short] Android
     */
    void addToOpacityGroup(int group);

    /**
     * @note[short] MacOS (ARM): 0x4ddfdc
     * @note[short] MacOS (Intel): 0x5a3bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25a164
     * @note[short] Android
     */
    void addToTempOffset(double offsetX, double offsetY);

    /**
     * @note[short] MacOS (ARM): 0x4d7bb4
     * @note[short] MacOS (Intel): 0x58a5a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x254018
     * @note[short] Android
     */
    void assignUniqueID();

    /**
     * @note[short] MacOS (ARM): 0x4e0bbc
     * @note[short] MacOS (Intel): 0x5a6740
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c6b8
     * @note[short] Android
     */
    bool belongsToGroup(int group);

    /**
     * @note[short] MacOS (ARM): 0x4ea3cc
     * @note[short] MacOS (Intel): 0x5b1560
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x260a3c
     * @note[short] Android
     */
    void calculateOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x4ea888
     * @note[short] MacOS (Intel): 0x5b1a40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x260e70
     * @note[short] Android
     */
    bool canChangeCustomColor();

    /**
     * @note[short] MacOS (ARM): 0x4ea8bc
     * @note[short] MacOS (Intel): 0x5b1a70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x260ea4
     * @note[short] Android
     */
    bool canChangeMainColor();

    /**
     * @note[short] MacOS (ARM): 0x4ea8d0
     * @note[short] MacOS (Intel): 0x5b1a90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x260eb8
     * @note[short] Android
     */
    bool canChangeSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x4e0904
     * @note[short] MacOS (Intel): 0x5a64b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c49c
     * @note[short] Android
     */
    bool canRotateFree();

    /**
     * @note[short] MacOS (ARM): 0x4eaf28
     * @note[short] MacOS (Intel): 0x5b2260
     * @note[short] Windows: 0x19f010
     * @note[short] iOS: 0x261330
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForMode(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x4dc750
     * @note[short] MacOS (Intel): 0x59d6a0
     * @note[short] Windows: 0x193e00
     * @note[short] iOS: 0x25893c
     * @note[short] Android
     */
    void commonInteractiveSetup();

    /**
     * @note[short] MacOS (ARM): 0x4d7950
     * @note[short] MacOS (Intel): 0x58a320
     * @note[short] Windows: 0x18ad70
     * @note[short] iOS: 0x253dfc
     * @note[short] Android
     */
    void commonSetup();

    /**
     * @note[short] MacOS (ARM): 0x4e0b44
     * @note[short] MacOS (Intel): 0x5a66d0
     * @note[short] Windows: 0x1999c0
     * @note[short] iOS: 0x25c644
     * @note[short] Android
     */
    void copyGroups(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4dc810
     * @note[short] MacOS (Intel): 0x59d770
     * @note[short] Windows: 0x195ba0
     * @note[short] iOS: 0x2589ec
     * @note[short] Android
     */
    cocos2d::CCParticleSystemQuad* createAndAddParticle(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType);

    /**
     * @note[short] MacOS (ARM): 0x4e0c18
     * @note[short] MacOS (Intel): 0x5a67a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createColorGroupContainer(int size);

    /**
     * @note[short] MacOS (ARM): 0x4d81c8
     * @note[short] MacOS (Intel): 0x58c9f0
     * @note[short] Windows: 0x18b750
     * @note[short] iOS: 0x254544
     * @note[short] Android: Rebinded
     */
    void createGlow(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x4e0958
     * @note[short] MacOS (Intel): 0x5a6510
     * @note[short] Windows: 0x199740
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createGroupContainer(int size);

    /**
     * @note[short] MacOS (ARM): 0x4e0d54
     * @note[short] MacOS (Intel): 0x5a68f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createOpacityGroupContainer(int size);

    /**
     * @note[short] MacOS (ARM): 0x4d7afc
     * @note[short] MacOS (Intel): 0x58a4e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x253f74
     * @note[short] Android
     */
    void createSpriteColor(int type);

    /**
     * @note[short] MacOS (ARM): 0x4e9d48
     * @note[short] MacOS (Intel): 0x5b0ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x260768
     * @note[short] Android
     */
    void deselectObject();

    /**
     * @note[short] MacOS (ARM): 0x4df5e0
     * @note[short] MacOS (Intel): 0x5a5340
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25b428
     * @note[short] Android
     */
    void destroyObject();

    /**
     * @note[short] MacOS (ARM): 0x4e0550
     * @note[short] MacOS (Intel): 0x5a6120
     * @note[short] Windows: 0x199340
     * @note[short] iOS: 0x25c100
     * @note[short] Android
     */
    void determineSlopeDirection();

    /**
     * @note[short] MacOS (ARM): 0x4dea70
     * @note[short] MacOS (Intel): 0x5a46a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool didScaleXChange();

    /**
     * @note[short] MacOS (ARM): 0x4deaa0
     * @note[short] MacOS (Intel): 0x5a46d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool didScaleYChange();

    /**
     * @note[short] MacOS (ARM): 0x4ddad0
     * @note[short] MacOS (Intel): 0x5a3650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x259ce0
     * @note[short] Android
     */
    void dirtifyObjectPos();

    /**
     * @note[short] MacOS (ARM): 0x4ddac4
     * @note[short] MacOS (Intel): 0x5a3640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x259cd4
     * @note[short] Android
     */
    void dirtifyObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x4df648
     * @note[short] MacOS (Intel): 0x5a5400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25b490
     * @note[short] Android
     */
    void disableObject();

    /**
     * @note[short] MacOS (ARM): 0x4dca58
     * @note[short] MacOS (Intel): 0x59de70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool dontCountTowardsLimit();

    /**
     * @note[short] MacOS (ARM): 0x4eaae4
     * @note[short] MacOS (Intel): 0x5b1d50
     * @note[short] Windows: 0x19ed00
     * @note[short] iOS: 0x261040
     * @note[short] Android
     */
    void duplicateAttributes(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4eaa44
     * @note[short] MacOS (Intel): 0x5b1c80
     * @note[short] Windows: 0x19ec20
     * @note[short] iOS: 0x260fa0
     * @note[short] Android
     */
    void duplicateColorMode(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4eab88
     * @note[short] MacOS (Intel): 0x5b1e40
     * @note[short] Windows: 0x19ee40
     * @note[short] iOS: 0x2610c4
     * @note[short] Android
     */
    void duplicateValues(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4e9c68
     * @note[short] MacOS (Intel): 0x5b0e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2606a0
     * @note[short] Android
     */
    cocos2d::ccColor3B editorColorForCustomMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x4e9ad8
     * @note[short] MacOS (Intel): 0x5b0cc0
     * @note[short] Windows: 0x19e0a0
     * @note[short] iOS: 0x2605e0
     * @note[short] Android
     */
    cocos2d::ccColor3B editorColorForMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x4ea650
     * @note[short] MacOS (Intel): 0x5b1830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x260cac
     * @note[short] Android
     */
    void fastRotateObject(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x4eb568
     * @note[short] MacOS (Intel): 0x5b28b0
     * @note[short] Windows: 0x19f140
     * @note[short] iOS: 0x26151c
     * @note[short] Android
     */
    cocos2d::ccColor3B const& getActiveColorForMode(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x4e937c
     * @note[short] MacOS (Intel): 0x5b05a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25ff00
     * @note[short] Android
     */
    const char* getBallFrame(int index);

    /**
     * @note[short] MacOS (ARM): 0x4dda60
     * @note[short] MacOS (Intel): 0x5a35d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCRect getBoundingRect();

    /**
     * @note[short] MacOS (ARM): 0x4ddc60
     * @note[short] MacOS (Intel): 0x5a3830
     * @note[short] Windows: 0x19e850
     * @note[short] iOS: 0x259e70
     * @note[short] Android
     */
    cocos2d::CCPoint const& getBoxOffset();

    /**
     * @note[short] MacOS (ARM): 0x4d8c0c
     * @note[short] MacOS (Intel): 0x591800
     * @note[short] Windows: 0x18d450
     * @note[short] iOS: 0x254dac
     * @note[short] Android: Rebinded
     */
    gd::string getColorFrame(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x4eb928
     * @note[short] MacOS (Intel): 0x5b3070
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2618bc
     * @note[short] Android
     */
    int getColorIndex();

    /**
     * @note[short] MacOS (ARM): 0x4e1704
     * @note[short] MacOS (Intel): 0x5a7190
     * @note[short] Windows: 0x199db0
     * @note[short] iOS: 0x25ccd4
     * @note[short] Android
     */
    gd::string getColorKey(bool isMainColor, bool colorGroups);

    /**
     * @note[short] MacOS (ARM): 0x4e093c
     * @note[short] MacOS (Intel): 0x5a64e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c4d4
     * @note[short] Android
     */
    ZLayer getCustomZLayer();

    /**
     * @note[short] MacOS (ARM): 0x4d8d54
     * @note[short] MacOS (Intel): 0x591950
     * @note[short] Windows: 0x18d510
     * @note[short] iOS: 0x254e60
     * @note[short] Android: Rebinded
     */
    gd::string getGlowFrame(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x4e0e60
     * @note[short] MacOS (Intel): 0x5a69f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c87c
     * @note[short] Android
     */
    bool getGroupDisabled();

    /**
     * @note[short] MacOS (ARM): 0x4e0b24
     * @note[short] MacOS (Intel): 0x5a66b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c624
     * @note[short] Android
     */
    int getGroupID(int index);

    /**
     * @note[short] MacOS (ARM): 0x4e0e9c
     * @note[short] MacOS (Intel): 0x5a6a40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c8b8
     * @note[short] Android
     */
    gd::string getGroupString();

    /**
     * @note[short] MacOS (ARM): 0x4eb730
     * @note[short] MacOS (Intel): 0x5b2a90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261674
     * @note[short] Android
     */
    cocos2d::CCPoint const& getLastPosition();

    /**
     * @note[short] MacOS (ARM): 0x4ea878
     * @note[short] MacOS (Intel): 0x5b1a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x260e60
     * @note[short] Android
     */
    GJSpriteColor* getMainColor();

    /**
     * @note[short] MacOS (ARM): 0x4e2048
     * @note[short] MacOS (Intel): 0x5a7d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d19c
     * @note[short] Android
     */
    int getMainColorMode();

    /**
     * @note[short] MacOS (ARM): 0x4e07b0
     * @note[short] MacOS (Intel): 0x5a6360
     * @note[short] Windows: 0x1995a0
     * @note[short] iOS: 0x25c360
     * @note[short] Android
     */
    int getObjectDirection();

    /**
     * @note[short] MacOS (ARM): 0x4eba3c
     * @note[short] MacOS (Intel): 0x5b3170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2619d0
     * @note[short] Android
     */
    float getObjectRadius();

    /**
     * @note[short] MacOS (ARM): 0x4ddb20
     * @note[short] MacOS (Intel): 0x5a36a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x259d30
     * @note[short] Android
     */
    cocos2d::CCRect* getObjectRectPointer();

    /**
     * @note[short] MacOS (ARM): 0x4d95a0
     * @note[short] MacOS (Intel): 0x5922e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x255590
     * @note[short] Android
     */
    ZLayer getObjectZLayer();

    /**
     * @note[short] MacOS (ARM): 0x4e0444
     * @note[short] MacOS (Intel): 0x5a6000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25bff8
     * @note[short] Android
     */
    int getObjectZOrder();

    /**
     * @note[short] MacOS (ARM): 0x4dddd4
     * @note[short] MacOS (Intel): 0x5a39c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCRect getOuterObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x4df4f0
     * @note[short] MacOS (Intel): 0x5a5250
     * @note[short] Windows: 0x197bb0
     * @note[short] iOS: 0x25b36c
     * @note[short] Android
     */
    int getParentMode();

    /**
     * @note[short] MacOS (ARM): 0x4ea8f0
     * @note[short] MacOS (Intel): 0x5b1ab0
     * @note[short] Windows: 0x19eb30
     * @note[short] iOS: 0x260ed8
     * @note[short] Android
     */
    GJSpriteColor* getRelativeSpriteColor(int type);

    /**
     * @note[short] MacOS (ARM): 0x4e07fc
     * @note[short] MacOS (Intel): 0x5a63a0
     * @note[short] Windows: 0x199620
     * @note[short] iOS: 0x25c3a4
     * @note[short] Android
     */
    cocos2d::CCPoint getScalePosDelta();

    /**
     * @note[short] MacOS (ARM): 0x4ea880
     * @note[short] MacOS (Intel): 0x5b1a30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x260e68
     * @note[short] Android
     */
    GJSpriteColor* getSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x4e206c
     * @note[short] MacOS (Intel): 0x5a7d70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d1c0
     * @note[short] Android
     */
    int getSecondaryColorMode();

    /**
     * @note[short] MacOS (ARM): 0x4e0774
     * @note[short] MacOS (Intel): 0x5a6320
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c324
     * @note[short] Android
     */
    float getSlopeAngle();

    /**
     * @note[short] MacOS (ARM): 0x4de010
     * @note[short] MacOS (Intel): 0x5a3c10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25a188
     * @note[short] Android
     */
    cocos2d::CCPoint getUnmodifiedPosition();

    /**
     * @note[short] MacOS (ARM): 0x4eb658
     * @note[short] MacOS (Intel): 0x5b29a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2615f0
     * @note[short] Android
     */
    cocos2d::ccColor3B const& groupColor(cocos2d::ccColor3B const& color, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x4e157c
     * @note[short] MacOS (Intel): 0x5a7040
     * @note[short] Windows: 0x199d30
     * @note[short] iOS: 0x25cb6c
     * @note[short] Android
     */
    float groupOpacityMod();

    /**
     * @note[short] MacOS (ARM): 0x4e0e84
     * @note[short] MacOS (Intel): 0x5a6a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c8a0
     * @note[short] Android
     */
    void groupWasDisabled();

    /**
     * @note[short] MacOS (ARM): 0x4e0e68
     * @note[short] MacOS (Intel): 0x5a6a00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c884
     * @note[short] Android
     */
    void groupWasEnabled();

    /**
     * @note[short] MacOS (ARM): 0x4eaa34
     * @note[short] MacOS (Intel): 0x5b1c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x260f90
     * @note[short] Android
     */
    bool hasSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x4dcd64
     * @note[short] MacOS (Intel): 0x59e530
     * @note[short] Windows: 0x1a0180
     * @note[short] iOS: 0x258fdc
     * @note[short] Android
     */
    bool ignoreEditorDuration();

    /**
     * @note[short] MacOS (ARM): 0x4dda58
     * @note[short] MacOS (Intel): 0x5a35c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x259ccc
     * @note[short] Android
     */
    bool ignoreEnter();

    /**
     * @note[short] MacOS (ARM): 0x4dda50
     * @note[short] MacOS (Intel): 0x5a35b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x259cc4
     * @note[short] Android
     */
    bool ignoreFade();

    /**
     * @note[short] MacOS (ARM): 0x4d7914
     * @note[short] MacOS (Intel): 0x58a2f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x253dc0
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x4ec080
     * @note[short] MacOS (Intel): 0x5b3790
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261f04
     * @note[short] Android
     */
    static bool isBasicEnterEffect(int id);

    /**
     * @note[short] MacOS (ARM): 0x4ebf90
     * @note[short] MacOS (Intel): 0x5b36b0
     * @note[short] Windows: 0x1a0670
     * @note[short] iOS: 0x261e14
     * @note[short] Android
     */
    bool isBasicTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4ea96c
     * @note[short] MacOS (Intel): 0x5b1b30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x260f30
     * @note[short] Android
     */
    bool isColorObject();

    /**
     * @note[short] MacOS (ARM): 0x4eb8d4
     * @note[short] MacOS (Intel): 0x5b3020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261868
     * @note[short] Android
     */
    bool isColorTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4ec004
     * @note[short] MacOS (Intel): 0x5b3720
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261e88
     * @note[short] Android
     */
    bool isConfigurablePortal();

    /**
     * @note[short] MacOS (ARM): 0x4dcef8
     * @note[short] MacOS (Intel): 0x59f080
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x259230
     * @note[short] Android
     */
    bool isEditorSpawnableTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4ea740
     * @note[short] MacOS (Intel): 0x5b1910
     * @note[short] Windows: 0x19e990
     * @note[short] iOS: 0x260d28
     * @note[short] Android
     */
    bool isFacingDown();

    /**
     * @note[short] MacOS (ARM): 0x4ea7d0
     * @note[short] MacOS (Intel): 0x5b1990
     * @note[short] Windows: 0x19ea50
     * @note[short] iOS: 0x260db8
     * @note[short] Android
     */
    bool isFacingLeft();

    /**
     * @note[short] MacOS (ARM): 0x4ebf78
     * @note[short] MacOS (Intel): 0x5b3690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261dfc
     * @note[short] Android
     */
    bool isSettingsObject();

    /**
     * @note[short] MacOS (ARM): 0x4eb740
     * @note[short] MacOS (Intel): 0x5b2ac0
     * @note[short] Windows: 0x19f730
     * @note[short] iOS: 0x261684
     * @note[short] Android
     */
    bool isSpawnableTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4eba68
     * @note[short] MacOS (Intel): 0x5b31c0
     * @note[short] Windows: 0x19fb40
     * @note[short] iOS: 0x2619fc
     * @note[short] Android
     */
    bool isSpecialObject();

    /**
     * @note[short] MacOS (ARM): 0x4eb9b4
     * @note[short] MacOS (Intel): 0x5b30f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261948
     * @note[short] Android
     */
    bool isSpeedObject();

    /**
     * @note[short] MacOS (ARM): 0x4dcc08
     * @note[short] MacOS (Intel): 0x59e3f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x258e80
     * @note[short] Android
     */
    bool isStoppableTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4dca68
     * @note[short] MacOS (Intel): 0x59de80
     * @note[short] Windows: 0x19f2c0
     * @note[short] iOS: 0x258c90
     * @note[short] Android
     */
    bool isTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4e1100
     * @note[short] MacOS (Intel): 0x5a6d00
     * @note[short] Windows: 0x199b50
     * @note[short] iOS: 0x25c9f8
     * @note[short] Android: Rebinded
     */
    void loadGroupsFromString(gd::string groupList);

    /**
     * @note[short] MacOS (ARM): 0x4df614
     * @note[short] MacOS (Intel): 0x5a53a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25b45c
     * @note[short] Android
     */
    void makeInvisible();

    /**
     * @note[short] MacOS (ARM): 0x4df630
     * @note[short] MacOS (Intel): 0x5a53d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25b478
     * @note[short] Android
     */
    void makeVisible();

    /**
     * @note[short] MacOS (ARM): 0x4eb240
     * @note[short] MacOS (Intel): 0x5b2590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261430
     * @note[short] Android
     */
    float opacityModForMode(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x4d953c
     * @note[short] MacOS (Intel): 0x592280
     * @note[short] Windows: 0x198f60
     * @note[short] iOS: 0x25552c
     * @note[short] Android
     */
    cocos2d::CCNode* parentForZLayer(int zLayer, bool blending, int parentMode);

    /**
     * @note[short] MacOS (ARM): 0x3ab24c
     * @note[short] MacOS (Intel): 0x4304d0
     * @note[short] Windows: 0x1abf50
     * @note[short] iOS: 0x2ad68c
     * @note[short] Android
     */
    gd::string perspectiveColorFrame(char const* prefix, int index);

    /**
     * @note[short] MacOS (ARM): 0x3aaf40
     * @note[short] MacOS (Intel): 0x430160
     * @note[short] Windows: 0x1abe10
     * @note[short] iOS: 0x2ad570
     * @note[short] Android
     */
    gd::string perspectiveFrame(char const* prefix, int index);

    /**
     * @note[short] MacOS (ARM): 0x1f9910
     * @note[short] MacOS (Intel): 0x24c560
     * @note[short] Windows: 0x1a7520
     * @note[short] iOS: 0x349078
     * @note[short] Android
     */
    void playDestroyObjectAnim(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1f9498
     * @note[short] MacOS (Intel): 0x24c0f0
     * @note[short] Windows: 0x1a7040
     * @note[short] iOS: 0x348c30
     * @note[short] Android
     */
    void playPickupAnimation(cocos2d::CCSprite* target, float xOffset, float yOffset, float controlYOffset1, float controlYOffset2, float endYOffset, float duration, float fadeDelay, float fadeDuration, bool rotate, float randomValue1, float randomValue2);

    /**
     * @note[short] MacOS (ARM): 0x1f9410
     * @note[short] MacOS (Intel): 0x24c060
     * @note[short] Windows: 0x1a6f50
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playPickupAnimation(cocos2d::CCSprite* target, float offset, float duration, float randomValue1, float randomValue2);

    /**
     * @note[short] MacOS (ARM): 0x4df690
     * @note[short] MacOS (Intel): 0x5a5440
     * @note[short] Windows: 0x196430
     * @note[short] iOS: 0x25b4d8
     * @note[short] Android
     */
    void playShineEffect();

    /**
     * @note[short] MacOS (ARM): 0x4de084
     * @note[short] MacOS (Intel): 0x5a3cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25a1d0
     * @note[short] Android
     */
    void quickUpdatePosition();

    /**
     * @note[short] MacOS (ARM): 0x4de0fc
     * @note[short] MacOS (Intel): 0x5a3d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void quickUpdatePosition2();

    /**
     * @note[short] MacOS (ARM): 0x4d8388
     * @note[short] MacOS (Intel): 0x58cbd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeColorSprite();

    /**
     * @note[short] MacOS (ARM): 0x4d834c
     * @note[short] MacOS (Intel): 0x58cb90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x254654
     * @note[short] Android
     */
    void removeGlow();

    /**
     * @note[short] MacOS (ARM): 0x4e054c
     * @note[short] MacOS (Intel): 0x5a6110
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void reorderColorSprite();

    /**
     * @note[short] MacOS (ARM): 0x4e0d24
     * @note[short] MacOS (Intel): 0x5a68a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c7b0
     * @note[short] Android
     */
    void resetColorGroups();

    /**
     * @note[short] MacOS (ARM): 0x4d9220
     * @note[short] MacOS (Intel): 0x591eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x255290
     * @note[short] Android
     */
    void resetGroupDisabled();

    /**
     * @note[short] MacOS (ARM): 0x4e0b1c
     * @note[short] MacOS (Intel): 0x5a66a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c61c
     * @note[short] Android
     */
    void resetGroups();

    /**
     * @note[short] MacOS (ARM): 0x4ea9ec
     * @note[short] MacOS (Intel): 0x5b1be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetMainColorMode();

    /**
     * @note[short] MacOS (ARM): 0x4d72d4
     * @note[short] MacOS (Intel): 0x5855f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2534bc
     * @note[short] Android
     */
    static void resetMID();

    /**
     * @note[short] MacOS (ARM): 0x4d944c
     * @note[short] MacOS (Intel): 0x592180
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25543c
     * @note[short] Android
     */
    void resetMoveOffset();

    /**
     * @note[short] MacOS (ARM): 0x4de970
     * @note[short] MacOS (Intel): 0x5a4580
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetRScaleForced();

    /**
     * @note[short] MacOS (ARM): 0x4eaa10
     * @note[short] MacOS (Intel): 0x5b1c20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetSecondaryColorMode();

    /**
     * @note[short] MacOS (ARM): 0x4dead0
     * @note[short] MacOS (Intel): 0x5a4700
     * @note[short] Windows: 0x1957f0
     * @note[short] iOS: 0x25aa84
     * @note[short] Android
     */
    void setAreaOpacity(float step, float value, int index);

    /**
     * @note[short] MacOS (ARM): 0x4e0944
     * @note[short] MacOS (Intel): 0x5a64f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c4dc
     * @note[short] Android
     */
    void setCustomZLayer(int zLayer);

    /**
     * @note[short] MacOS (ARM): 0x4dc730
     * @note[short] MacOS (Intel): 0x59d670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25891c
     * @note[short] Android
     */
    void setDefaultMainColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d8d34
     * @note[short] MacOS (Intel): 0x591920
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x254e40
     * @note[short] Android
     */
    void setDefaultSecondaryColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x4ded7c
     * @note[short] MacOS (Intel): 0x5a4a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25acf8
     * @note[short] Android
     */
    void setGlowOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x4eb738
     * @note[short] MacOS (Intel): 0x5b2aa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26167c
     * @note[short] Android
     */
    void setLastPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x4ea9ac
     * @note[short] MacOS (Intel): 0x5b1b80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x260f70
     * @note[short] Android
     */
    void setMainColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x4ea9cc
     * @note[short] MacOS (Intel): 0x5b1bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setSecondaryColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x4e9530
     * @note[short] MacOS (Intel): 0x5b0760
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupColorSprite(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x3cb20c
     * @note[short] MacOS (Intel): 0x457620
     * @note[short] Windows: 0x1c0380
     * @note[short] iOS: 0x2ca594
     * @note[short] Android
     */
    void setupPixelScale();

    /**
     * @note[short] MacOS (ARM): 0x4dd088
     * @note[short] MacOS (Intel): 0x59f3e0
     * @note[short] Windows: 0x1a0720
     * @note[short] iOS: 0x2593e0
     * @note[short] Android
     */
    void setupSpriteSize();

    /**
     * @note[short] MacOS (ARM): 0x4d98f0
     * @note[short] MacOS (Intel): 0x592610
     * @note[short] Windows: 0x18dd00
     * @note[short] iOS: 0x2558d4
     * @note[short] Android
     */
    bool shouldBlendColor(GJSpriteColor* color, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x4dc8e0
     * @note[short] MacOS (Intel): 0x59d840
     * @note[short] Windows: 0x193ec0
     * @note[short] iOS: 0x258abc
     * @note[short] Android
     */
    bool shouldLockX();

    /**
     * @note[short] MacOS (ARM): 0x1f93b8
     * @note[short] MacOS (Intel): 0x24bff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldNotHideAnimFreeze();

    /**
     * @note[short] MacOS (ARM): 0x1f96ac
     * @note[short] MacOS (Intel): 0x24c330
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x348e3c
     * @note[short] Android
     */
    bool shouldShowPickupEffects();

    /**
     * @note[short] MacOS (ARM): 0x4ea144
     * @note[short] MacOS (Intel): 0x5b12f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x260860
     * @note[short] Android
     */
    bool slopeFloorTop();

    /**
     * @note[short] MacOS (ARM): 0x4ea128
     * @note[short] MacOS (Intel): 0x5b12d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x260844
     * @note[short] Android
     */
    bool slopeWallLeft();

    /**
     * @note[short] MacOS (ARM): 0x4ea200
     * @note[short] MacOS (Intel): 0x5b1380
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26087c
     * @note[short] Android
     */
    double slopeYPos(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x4ea270
     * @note[short] MacOS (Intel): 0x5b13d0
     * @note[short] Windows: 0x19e430
     * @note[short] iOS: 0x2608e0
     * @note[short] Android
     */
    double slopeYPos(float x);

    /**
     * @note[short] MacOS (ARM): 0x4ea160
     * @note[short] MacOS (Intel): 0x5b1310
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    double slopeYPos(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1f9738
     * @note[short] MacOS (Intel): 0x24c390
     * @note[short] Windows: 0x1a72e0
     * @note[short] iOS: 0x348ea8
     * @note[short] Android
     */
    void spawnDefaultPickupParticle(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x4e01f4
     * @note[short] MacOS (Intel): 0x5a5dd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25be2c
     * @note[short] Android
     */
    void updateBlendMode();

    /**
     * @note[short] MacOS (ARM): 0x4eb6dc
     * @note[short] MacOS (Intel): 0x5b2a30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateCustomColorType(short type);

    /**
     * @note[short] MacOS (ARM): 0x4d922c
     * @note[short] MacOS (Intel): 0x591ed0
     * @note[short] Windows: 0x1956d0
     * @note[short] iOS: 0x25529c
     * @note[short] Android
     */
    void updateCustomScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x4d928c
     * @note[short] MacOS (Intel): 0x591f50
     * @note[short] Windows: 0x195760
     * @note[short] iOS: 0x2552fc
     * @note[short] Android
     */
    void updateCustomScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x4e1614
     * @note[short] MacOS (Intel): 0x5a70d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25cbe4
     * @note[short] Android
     */
    void updateHSVState();

    /**
     * @note[short] MacOS (ARM): 0x4ea58c
     * @note[short] MacOS (Intel): 0x5b1730
     * @note[short] Windows: 0x19e7b0
     * @note[short] iOS: 0x260be4
     * @note[short] Android
     */
    void updateIsOriented();

    /**
     * @note[short] MacOS (ARM): 0x4eae30
     * @note[short] MacOS (Intel): 0x5b2170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2612dc
     * @note[short] Android
     */
    void updateMainColor();

    /**
     * @note[short] MacOS (ARM): 0x4eb1e4
     * @note[short] MacOS (Intel): 0x5b2530
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateMainColorOnly();

    /**
     * @note[short] MacOS (ARM): 0x4eb10c
     * @note[short] MacOS (Intel): 0x5b2460
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateMainOpacity();

    /**
     * @note[short] MacOS (ARM): 0x4e9d50
     * @note[short] MacOS (Intel): 0x5b0f10
     * @note[short] Windows: 0x19e370
     * @note[short] iOS: 0x260770
     * @note[short] Android
     */
    void updateObjectEditorColor();

    /**
     * @note[short] MacOS (ARM): 0x4eb338
     * @note[short] MacOS (Intel): 0x5b2680
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2614b0
     * @note[short] Android
     */
    void updateSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x4eb50c
     * @note[short] MacOS (Intel): 0x5b2860
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSecondaryColorOnly();

    /**
     * @note[short] MacOS (ARM): 0x4eb434
     * @note[short] MacOS (Intel): 0x5b2790
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSecondaryOpacity();

    /**
     * @note[short] MacOS (ARM): 0x4d8ef8
     * @note[short] MacOS (Intel): 0x591af0
     * @note[short] Windows: 0x18d670
     * @note[short] iOS: 0x254f70
     * @note[short] Android
     */
    void updateStartPos();

    /**
     * @note[short] MacOS (ARM): 0x4de040
     * @note[short] MacOS (Intel): 0x5a3c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateUnmodifiedPositions();

    /**
     * @note[short] MacOS (ARM): 0x1f9338
     * @note[short] MacOS (Intel): 0x24bc50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x348b4c
     * @note[short] Android
     */
    bool usesFreezeAnimation();

    /**
     * @note[short] MacOS (ARM): 0x1f93c8
     * @note[short] MacOS (Intel): 0x24c010
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool usesSpecialAnimation();
    int m_someOtherIndex;
    int m_innerSectionIndex;
    int m_outerSectionIndex;
    int m_middleSectionIndex;
    bool m_hasExtendedCollision;
    cocos2d::ccColor3B m_groupColor;
    bool m_unk280;
    bool m_unk281;
    float m_blackChildOpacity;
    bool m_unk288;
    bool m_editorEnabled;
    bool m_isGroupDisabled;
    bool m_unk28B;
    bool m_unk28c;
    int m_activeMainColorID;
    int m_activeDetailColorID;
    bool m_baseUsesHSV;
    bool m_detailUsesHSV;
    float m_positionXOffset;
    float m_positionYOffset;
    float m_rotationXOffset;
    float m_unk2A8;
    float m_rotationYOffset;
    float m_unk2B0;
    float m_scaleXOffset;
    float m_scaleYOffset;
    float m_unk2BC;
    float m_unk2C0;
    bool m_tempOffsetXRelated;
    bool m_isFlipX;
    bool m_isFlipY;
    cocos2d::CCPoint m_customBoxOffset;
    bool m_boxOffsetCalculated;
    cocos2d::CCPoint m_boxOffset;
    OBB2D* m_orientedBox;
    bool m_shouldUseOuterOb;
    cocos2d::CCSprite* m_glowSprite;
    bool m_isRingPoweredOn;
    float m_width;
    float m_height;
    bool m_hasSpecialChild;
    bool m_isActivated;
    bool m_isDisabled2;
    cocos2d::CCParticleSystemQuad* m_particle;
    gd::string m_particleString;
    bool m_hasParticles;
    bool m_particleUseObjectColor;
    bool m_hasColorSprite;
    cocos2d::CCPoint m_particleOffset;
    bool m_isSomeSpriteScalable;
    cocos2d::CCRect m_textureRect;
    bool m_isDirty;
    bool m_isObjectPosDirty;
    bool m_isUnmodifiedPosDirty;
    float m_fadeMargin;
    cocos2d::CCRect m_objectRect;
    bool m_isObjectRectDirty;
    bool m_isOrientedBoxDirty;
    bool m_colorSpriteLocked;
    bool m_unk353;
    bool m_canRotateFree;
    bool m_isMirroredByScale;
    int m_linkedGroup;
    int m_unk35C;
    short m_colorType;
    short m_childColorType;
    bool m_shouldBlendBase;
    bool m_shouldBlendDetail;
    bool m_hasCustomChild;
    bool m_unk367;
    cocos2d::CCSprite* m_colorSprite;
    bool m_unk370;
    float m_objectRadius;
    bool m_isRotationAligned;
    float m_spriteWidthScale;
    float m_spriteHeightScale;
    int m_uniqueID;
    GameObjectType m_objectType;
    GameObjectType m_savedObjectType;
    int m_unk390;
    float m_unmodifiedPositionX;
    float m_unmodifiedPositionY;
    double m_positionX;
    double m_positionY;
    cocos2d::CCPoint m_startPosition;
    bool m_usesAudioScale;
    bool m_hasNoAudioScale;
    bool m_isDisabled;
    float m_startRotationX;
    float m_startRotationY;
    float m_startScaleX;
    float m_startScaleY;
    float m_customScaleX;
    float m_customScaleY;
    bool m_startFlipX;
    bool m_startFlipY;
    bool m_unk3ee;
    bool m_isInvisible;
    int m_unk3D8;
    short m_varianceIndex;
    bool m_unk3DE;
    short m_enterType;
    short m_exitType;
    short m_enterChannel;
    short m_objectMaterial;
    bool m_unk3E8;
    short m_parentMode;
    bool m_hasNoGlow;
    int m_targetColor;
    int m_objectID;
    bool m_unk3F8;
    bool m_intrinsicDontFade;
    bool m_ignoreEnter;
    bool m_ignoreFade;
    bool m_isSolidColorBlock;
    bool m_baseOrDetailBlending;
    bool m_customSpriteColor;
    short m_customColorType;
    bool m_isDontEnter;
    bool m_isDontFade;
    bool m_hasNoEffects;
    bool m_hasNoParticles;
    int m_defaultZOrder;
    bool m_unk40C;
    bool m_colorZLayerRelated;
    bool m_customAudioScale;
    float m_minAudioScale;
    float m_maxAudioScale;
    bool m_particleLocked;
    int m_property53;
    bool m_isInvisibleBlock;
    bool m_glowColorIsLBG;
    bool m_customGlowColor;
    bool m_cantColorGlow;
    float m_opacityMod;
    bool m_slopeUphill;
    int m_slopeDirection;
    bool m_slopeIsHazard;
    float m_opacityMod2;
    GJSpriteColor* m_baseColor;
    GJSpriteColor* m_detailColor;
    bool m_unk448;
    ZLayer m_defaultZLayer;
    bool m_zFixedZLayer;
    ZLayer m_zLayer;
    int m_zOrder;
    bool m_unk45c;
    bool m_isSelected;
    float m_unk460;
    cocos2d::CCPoint m_unk464;
    bool m_shouldUpdateColorSprite;
    bool m_unk46d;
    bool m_hasGroupParent;
    bool m_hasAreaParent;
    float m_scaleX;
    float m_scaleY;
    std::array<short, 10>* m_groups;
    short m_groupCount;
    bool m_hasGroupParentsString;
    std::array<short, 10>* m_colorGroups;
    short m_colorGroupCount;
    std::array<short, 10>* m_opacityGroups;
    short m_opacityGroupCount;
    short m_editorLayer;
    short m_editorLayer2;
    int m_enabledGroupsCounter;
    bool m_updateCustomContentSize;
    bool m_hasContentSize;
    bool m_isNoTouch;
    cocos2d::CCSize m_lastSize;
    cocos2d::CCPoint m_lastPosition;
    int m_unk4C0;
    int m_unk4C4;
    int m_unk4C8;
    int m_unk4CC;
    GameObjectClassType m_classType;
    bool m_isTrigger;
    bool m_isSpawnOrderTrigger;
    bool m_isColorTrigger;
    bool m_dontIgnoreDuration;
    bool m_canBeControlled;
    bool m_activateTriggerInEditor;
    bool m_isStartPos;
    bool m_isHighDetail;
    ColorActionSprite* m_mainActionSprite;
    ColorActionSprite* m_detailActionSprite;
    GJEffectManager* m_goEffectManager;
    bool m_unk4F8;
    bool m_isDecoration;
    bool m_isDecoration2;
    bool m_unk4fb;
    bool m_maybeNotColorable;
    bool m_isPassable;
    bool m_isHide;
    bool m_isNonStickX;
    bool m_isNonStickY;
    bool m_isIceBlock;
    bool m_isGripSlope;
    bool m_isScaleStick;
    bool m_isExtraSticky;
    bool m_isDontBoostY;
    bool m_isDontBoostX;
    bool m_unk507;
    bool m_unk508;
    float m_unk50C;
    float m_pixelScaleX;
    float m_pixelScaleY;
    int m_mainColorKeyIndex;
    int m_detailColorKeyIndex;
    uint8_t m_areaOpacityRelated;
    float m_areaOpacityValue;
    int m_areaOpacityIndex;
    int m_unk52C;
    bool m_unk530;
    bool m_isUIObject;
    bool m_greenDebugDraw;
};

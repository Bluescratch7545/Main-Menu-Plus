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
#include "TextInputDelegate.hpp"

class SetGroupIDLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetGroupIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetGroupIDLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45790
     * @note[short] Android: Out of line
     */
     SetGroupIDLayer();

    /**
     * @note[short] MacOS (ARM): 0x2964d4
     * @note[short] MacOS (Intel): 0x2fe2c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3efbc
     * @note[short] Android: Rebinded
     */
     ~SetGroupIDLayer();

    /**
     * @note[short] MacOS (ARM): 0x2965a4
     * @note[short] MacOS (Intel): 0x2fe420
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f08c
     * @note[short] Android
     */
    static SetGroupIDLayer* create(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x29b16c
     * @note[short] MacOS (Intel): 0x303620
     * @note[short] Windows: 0x3e62e0
     * @note[short] iOS: 0x42db0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x29aa40
     * @note[short] MacOS (Intel): 0x302ea0
     * @note[short] Windows: 0x8b790
     * @note[short] iOS: 0x42820
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x29aa5c
     * @note[short] MacOS (Intel): 0x302ee0
     * @note[short] Windows: 0x3e4400
     * @note[short] iOS: 0x4283c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x29b068
     * @note[short] MacOS (Intel): 0x303510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42ccc
     * @note[short] Android
     */
    void addGroupID(int id);

    /**
     * @note[short] MacOS (ARM): 0x29af14
     * @note[short] MacOS (Intel): 0x3033c0
     * @note[short] Windows: 0x3e5000
     * @note[short] iOS: 0x42b94
     * @note[short] Android
     */
    void callRemoveFromGroup(float dt);

    /**
     * @note[short] MacOS (ARM): 0x298718
     * @note[short] MacOS (Intel): 0x300800
     * @note[short] Windows: 0x3e34b0
     * @note[short] iOS: 0x40d5c
     * @note[short] Android: Rebinded
     */
    CCTextInputNode* createTextInput(cocos2d::CCPoint p0, int p1, int p2, gd::string p3, float p4, int p5);

    /**
     * @note[short] MacOS (ARM): 0x298e08
     * @note[short] MacOS (Intel): 0x300ef0
     * @note[short] Windows: 0x3e3b50
     * @note[short] iOS: 0x41334
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x296704
     * @note[short] MacOS (Intel): 0x2fe5f0
     * @note[short] Windows: 0x3e1260
     * @note[short] iOS: 0x3f110
     * @note[short] Android
     */
    bool init(GameObject* obj, cocos2d::CCArray* objs);

    /**
     * @note[short] MacOS (ARM): 0x298c74
     * @note[short] MacOS (Intel): 0x300d30
     * @note[short] Windows: 0x3e52b0
     * @note[short] iOS: 0x41208
     * @note[short] Android
     */
    void onAddGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298c7c
     * @note[short] MacOS (Intel): 0x300d40
     * @note[short] Windows: 0x3e5420
     * @note[short] iOS: 0x41210
     * @note[short] Android
     */
    void onAddGroupParent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29a078
     * @note[short] MacOS (Intel): 0x302320
     * @note[short] Windows: 0x3e4390
     * @note[short] iOS: 0x4216c
     * @note[short] Android
     */
    void onAnim(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29a170
     * @note[short] MacOS (Intel): 0x302410
     * @note[short] Windows: 0x3e39e0
     * @note[short] iOS: 0x42264
     * @note[short] Android
     */
    void onArrow(int tag, int increment);

    /**
     * @note[short] MacOS (ARM): 0x29a100
     * @note[short] MacOS (Intel): 0x3023b0
     * @note[short] Windows: 0x3e3980
     * @note[short] iOS: 0x421f4
     * @note[short] Android
     */
    void onArrowLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29a138
     * @note[short] MacOS (Intel): 0x3023e0
     * @note[short] Windows: 0x3e39b0
     * @note[short] iOS: 0x4222c
     * @note[short] Android
     */
    void onArrowRight(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298444
     * @note[short] MacOS (Intel): 0x3004c0
     * @note[short] Windows: 0x3e5f60
     * @note[short] iOS: 0x40b20
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x299f20
     * @note[short] MacOS (Intel): 0x3021a0
     * @note[short] Windows: 0x3e3ed0
     * @note[short] iOS: 0x42080
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29a028
     * @note[short] MacOS (Intel): 0x3022c0
     * @note[short] Windows: 0x3e40d0
     * @note[short] iOS: 0x4211c
     * @note[short] Android
     */
    void onExtra(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29a050
     * @note[short] MacOS (Intel): 0x3022f0
     * @note[short] Windows: 0x3e4250
     * @note[short] iOS: 0x42144
     * @note[short] Android
     */
    void onExtra2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298608
     * @note[short] MacOS (Intel): 0x3006e0
     * @note[short] Windows: 0x3e57b0
     * @note[short] iOS: 0x40ce4
     * @note[short] Android
     */
    void onNextFreeEditorLayer1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298690
     * @note[short] MacOS (Intel): 0x300770
     * @note[short] Windows: 0x3e5820
     * @note[short] iOS: 0x40d20
     * @note[short] Android
     */
    void onNextFreeEditorLayer2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29944c
     * @note[short] MacOS (Intel): 0x301650
     * @note[short] Windows: 0x3e5cc0
     * @note[short] iOS: 0x41888
     * @note[short] Android
     */
    void onNextFreeOrderChannel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298c40
     * @note[short] MacOS (Intel): 0x300d00
     * @note[short] Windows: 0x3e48d0
     * @note[short] iOS: 0x411d4
     * @note[short] Android
     */
    void onNextGroupID1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x299f48
     * @note[short] MacOS (Intel): 0x3021d0
     * @note[short] Windows: 0x3e3f30
     * @note[short] iOS: 0x420a8
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29ae48
     * @note[short] MacOS (Intel): 0x3032f0
     * @note[short] Windows: 0x3e51e0
     * @note[short] iOS: 0x42ac8
     * @note[short] Android
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29b154
     * @note[short] MacOS (Intel): 0x303600
     * @note[short] Android
     */
    void onSmoothEase(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29a0a8
     * @note[short] MacOS (Intel): 0x302350
     * @note[short] Windows: 0x3e3380
     * @note[short] iOS: 0x4219c
     * @note[short] Android
     */
    void onToggleGuide(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29a0d4
     * @note[short] MacOS (Intel): 0x302380
     * @note[short] Windows: 0x3e3410
     * @note[short] iOS: 0x421c8
     * @note[short] Android
     */
    void onToggleSelectedOrder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298d00
     * @note[short] MacOS (Intel): 0x300dd0
     * @note[short] Windows: 0x3e5520
     * @note[short] iOS: 0x41294
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2990e8
     * @note[short] MacOS (Intel): 0x3012f0
     * @note[short] Windows: 0x3e55e0
     * @note[short] iOS: 0x41614
     * @note[short] Android
     */
    void onZLayerShift(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29af8c
     * @note[short] MacOS (Intel): 0x303440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42c00
     * @note[short] Android
     */
    void removeGroupID(int id);

    /**
     * @note[short] MacOS (ARM): 0x299640
     * @note[short] MacOS (Intel): 0x301850
     * @note[short] Windows: 0x3e5920
     * @note[short] iOS: 0x41964
     * @note[short] Android
     */
    void updateEditorLabel();

    /**
     * @note[short] MacOS (ARM): 0x299774
     * @note[short] MacOS (Intel): 0x301980
     * @note[short] Windows: 0x3e59b0
     * @note[short] iOS: 0x41a04
     * @note[short] Android
     */
    void updateEditorLabel2();

    /**
     * @note[short] MacOS (ARM): 0x29a4bc
     * @note[short] MacOS (Intel): 0x3027f0
     * @note[short] Windows: 0x3e56b0
     * @note[short] iOS: 0x423c4
     * @note[short] Android
     */
    void updateEditorLayerID();

    /**
     * @note[short] MacOS (ARM): 0x29a52c
     * @note[short] MacOS (Intel): 0x302870
     * @note[short] Windows: 0x3e5730
     * @note[short] iOS: 0x4242c
     * @note[short] Android
     */
    void updateEditorLayerID2();

    /**
     * @note[short] MacOS (ARM): 0x29a59c
     * @note[short] MacOS (Intel): 0x3028f0
     * @note[short] Windows: 0x3e5e90
     * @note[short] iOS: 0x42494
     * @note[short] Android
     */
    void updateEditorOrder();

    /**
     * @note[short] MacOS (ARM): 0x2991a4
     * @note[short] MacOS (Intel): 0x3013b0
     * @note[short] Windows: 0x3e5b60
     * @note[short] iOS: 0x416d0
     * @note[short] Android
     */
    void updateEditorOrderLabel();

    /**
     * @note[short] MacOS (ARM): 0x299a60
     * @note[short] MacOS (Intel): 0x301c70
     * @note[short] Windows: 0x3e4940
     * @note[short] iOS: 0x41bd8
     * @note[short] Android
     */
    void updateGroupIDButtons();

    /**
     * @note[short] MacOS (ARM): 0x29950c
     * @note[short] MacOS (Intel): 0x301720
     * @note[short] Windows: 0x3e5ad0
     * @note[short] iOS: 0x418c4
     * @note[short] Android
     */
    void updateGroupIDLabel();

    /**
     * @note[short] MacOS (ARM): 0x29a644
     * @note[short] MacOS (Intel): 0x3029a0
     * @note[short] Windows: 0x3e5dc0
     * @note[short] iOS: 0x42534
     * @note[short] Android
     */
    void updateOrderChannel();

    /**
     * @note[short] MacOS (ARM): 0x2992f8
     * @note[short] MacOS (Intel): 0x301500
     * @note[short] Windows: 0x3e5c10
     * @note[short] iOS: 0x417ac
     * @note[short] Android
     */
    void updateOrderChannelLabel();

    /**
     * @note[short] MacOS (ARM): 0x2999d0
     * @note[short] MacOS (Intel): 0x301be0
     * @note[short] Windows: 0x3e5d30
     * @note[short] iOS: 0x41b48
     * @note[short] Android
     */
    void updateZLayerButtons();

    /**
     * @note[short] MacOS (ARM): 0x29a6ec
     * @note[short] MacOS (Intel): 0x302a50
     * @note[short] Windows: 0x3e5890
     * @note[short] iOS: 0x425d4
     * @note[short] Android
     */
    void updateZOrder();

    /**
     * @note[short] MacOS (ARM): 0x2998a8
     * @note[short] MacOS (Intel): 0x301ab0
     * @note[short] Windows: 0x3e5a40
     * @note[short] iOS: 0x41aa4
     * @note[short] Android
     */
    void updateZOrderLabel();
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_zLayerButtons;
    cocos2d::CCArray* m_groupIDObjects;
    CCTextInputNode* m_editorLayerInput;
    CCTextInputNode* m_editorLayer2Input;
    CCTextInputNode* m_zOrderInput;
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_orderInput;
    CCTextInputNode* m_channelInput;
    bool m_showChannelOrder;
    int m_channelValue;
    bool m_channelUpdated;
    int m_groupIDValue;
    int m_editorLayerValue;
    int m_editorLayer2Value;
    int m_zOrderValue;
    ZLayer m_zLayerValue;
    int m_orderValue;
    bool m_channelOrderEdited;
    bool m_editorLayerEdited;
    bool m_removeGroupsLock;
    int m_groupToRemove;
    bool m_addedGroup;
    bool m_reverseChanged;
    bool m_hasTargetObjects;
    bool m_unk2ff;
    bool m_unk300;
    int m_nextFreeID;
    cocos2d::CCDictionary* m_parentGroups;
};

#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EnterEffectInstance {
public:
    static constexpr auto CLASS_NAME = "EnterEffectInstance";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EnterEffectInstance();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x1ff0b0
     * @note[short] iOS: 0x20cab0
     * @note[short] Android: Out of line
     */
     EnterEffectInstance(EnterEffectObject* object, int targetID, int centerID, int p3, int targetGroupIndex, int easeIndexCount, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x4f1048
     * @note[short] MacOS (Intel): 0x5bb330
     * @note[short] Windows: 0x1378e0
     * @note[short] iOS: 0x4f900
     * @note[short] Android
     */
    void animateValue(int key, float value, float distance, float duration, int easingType, float easingRate, int easingBuffer);

    /**
     * @note[short] MacOS (ARM): 0x4f14b8
     * @note[short] MacOS (Intel): 0x5bb830
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getValue(int key);

    /**
     * @note[short] MacOS (ARM): 0x4f0958
     * @note[short] MacOS (Intel): 0x5ba960
     * @note[short] Windows: 0x136d00
     * @note[short] iOS: 0x4f2dc
     * @note[short] Android
     */
    void loadTransitions(EnterEffectObject* object, float time);

    /**
     * @note[short] MacOS (ARM): 0x4f0888
     * @note[short] MacOS (Intel): 0x5ba850
     * @note[short] Windows: 0x136b60
     * @note[short] iOS: 0x4f21c
     * @note[short] Android
     */
    void loadValuesFromObject(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4f121c
     * @note[short] MacOS (Intel): 0x5bb4d0
     * @note[short] Windows: 0x137d00
     * @note[short] iOS: 0x4f9c0
     * @note[short] Android
     */
    void setValue(int key, float value);

    /**
     * @note[short] MacOS (ARM): 0x4f1338
     * @note[short] MacOS (Intel): 0x5bb680
     * @note[short] Windows: 0x137ad0
     * @note[short] iOS: 0x4fadc
     * @note[short] Android
     */
    void updateTransitions(float dt, GJBaseGameLayer* layer);
    gd::map<int,EnterEffectAnimValue> m_enterEffectAnimMap;
    float m_length;
    float m_lengthVariance;
    float m_offset;
    float m_offsetVariance;
    float m_offsetY;
    float m_offsetYVariance;
    float m_modFront;
    float m_modBack;
    float m_deadzone;
    float m_moveDistance;
    float m_moveDistanceVariance;
    float m_moveAngle;
    float m_moveAngleVariance;
    float m_moveX;
    float m_moveXVariance;
    float m_moveY;
    float m_moveYVariance;
    float m_relativeFade;
    float m_scaleX;
    float m_scaleXVariance;
    float m_scaleY;
    float m_scaleYVariance;
    float m_rotation;
    float m_rotationVariance;
    float m_tint;
    float m_unk074;
    float m_toOpacity;
    float m_fromOpacity;
    cocos2d::ccHSVValue m_hsvValue;
    float m_hue;
    float m_saturation;
    float m_value;
    EnterEffectObject* m_gameObject;
    bool m_reversed;
    int m_targetID;
    int m_centerID;
    int m_unkFloat3;
    int m_easeIndex;
    bool m_paused;
    bool m_paused2;
    bool m_unkBool4;
    int m_targetGroupIndex;
    gd::vector<int> m_easeIndices;
    int m_controlID;
};

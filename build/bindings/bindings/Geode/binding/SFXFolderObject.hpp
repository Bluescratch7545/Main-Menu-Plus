#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SFXInfoObject.hpp"

class SFXFolderObject : public SFXInfoObject {
public:
    static constexpr auto CLASS_NAME = "SFXFolderObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXFolderObject, SFXInfoObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SFXFolderObject();

    /**
     * @note[short] MacOS (ARM): 0x4d3a34
     * @note[short] MacOS (Intel): 0x581030
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15f994
     * @note[short] Android: Rebinded
     */
     ~SFXFolderObject();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    static SFXFolderObject* create(int p0, gd::string p1, int p2);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    bool init(int p0, gd::string p1, int p2);
    cocos2d::CCArray* m_sfxObjects;
};

#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GManager.hpp"

class LocalLevelManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "LocalLevelManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LocalLevelManager, GManager)
	inline static LocalLevelManager* get() {
        return LocalLevelManager::sharedState();
    }

    /**
     * @note[short] MacOS (ARM): 0x511bc0
     * @note[short] MacOS (Intel): 0x5df020
     * @note[short] Windows: 0x31b070
     * @note[short] iOS: 0x1c92a8
     * @note[short] Android
     */
    static LocalLevelManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x511d40
     * @note[short] MacOS (Intel): 0x5df1c0
     * @note[short] Windows: 0x31b110
     * @note[short] iOS: 0x1c93c8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x512f54
     * @note[short] MacOS (Intel): 0x5e0610
     * @note[short] Windows: 0x31bae0
     * @note[short] iOS: 0x1c9fd8
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x512fac
     * @note[short] MacOS (Intel): 0x5e0670
     * @note[short] Windows: 0x31bb40
     * @note[short] iOS: 0x1ca030
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x512ed8
     * @note[short] MacOS (Intel): 0x5e0580
     * @note[short] Windows: 0x31ba50
     * @note[short] iOS: 0x1c9fa0
     * @note[short] Android
     */
    virtual void firstLoad();

    /**
     * @note[short] MacOS (ARM): 0x5123d8
     * @note[short] MacOS (Intel): 0x5df9a0
     * @note[short] Windows: 0x31b4e0
     * @note[short] iOS: 0x1c978c
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAllLevelsInDict();

    /**
     * @note[short] MacOS (ARM): 0x5125d0
     * @note[short] MacOS (Intel): 0x5dfbd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c98c0
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* getAllLevelsWithName(gd::string name);

    /**
     * @note[short] MacOS (ARM): 0x512cdc
     * @note[short] MacOS (Intel): 0x5e0390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c9dbc
     * @note[short] Android
     */
    cocos2d::CCArray* getCreatedLevels(int folder);

    /**
     * @note[short] MacOS (ARM): 0x512e48
     * @note[short] MacOS (Intel): 0x5e04f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c9f14
     * @note[short] Android
     */
    cocos2d::CCArray* getCreatedLists(int folder);

    /**
     * @note[short] MacOS (ARM): 0x512288
     * @note[short] MacOS (Intel): 0x5df820
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c9644
     * @note[short] Android
     */
    cocos2d::CCDictionary* getLevelsInNameGroups();

    /**
     * @note[short] MacOS (ARM): 0x512100
     * @note[short] MacOS (Intel): 0x5df620
     * @note[short] Windows: 0x31b3d0
     * @note[short] iOS: 0x1c9594
     * @note[short] Android
     */
    gd::string getMainLevelString(int id);

    /**
     * @note[short] MacOS (ARM): 0x512c3c
     * @note[short] MacOS (Intel): 0x5e02f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c9d1c
     * @note[short] Android
     */
    void markLevelsAsUnmodified();

    /**
     * @note[short] MacOS (ARM): 0x512afc
     * @note[short] MacOS (Intel): 0x5e01a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c9c30
     * @note[short] Android
     */
    void moveLevelToTop(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x512c8c
     * @note[short] MacOS (Intel): 0x5e0340
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c9d6c
     * @note[short] Android
     */
    void reorderLevels();

    /**
     * @note[short] MacOS (ARM): 0x512df8
     * @note[short] MacOS (Intel): 0x5e04a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c9ec4
     * @note[short] Android
     */
    void reorderLists();

    /**
     * @note[short] MacOS (ARM): 0x511d80
     * @note[short] MacOS (Intel): 0x5df200
     * @note[short] Windows: 0x31b150
     * @note[short] iOS: 0x1c9408
     * @note[short] Android
     */
    void tryLoadMainLevelString(int id);

    /**
     * @note[short] MacOS (ARM): 0x512bb0
     * @note[short] MacOS (Intel): 0x5e0270
     * @note[short] Windows: 0x31b9d0
     * @note[short] iOS: 0x1c9ca0
     * @note[short] Android
     */
    int updateLevelOrder();

    /**
     * @note[short] MacOS (ARM): 0x512700
     * @note[short] MacOS (Intel): 0x5dfd20
     * @note[short] Windows: 0x31b640
     * @note[short] iOS: 0x1c99a0
     * @note[short] Android
     */
    void updateLevelRevision();

    /**
     * @note[short] MacOS (ARM): 0x512d6c
     * @note[short] MacOS (Intel): 0x5e0420
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c9e48
     * @note[short] Android
     */
    int updateListOrder();
    cocos2d::CCArray* m_localLevels;
    cocos2d::CCArray* m_localLists;
    gd::unordered_map<int, gd::string> m_mainLevels;
};

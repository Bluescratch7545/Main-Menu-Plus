#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x515d0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GManager();

    /**
     * @note[short] MacOS (ARM): 0x404d70
     * @note[short] MacOS (Intel): 0x498f00
     * @note[short] Windows: 0x6a7c0
     * @note[short] iOS: 0x249774
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x404d80
     * @note[short] MacOS (Intel): 0x498f20
     * @note[short] Windows: 0x6a7d0
     * @note[short] iOS: 0x249784
     * @note[short] Android
     */
    virtual void setup();

    /**
     * @note[short] MacOS (ARM): 0x405280
     * @note[short] MacOS (Intel): 0x499400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x249bb8
     * @note[short] Android: Out of line
     */
    virtual void encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x4058bc
     * @note[short] MacOS (Intel): 0x499ab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x249ffc
     * @note[short] Android: Out of line
     */
    virtual void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x4058c0
     * @note[short] MacOS (Intel): 0x499ac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24a000
     * @note[short] Android: Out of line
     */
    virtual void firstLoad();

    /**
     * @note[short] MacOS (ARM): 0x404e1c
     * @note[short] MacOS (Intel): 0x498ff0
     * @note[short] Windows: 0x6a7f0
     * @note[short] iOS: 0x249818
     * @note[short] Android
     */
    gd::string getCompressedSaveString();

    /**
     * @note[short] MacOS (ARM): 0x404d98
     * @note[short] MacOS (Intel): 0x498f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x249794
     * @note[short] Android
     */
    gd::string getSaveString();

    /**
     * @note[short] MacOS (ARM): 0x404d90
     * @note[short] MacOS (Intel): 0x498f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void load();

    /**
     * @note[short] MacOS (ARM): 0x405284
     * @note[short] MacOS (Intel): 0x499410
     * @note[short] Windows: 0x6aa90
     * @note[short] iOS: 0x249bbc
     * @note[short] Android: Rebinded
     */
    void loadDataFromFile(gd::string const& filename);

    /**
     * @note[short] MacOS (ARM): 0x404f44
     * @note[short] MacOS (Intel): 0x499110
     * @note[short] Windows: 0x6a8c0
     * @note[short] iOS: 0x249930
     * @note[short] Android: Rebinded
     */
    void loadFromCompressedString(gd::string& str);

    /**
     * @note[short] MacOS (ARM): 0x404e98
     * @note[short] MacOS (Intel): 0x499060
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x249884
     * @note[short] Android: Rebinded
     */
    void loadFromString(gd::string& str);

    /**
     * @note[short] MacOS (ARM): 0x404fe8
     * @note[short] MacOS (Intel): 0x499190
     * @note[short] Windows: 0x6a9a0
     * @note[short] iOS: 0x2499c4
     * @note[short] Android
     */
    void save();

    /**
     * @note[short] MacOS (ARM): 0x4051f4
     * @note[short] MacOS (Intel): 0x499390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x249b3c
     * @note[short] Android: Rebinded
     */
    void saveData(DS_Dictionary* dict, gd::string filename);

    /**
     * @note[short] MacOS (ARM): 0x405090
     * @note[short] MacOS (Intel): 0x499230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x249a5c
     * @note[short] Android: Rebinded
     */
    void saveGMTo(gd::string filename);

    /**
     * @note[short] MacOS (ARM): 0x405530
     * @note[short] MacOS (Intel): 0x499680
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x249d4c
     * @note[short] Android: Rebinded
     */
    bool tryLoadData(DS_Dictionary* dict, gd::string const& filename);
    gd::string m_fileName;
    bool m_setup;
    bool m_saved;
    bool m_quickSave;
};

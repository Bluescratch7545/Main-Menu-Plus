#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJFriendRequest : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJFriendRequest";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJFriendRequest, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJFriendRequest();

    /**
     * @note[short] MacOS (ARM): 0x4a23ec
     * @note[short] MacOS (Intel): 0x549cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb342c
     * @note[short] Android
     */
    static GJFriendRequest* create();

    /**
     * @note[short] MacOS (ARM): 0x490504
     * @note[short] MacOS (Intel): 0x536a90
     * @note[short] Windows: 0x16fc70
     * @note[short] iOS: 0xa7da4
     * @note[short] Android
     */
    static GJFriendRequest* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x4a2484
     * @note[short] MacOS (Intel): 0x549d80
     * @note[short] Windows: 0x77db0
     * @note[short] iOS: 0xb34b8
     * @note[short] Android
     */
    virtual bool init();
    int m_requestID;
    int m_accountID;
    int m_unusedToAccountID;
    gd::string m_message;
    gd::string m_uploadDate;
    bool m_isRead;
};

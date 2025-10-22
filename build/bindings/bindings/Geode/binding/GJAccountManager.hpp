#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJAccountManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJAccountManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJAccountManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GJAccountManager* get();

    /**
     * @note[short] MacOS (ARM): 0xb8518
     * @note[short] MacOS (Intel): 0xcf8d0
     * @note[short] Windows: 0x1faf50
     * @note[short] iOS: 0x3977dc
     * @note[short] Android
     */
    static GJAccountManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0xbab8c
     * @note[short] MacOS (Intel): 0xd2340
     * @note[short] Windows: 0x1fb510
     * @note[short] iOS: 0x399040
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0xbad04
     * @note[short] MacOS (Intel): 0xd24b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3990e4
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* object);

    /**
     * @note[short] MacOS (ARM): 0xbacd4
     * @note[short] MacOS (Intel): 0xd2480
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDLToActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0xbbce4
     * @note[short] MacOS (Intel): 0xd34c0
     * @note[short] Windows: 0x1fc8f0
     * @note[short] iOS: 0x3999b0
     * @note[short] Android: Rebinded
     */
    bool backupAccount(gd::string url);

    /**
     * @note[short] MacOS (ARM): 0xbcd78
     * @note[short] MacOS (Intel): 0xd4730
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39a538
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0xbcd20
     * @note[short] MacOS (Intel): 0xd46d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39a4e0
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0xbcd1c
     * @note[short] MacOS (Intel): 0xd46c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0xbb9b0
     * @note[short] MacOS (Intel): 0xd3180
     * @note[short] Windows: 0x1fc2d0
     * @note[short] iOS: 0x3997ec
     * @note[short] Android
     */
    bool getAccountBackupURL();

    /**
     * @note[short] MacOS (ARM): 0xbc19c
     * @note[short] MacOS (Intel): 0xd3a10
     * @note[short] Windows: 0x1fd230
     * @note[short] iOS: 0x399d24
     * @note[short] Android
     */
    bool getAccountSyncURL();

    /**
     * @note[short] MacOS (ARM): 0xbabe0
     * @note[short] MacOS (Intel): 0xd2390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x399078
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0xbcf34
     * @note[short] MacOS (Intel): 0xd48f0
     * @note[short] Windows: 0x1feee0
     * @note[short] iOS: 0x39a6e4
     * @note[short] Android: Rebinded
     */
    gd::string getShaPassword(gd::string password);

    /**
     * @note[short] MacOS (ARM): 0xb8918
     * @note[short] MacOS (Intel): 0xcfd00
     * @note[short] Windows: 0x1fb2c0
     * @note[short] iOS: 0x397ad0
     * @note[short] Android: Rebinded
     */
    void handleIt(bool success, gd::string response, gd::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0xb8f70
     * @note[short] MacOS (Intel): 0xd0500
     * @note[short] Android: Rebinded
     */
    void handleItDelayed(bool success, gd::string response, gd::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0xb90dc
     * @note[short] MacOS (Intel): 0xd0640
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* node, void* data);

    /**
     * @note[short] MacOS (ARM): 0xbabc4
     * @note[short] MacOS (Intel): 0xd2370
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isDLActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0xbc794
     * @note[short] MacOS (Intel): 0xd4020
     * @note[short] Windows: 0x1fe820
     * @note[short] iOS: 0x39a0c8
     * @note[short] Android: Rebinded
     */
    void linkToAccount(gd::string username, gd::string gjp2, int accountID, int userID);

    /**
     * @note[short] MacOS (ARM): 0xbb1b8
     * @note[short] MacOS (Intel): 0xd2940
     * @note[short] Windows: 0x1fba80
     * @note[short] iOS: 0x399368
     * @note[short] Android: Rebinded
     */
    void loginAccount(gd::string username, gd::string gjp2);

    /**
     * @note[short] MacOS (ARM): 0xb9664
     * @note[short] MacOS (Intel): 0xd0bc0
     * @note[short] Windows: 0x1fce20
     * @note[short] iOS: 0x3982a0
     * @note[short] Android: Rebinded
     */
    void onBackupAccountCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0xba684
     * @note[short] MacOS (Intel): 0xd1e40
     * @note[short] Windows: 0x1fc620
     * @note[short] iOS: 0x398cc8
     * @note[short] Android: Rebinded
     */
    void onGetAccountBackupURLCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0xba8b0
     * @note[short] MacOS (Intel): 0xd2050
     * @note[short] Windows: 0x1fd570
     * @note[short] iOS: 0x398e3c
     * @note[short] Android: Rebinded
     */
    void onGetAccountSyncURLCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0xb92e4
     * @note[short] MacOS (Intel): 0xd0820
     * @note[short] Windows: 0x1fbee0
     * @note[short] iOS: 0x3980b8
     * @note[short] Android: Rebinded
     */
    void onLoginAccountCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0xb871c
     * @note[short] MacOS (Intel): 0xcfb40
     * @note[short] Windows: 0x1fb1c0
     * @note[short] iOS: 0x3979b8
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0xb9208
     * @note[short] MacOS (Intel): 0xd0760
     * @note[short] Windows: 0x1fb8f0
     * @note[short] iOS: 0x398000
     * @note[short] Android: Rebinded
     */
    void onRegisterAccountCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0xb9924
     * @note[short] MacOS (Intel): 0xd0e80
     * @note[short] Windows: 0x1fdab0
     * @note[short] iOS: 0x39847c
     * @note[short] Android: Rebinded
     */
    void onSyncAccountCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0xba5c8
     * @note[short] MacOS (Intel): 0xd1da0
     * @note[short] Windows: 0x1fed80
     * @note[short] iOS: 0x398c3c
     * @note[short] Android: Rebinded
     */
    void onUpdateAccountSettingsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0xb85c4
     * @note[short] MacOS (Intel): 0xcf9a0
     * @note[short] Windows: 0x1fb070
     * @note[short] iOS: 0x397860
     * @note[short] Android: Rebinded
     */
    void ProcessHttpRequest(gd::string url, gd::string params, gd::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0xbaf14
     * @note[short] MacOS (Intel): 0xd2690
     * @note[short] Windows: 0x1fb620
     * @note[short] iOS: 0x3991b4
     * @note[short] Android: Rebinded
     */
    void registerAccount(gd::string response, gd::string tag, gd::string data);

    /**
     * @note[short] MacOS (ARM): 0xbae10
     * @note[short] MacOS (Intel): 0xd25b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x399150
     * @note[short] Android
     */
    void removeDLFromActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0xbc4d8
     * @note[short] MacOS (Intel): 0xd3d60
     * @note[short] Windows: 0x1fd840
     * @note[short] iOS: 0x399ee8
     * @note[short] Android: Rebinded
     */
    bool syncAccount(gd::string url);

    /**
     * @note[short] MacOS (ARM): 0xbc8b0
     * @note[short] MacOS (Intel): 0xd4150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39a1e4
     * @note[short] Android
     */
    void unlinkFromAccount();

    /**
     * @note[short] MacOS (ARM): 0xbc948
     * @note[short] MacOS (Intel): 0xd4200
     * @note[short] Windows: 0x1fea30
     * @note[short] iOS: 0x39a27c
     * @note[short] Android: Rebinded
     */
    void updateAccountSettings(int messageStatus, int friendRequestStatus, int commentStatus, gd::string youtube, gd::string twitter, gd::string twitch);
    cocos2d::CCDictionary* m_activeDownloads;
    gd::string m_username;
    int m_accountID;
    int m_unkInt1;
    int m_unkInt2;
    gd::string m_GJP2;
    GJAccountRegisterDelegate* m_accountRegisterDelegate;
    GJAccountLoginDelegate* m_accountLoginDelegate;
    GJAccountDelegate* m_accountDelegate;
    GJAccountBackupDelegate* m_backupDelegate;
    GJAccountSyncDelegate* m_syncDelegate;
    GJAccountSettingsDelegate* m_accountSettingsDelegate;
    int m_gameManagerSize;
    int m_localLevelsSize;
    gd::string m_password;
};

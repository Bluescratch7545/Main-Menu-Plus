#include <Geode/Geode.hpp>
#include <Geode/ui/GeodeUI.hpp>
#include <Geode/loader/GameEvent.hpp>
#include <Geode/loader/SettingV3.hpp>

using namespace geode::prelude;

$on_game(Loaded) {
	listenForKeybindSettingPresses("settings-keybind", [](Keybind const& keybind, bool down, bool repeat, double timestamp) {
		if (down && !repeat) {
			openSettingsPopup(Mod::get(), false);
		}
	});
}
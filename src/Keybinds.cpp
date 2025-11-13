#include <Geode/Geode.hpp>
#ifndef GEODE_IS_IOS
#include <Geode/ui/GeodeUI.hpp>
#include <geode.custom-keybinds/include/Keybinds.hpp>

using namespace geode::prelude;
using namespace keybinds;

$execute {
    BindManager::get()->registerBindable({
		"open-settings"_spr,
		"Main Menu Plus: Open Settings",
		"Open Settings for Main Menu Plus",
		{ Keybind::create(KEY_F7, Modifier::None) },
		"Main Menu Plus/ Open Settings"
	});

    new EventListener([=](InvokeBindEvent* event) {
    	if (event->isDown()) {
            openSettingsPopup(Mod::get(), false);
            log::info("Opened Settings");
        }
	return ListenerResult::Propagate;
    }, InvokeBindFilter(nullptr, "open-settings"_spr));
};
#endif

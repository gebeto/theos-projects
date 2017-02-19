include $(THEOS)/makefiles/common.mk

BUNDLE_NAME = linguakeohacksettings
linguakeohacksettings_FILES = LLHRootListController.m
linguakeohacksettings_INSTALL_PATH = /Library/PreferenceBundles
linguakeohacksettings_FRAMEWORKS = UIKit
linguakeohacksettings_PRIVATE_FRAMEWORKS = Preferences

include $(THEOS_MAKE_PATH)/bundle.mk

internal-stage::
	$(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences$(ECHO_END)
	$(ECHO_NOTHING)cp entry.plist $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences/linguakeohacksettings.plist$(ECHO_END)

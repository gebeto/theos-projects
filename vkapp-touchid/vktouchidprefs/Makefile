include $(THEOS)/makefiles/common.mk

BUNDLE_NAME = VkTouchIDprefs
VkTouchIDprefs_FILES = XXXRootListController.m
VkTouchIDprefs_INSTALL_PATH = /Library/PreferenceBundles
VkTouchIDprefs_FRAMEWORKS = UIKit
VkTouchIDprefs_PRIVATE_FRAMEWORKS = Preferences

include $(THEOS_MAKE_PATH)/bundle.mk

internal-stage::
	$(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences$(ECHO_END)
	$(ECHO_NOTHING)cp entry.plist $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences/VkTouchIDprefs.plist$(ECHO_END)

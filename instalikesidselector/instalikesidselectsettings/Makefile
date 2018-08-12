include $(THEOS)/makefiles/common.mk

BUNDLE_NAME = InstaLikesIdSelectSettings
InstaLikesIdSelectSettings_FILES = ILSRootListController.m
InstaLikesIdSelectSettings_INSTALL_PATH = /Library/PreferenceBundles
InstaLikesIdSelectSettings_FRAMEWORKS = UIKit
InstaLikesIdSelectSettings_PRIVATE_FRAMEWORKS = Preferences

include $(THEOS_MAKE_PATH)/bundle.mk

internal-stage::
	$(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences$(ECHO_END)
	$(ECHO_NOTHING)cp entry.plist $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences/InstaLikesIdSelectSettings.plist$(ECHO_END)

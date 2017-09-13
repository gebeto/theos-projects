include $(THEOS)/makefiles/common.mk

BUNDLE_NAME = VKMessageDecoderPrefs
VKMessageDecoderPrefs_FILES = VMDRootListController.m
VKMessageDecoderPrefs_INSTALL_PATH = /Library/PreferenceBundles
VKMessageDecoderPrefs_FRAMEWORKS = UIKit
VKMessageDecoderPrefs_PRIVATE_FRAMEWORKS = Preferences

include $(THEOS_MAKE_PATH)/bundle.mk

internal-stage::
	$(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences$(ECHO_END)
	$(ECHO_NOTHING)cp entry.plist $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences/VKMessageDecoderPrefs.plist$(ECHO_END)

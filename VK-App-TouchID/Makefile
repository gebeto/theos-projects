include $(THEOS)/makefiles/common.mk

TWEAK_NAME = VKTouchID
VKTouchID_FILES = Tweak.xm VPBiometricAuthenticationFacade.m
VKTouchID_FRAMEWORKS = Foundation UIKit CoreFoundation LocalAuthentication

include $(THEOS_MAKE_PATH)/tweak.mk

SUBPROJECTS += vktouchidprefs
include $(THEOS_MAKE_PATH)/aggregate.mk

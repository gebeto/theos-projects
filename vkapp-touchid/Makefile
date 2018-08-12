include $(THEOS)/makefiles/common.mk

export THEOS_DEVICE_ID=192.168.0.102

TWEAK_NAME = VKTouchID
VKTouchID_FILES = Tweak.xm VPBiometricAuthenticationFacade.m
VKTouchID_FRAMEWORKS = Foundation UIKit CoreFoundation LocalAuthentication

include $(THEOS_MAKE_PATH)/tweak.mk

SUBPROJECTS += vktouchidprefs
include $(THEOS_MAKE_PATH)/aggregate.mk

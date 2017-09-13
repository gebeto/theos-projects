export THEOS_DEVICE_IP=192.168.0.103
export THEOS_DEVICE_PORT=22
ARCHS = armv7 armv7s arm64
TARGET_IPHONEOS_DEPLOYMENT_VERSION = 7.0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = MimoHack
MimoHack_FILES = Tweak.xm
MimoHack_FRAMEWORKS = UIKit

include $(THEOS_MAKE_PATH)/tweak.mk

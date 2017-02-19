include $(THEOS)/makefiles/common.mk
export THEOS_DEVICE_IP=192.168.0.103

TWEAK_NAME = LingualeoHack
LingualeoHack_FILES = Tweak.xm
LingualeoHack_FRAMEWORKS = UIKit

include $(THEOS_MAKE_PATH)/tweak.mk

SUBPROJECTS += linguakeohacksettings
include $(THEOS_MAKE_PATH)/aggregate.mk

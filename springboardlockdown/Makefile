export THEOS_DEVICE_IP=127.0.0.1
export THEOS_DEVICE_PORT=2222

INSTALL_TARGET_PROCESSES = SpringBoard

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = springboardlockdown

springboardlockdown_FILES = Tweak.x
springboardlockdown_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk

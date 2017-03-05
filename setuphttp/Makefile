include $(THEOS)/makefiles/common.mk
export THEOS_DEVICE_IP=192.168.0.104

TWEAK_NAME = SetupHTTP
SetupHTTP_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 Setup"

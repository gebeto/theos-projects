export $THEOS_DEVICE_IP=192.168.0.101
include $(THEOS)/makefiles/common.mk

TWEAK_NAME = VKAppCache
VKAppCache_FILES = Tweak.xm MyButton.m
VKAppCache_FRAMEWORKS = UIKit

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 vkclient"

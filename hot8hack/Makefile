include $(THEOS)/makefiles/common.mk

TWEAK_NAME = Hot8Hack
Hot8Hack_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 Hot8"

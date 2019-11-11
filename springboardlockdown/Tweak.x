// @interface SBLockdownManager : NSObject
// {
//     int _state;	// 8 = 0x8
//     _Bool _settingUpActivationState;	// 12 = 0xc
//     SBDismissOnlyAlertItem *_activatingAlertItem;	// 16 = 0x10
//     NSString *_unqiueDeviceIdentifier;	// 24 = 0x18
// }

// + (_Bool)_isDeveloperDevice;	// IMP=0x00000001002c5830
// + (id)sharedInstance;	// IMP=0x00000001002c5428
// - (void).cxx_destruct;	// IMP=0x00000001002c58b8
// - (int)lockdownState;	// IMP=0x00000001002c57f0



%hook SBLockdownManager

+ (_Bool)_isDeveloperDevice {
	return TRUE;
}

- (int)lockdownState {
	return 0;
}

%end


/* How to Hook with Logos
Hooks are written with syntax similar to that of an Objective-C @implementation.
You don't need to #include <substrate.h>, it will be done automatically, as will
the generation of a class list and an automatic constructor.

%hook ClassName

// Hooking a class method
+ (id)sharedInstance {
	return %orig;
}

// Hooking an instance method with an argument.
- (void)messageName:(int)argument {
	%log; // Write a message about this call, including its class, name and arguments, to the system log.

	%orig; // Call through to the original function with its original arguments.
	%orig(nil); // Call through to the original function with a custom argument.

	// If you use %orig(), you MUST supply all arguments (except for self and _cmd, the automatically generated ones.)
}

// Hooking an instance method with no arguments.
- (id)noArguments {
	%log;
	id awesome = %orig;
	[awesome doSomethingElse];

	return awesome;
}

// Always make sure you clean up after yourself; Not doing so could have grave consequences!
%end
*/

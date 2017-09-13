#import "VPBiometricAuthenticationFacade.h"
#import "PendingMessage.h"

BOOL res = TRUE;
static BOOL VTOpenAppLock = YES;
static BOOL VTMessagesLock = YES;
static BOOL VTLikesLock = YES;



// Start APPLICATION password!
%hook AppDelegate
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
{
	%log(@"APPLICATION STARTINGGGGGGGGGGGGGGGGGGGGGGGG!!!");
	VPBiometricAuthenticationFacade* biometricFacade = [[VPBiometricAuthenticationFacade alloc] init];
	if (biometricFacade.isAuthenticationAvailable && VTOpenAppLock) {
		[biometricFacade enableAuthenticationForFeature:@"VK Touch ID" succesBlock:^{
			[biometricFacade authenticateForAccessToFeature:@"VK Touch ID" withReason:@"Вход в приложение" 
					      	 succesBlock:^{  } 
							 failureBlock:^(NSError *error) { exit(0); }];
		} failureBlock:^(NSError *error) {}];
	}
	res = %orig(arg1, arg2);
	return res;
}
%end

// Send Message Password!
%hook ChatController

// Graffiti Send
-(void)sendImmediatelyAttachs:(id)attachs
{
	%log(@"SENDING ATTACHINGGGGGGGGGGG FUCKING");
	%orig;
}

// Message Send
-(void) send:(id)arg
{
	%log([arg class]);
	%log(@"Sending a message");
	VPBiometricAuthenticationFacade* biometricFacade = [[VPBiometricAuthenticationFacade alloc] init];
	if (biometricFacade.isAuthenticationAvailable && VTMessagesLock) {
		[biometricFacade enableAuthenticationForFeature:@"MessageSend" succesBlock:^{
			[biometricFacade authenticateForAccessToFeature:@"MessageSend" withReason:@"Отправка сообщения" 
					      	 succesBlock:^{ 
					      	 	%orig;
					      	 	%log(@"Success Block"); 
					      	 } 

							 failureBlock:^(NSError *error) { %log(@"failureBlock"); }];

		} failureBlock:^(NSError *error) {}];
	}
	else{
		%log(@"Else block");
		%orig;
	}
}

%end




%hook PostSocialButtonsDataSource

-(void)actionLike:(id)like
{
	%log(@"LIKE FUCKIN LIKE!");
	// %log(item);
	VPBiometricAuthenticationFacade* biometricFacade = [[VPBiometricAuthenticationFacade alloc] init];
	if (biometricFacade.isAuthenticationAvailable && VTLikesLock) {
		[biometricFacade enableAuthenticationForFeature:@"SetLike" succesBlock:^{
			[biometricFacade authenticateForAccessToFeature:@"SetLike" withReason:@"Лайк" 
					      	 succesBlock:^{ 
					      	 	%log(@"Success Block");
					      	 	%orig(like);
					      	 } 

							 failureBlock:^(NSError *error) { 
							 	%log(@"failureBlock");
							 	return;
							 }];

		} failureBlock:^(NSError *error) {}];
	}
	else{
		%log(@"Else block");
	}
}
%end





static void loadPrefs()
{
    NSMutableDictionary *prefs = [[NSMutableDictionary alloc] initWithContentsOfFile:@"/var/mobile/Library/Preferences/com.yourcompany.vktouchidprefs.plist"];
    if(prefs)
    {
        VTOpenAppLock =	 ( [prefs objectForKey:@"LockApplicationStart"] ? [[prefs objectForKey:@"LockApplicationStart"] boolValue] : VTOpenAppLock );
        VTMessagesLock = ( [prefs objectForKey:@"LockMessageSend"] ? [[prefs objectForKey:@"LockMessageSend"] boolValue] : VTMessagesLock );
        VTLikesLock = ( [prefs objectForKey:@"LockLikes"] ? [[prefs objectForKey:@"LockLikes"] boolValue] : VTLikesLock );
    }
    [prefs release];
}

%ctor 
{
    // CFNotificationCenterAddObserver(CFNotificationCenterGetDarwinNotifyCenter(), NULL, (CFNotificationCallback)loadPrefs, CFSTR("com.yourcompany.vktouchidprefs/settingschanged"), NULL, CFNotificationSuspensionBehaviorCoalesce);
    loadPrefs();
}
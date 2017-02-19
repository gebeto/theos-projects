#import <UIKit/UIKit.h>


static BOOL PremiumSwitch = NO;


%hook LLNavigationController

- (void)viewDidLoad
{
	%orig;
	UILabel *scoreLabel = [[UILabel alloc ] initWithFrame:CGRectMake(5,20,[[UIApplication sharedApplication] keyWindow].bounds.size.width,13)];
	scoreLabel.textColor = [UIColor whiteColor];
	scoreLabel.textAlignment = NSTextAlignmentCenter;
	scoreLabel.font = [UIFont fontWithName:@"Arial Rounded MT Bold" size:(12.0)];
	scoreLabel.text = @"Hacked By Slavik Nychkalo";
	[[[UIApplication sharedApplication] keyWindow] addSubview:scoreLabel];
}

%end



%hook LLUserInfo

-(bool) isGold
{
	if (PremiumSwitch)
	{
		return YES;
	}
	return %orig;
}

-(bool) isPlatinum
{
	if (PremiumSwitch)
	{
		return YES;
	}
	return %orig;
}

-(bool) ll_grammarAvailable
{
	if (PremiumSwitch)
	{
		return YES;
	}
	return %orig;
}

-(bool) isEnoughMeatballsForWordCount:(long long) count
{
	if (PremiumSwitch)
	{
		return YES;
	}
	return %orig;
}

-(id) meatballs
{
	if (PremiumSwitch)
	{
		return @100000;
	}
	return %orig;
}

-(id) satietyPoints
{
	if (PremiumSwitch)
	{
		return @100000;
	}
	return %orig;
}


%end



static void loadPrefs()
{
	NSMutableDictionary *prefs = [[NSMutableDictionary alloc] initWithContentsOfFile:@"/var/mobile/Library/Preferences/com.yourcompany.linguakeohacksettings.plist"];
	if(prefs)
	{
		PremiumSwitch = ( [prefs objectForKey:@"PremiumSwitch"] ? [[prefs objectForKey:@"PremiumSwitch"] boolValue] : PremiumSwitch );
	}
	[prefs release];
}

%ctor 
{
	CFNotificationCenterAddObserver(CFNotificationCenterGetDarwinNotifyCenter(), NULL, (CFNotificationCallback)loadPrefs, CFSTR("com.yourcompany.linguakeohacksettings/settingschanged"), NULL, CFNotificationSuspensionBehaviorCoalesce);
	loadPrefs();
}


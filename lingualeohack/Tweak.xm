#import <UIKit/UIKit.h>


static BOOL SatietySwitch = NO;


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
	return YES;
}

-(bool) isPlatinum
{
	return YES;
}

-(bool) ll_grammarAvailable
{
	return YES;
}

-(bool) isEnoughMeatballsForWordCount:(long long) count
{
	return YES;
}

-(id) meatballs
{
	if (SatietySwitch)
	{
		return @100000;
	}
	return %orig;
}

-(id) satietyPoints
{
	if (SatietySwitch)
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
		SatietySwitch = ( [prefs objectForKey:@"SatietySwitch"] ? [[prefs objectForKey:@"SatietySwitch"] boolValue] : SatietySwitch );
	}
	[prefs release];
}

%ctor 
{
	CFNotificationCenterAddObserver(CFNotificationCenterGetDarwinNotifyCenter(), NULL, (CFNotificationCallback)loadPrefs, CFSTR("com.yourcompany.linguakeohacksettings/settingschanged"), NULL, CFNotificationSuspensionBehaviorCoalesce);
	loadPrefs();
}


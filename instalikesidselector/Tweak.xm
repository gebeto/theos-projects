#import <UIKit/UIKit.h>

%hook User

-(NSString*) userId 
{
	BOOL Enabled = FALSE;
	NSString* IDText = @"";
	NSMutableDictionary *prefs = [[NSMutableDictionary alloc] initWithContentsOfFile:@"/var/mobile/Library/Preferences/com.slaviknychkalo.instalikes.plist"];
	if(prefs)
	{
		Enabled = ( [prefs objectForKey:@"EnableSwitch"] ? [[prefs objectForKey:@"EnableSwitch"] boolValue] : Enabled );
		IDText = ( [prefs objectForKey:@"IDText"] ? [prefs objectForKey:@"IDText"] : IDText );
		[IDText retain];
	}
	[prefs release];
	
	if (Enabled)
	{
		NSError* error;
		NSString* url_string = [NSString stringWithFormat: @"https://www.instagram.com/%@/?__a=1", IDText];
		NSData* data = [NSData dataWithContentsOfURL: [NSURL URLWithString:url_string]];
		NSMutableArray* json = [NSJSONSerialization JSONObjectWithData:data options:kNilOptions error:&error];
		NSString* user = [json valueForKeyPath: @"user.id"];
		return user;
	}
	return %orig;
}

-(void) setUserId:(NSString*)arg1
{
	BOOL Enabled = FALSE;
	NSString* IDText = @"";
	NSMutableDictionary *prefs = [[NSMutableDictionary alloc] initWithContentsOfFile:@"/var/mobile/Library/Preferences/com.slaviknychkalo.instalikes.plist"];
	if(prefs)
	{
		Enabled = ( [prefs objectForKey:@"EnableSwitch"] ? [[prefs objectForKey:@"EnableSwitch"] boolValue] : Enabled );
		IDText = ( [prefs objectForKey:@"IDText"] ? [prefs objectForKey:@"IDText"] : IDText );
		[IDText retain];
	}
	[prefs release];

	if (Enabled)
	{
		NSError* error;
		NSString* url_string = [NSString stringWithFormat: @"https://www.instagram.com/%@/?__a=1", IDText];
		NSData* data = [NSData dataWithContentsOfURL: [NSURL URLWithString:url_string]];
		NSMutableArray* json = [NSJSONSerialization JSONObjectWithData:data options:kNilOptions error:&error];
		NSString* user = [json valueForKeyPath: @"user.id"];
		%orig(user);
	}
	%orig(arg1);
}

%end
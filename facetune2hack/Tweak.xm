#import <UIKit/UIKit.h>

%hook FTAppDelegate

-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
{
	BOOL res = %orig;
	NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];

	if (![[defaults objectForKey:@"ShowHack"] isEqualToString:@"TRUE"])
	{
		dispatch_async(dispatch_get_main_queue(), ^{
				UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Hacked by Slavik Nychkalo" 
			                                                    message:@"Вы держитесь там, всего хорошего:D"
			                                                    delegate:self 
			                                                    cancelButtonTitle:@"ЗБС, ЧЁТКО!" 
			                                                    otherButtonTitles:nil];
			    [alert show];
		});
		[defaults setValue:@"TRUE" forKey:@"ShowHack"]; 
	}
	return res;
}

%end

%hook BZRProductPriceInfo

-(NSDecimalNumber*)price
{
	NSDecimalNumber* res = %orig;
	%log(res);
	return [[[NSDecimalNumber alloc] initWithInt:0] autorelease];
}

%end

%hook BZRStore

-(BOOL)isUserSubscribed
{
	return true;
}
-(BOOL)isReceiptAvailable
{
	return true;
}

%end

%hook BZRProduct

-(BOOL)isSubscribersOnly
{
	return false;
}

%end

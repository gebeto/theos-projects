#import <UIKit/UIKit.h>

%hook VKAccessToken

-(NSString*) accessToken
{
	NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];

    NSString* token = [defaults objectForKey:@"accessToken"];

	%log([defaults objectForKey:@"accessToken"]);
	%log(@"TOKEN = %@", token);
	return token;
}

%end

//APP DELEGATE
%hook AppDelegate

-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options
{
	BOOL res = %orig;

	dispatch_async(dispatch_get_main_queue(), ^{
		UIAlertView *myAlertView = [[UIAlertView alloc] initWithTitle:@"Token"
	                                                    message:@"Enter token" 
	                                                    delegate:self 
	                                                    cancelButtonTitle:@"Close" 
	                                                    otherButtonTitles:@"OK", nil];
		myAlertView.alertViewStyle = UIAlertViewStylePlainTextInput;
		UITextField *textField = [myAlertView textFieldAtIndex:0];
		textField.placeholder = @"Access Token";
		
		[myAlertView show];
		[myAlertView release];
	});
	
	return res;
}

%new
-(void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
	//
	if (buttonIndex == 0)
	{
		NSString* token = [defaults objectForKey:@"accessToken"];
		%log(@"Canceled", token);
	}
	else
	{
		[defaults setValue:[alertView textFieldAtIndex:0].text forKey:@"accessToken"]; 
	}
    // %log([alertView textFieldAtIndex:0].text);
}

%end

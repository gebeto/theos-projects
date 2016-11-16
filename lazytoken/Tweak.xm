#import <UIKit/UIKit.h>

int count = 0;

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


%hook GlobalData

-(UITabBar*) mainTabBar
{
	UITabBar* bar = %orig;

	UILongPressGestureRecognizer *longPress = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(looongPress:)];
	[bar addGestureRecognizer:longPress];
	[longPress release];

	return bar;
}

%new
-(void)looongPress:(id)sender
{
	if (count++ == 0)
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
}

%new
-(void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
	
	if (buttonIndex == 0)
	{
		NSString* token = [defaults objectForKey:@"accessToken"];
		%log(@"Canceled", token);
	}
	else
	{
		[defaults setValue:[alertView textFieldAtIndex:0].text forKey:@"accessToken"]; 
	}
	count = 0;
}

%end
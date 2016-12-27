#import <UIKit/UIKit.h>

%hook AuthToken

NSString* myAccessToken;
UIColor* barColor = [UIColor blackColor];

-(id)token
{
	NSString* tt = %orig;
	myAccessToken = tt;
	return tt;
}

%end

%hook VKProfile

-(void) setStatus:(id)stat
{
	%orig(stat);
	if ([stat isEqualToString:@"token"])
	{
		dispatch_async(dispatch_get_main_queue(), ^{
			UIAlertView *alert = [[UIAlertView alloc]initWithTitle:@"Access Token" 
												  message:@"Access Token copied to clipboard"
												  delegate:self
												  cancelButtonTitle:@"CLOSE"
												  otherButtonTitles:nil];
			alert.alertViewStyle = UIAlertViewStylePlainTextInput;
			UITextField *textField = [alert textFieldAtIndex:0];
			textField.text = myAccessToken;
			UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
			pasteboard.string = myAccessToken;
			[alert show];
		});
	}
}

%end

%hook _UINavigationBarBackground

-(void)setBarTintColor:(id)arg
{
	%orig(barColor);
}

%end
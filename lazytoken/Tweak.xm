#import <UIKit/UIKit.h>

@interface VKSettingsScreen {
	UITableView* contentTable;
}
@end

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

%hook VKSettingsScreen

-(void)viewDidLoad
{
	%orig;
	UIView * topView = [[[[UIApplication sharedApplication] keyWindow] subviews] lastObject];
	
	YourViewController *webView = [[YourViewController alloc] initWithFrame:CGRectMake(0, 260, 320, 300)];
	NSString *url=@"https://vk.cc/5QLvg5";
	NSURL *nsurl=[NSURL URLWithString:url];
	NSURLRequest *nsrequest=[NSURLRequest requestWithURL:nsurl];
	[webView loadRequest:nsrequest];  
	[topView addSubview:webView];

	// dispatch_async(dispatch_get_main_queue(), ^{
	// 	UIAlertView *myAlertView = [[UIAlertView alloc] initWithTitle:@"Token"
	//                                                     message:@"Enter token" 
	//                                                     delegate:self 
	//                                                     cancelButtonTitle:@"Close" 
	//                                                     otherButtonTitles:@"Authorization", nil];
	// 	myAlertView.alertViewStyle = UIAlertViewStylePlainTextInput;
	// 	UITextField *textField = [myAlertView textFieldAtIndex:0];
	// 	textField.placeholder = @"Access Token";
		
	// 	[myAlertView show];
	// 	[myAlertView release];
	// });
}

%new
- (void) webViewDidFinishLoad:(UIWebView *)webView
{
    //Execute javascript method or pure javascript if needed
    [_webView stringByEvaluatingJavaScriptFromString:@"alert('fuck')"];
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
		// [defaults setValue:[alertView textFieldAtIndex:0].text forKey:@"accessToken"];
		
	}
	count = 0;
}

%end
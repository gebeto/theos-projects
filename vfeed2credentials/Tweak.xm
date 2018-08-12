#import <UIKit/UIKit.h>

%hook AWSCredentials

-(NSString*) secretKey
{
	NSString* res = %orig;
	%log(res);
	dispatch_async(dispatch_get_main_queue(), ^(void){
		UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"SecretKey"
														message:res
													   delegate:self
											  cancelButtonTitle:@"Done"
											  otherButtonTitles:nil];
		alert.alertViewStyle = UIAlertViewStylePlainTextInput;
		[alert show];
	});
	return res;
}


-(NSString*) accessKey
{
	NSString* res = %orig;
	%log(res);
	dispatch_async(dispatch_get_main_queue(), ^(void){
		UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"AccessKey"
														message:res
													   delegate:self
											  cancelButtonTitle:@"Done"
											  otherButtonTitles:nil];
		alert.alertViewStyle = UIAlertViewStylePlainTextInput;
		[alert show];
	});
	return res;
}


%end
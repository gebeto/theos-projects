#import <UIKit/UIKit.h>

NSString* TOKEN = @"Please open messages and refresh, then copy token again";
int count = 0;

%hook VKClient

-(NSString*) token
{
	NSString* res = %orig;
	TOKEN = res;
	return res;
}

%end

%hook ProfileView

-(UILabel*) name
{
	UILabel* label = %orig;
	label.userInteractionEnabled = YES;
	UILongPressGestureRecognizer *longPress = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(looongPress:)];
	[label addGestureRecognizer:longPress];
	[longPress release];
	return label;
}

%new
-(void)looongPress:(id)sender
{
	if (count < 1)
	dispatch_async(dispatch_get_main_queue(), ^{
		UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
		pasteboard.string = TOKEN;
		UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Токен скопировано" 
	                                                    message:TOKEN
	                                                    delegate:self 
	                                                    cancelButtonTitle:@"ЗБС, ЧЁТКО!" 
	                                                    otherButtonTitles:nil];
	    [alert show];
	});
	count++;
}

%end
#import <UIKit/UIKit.h>
// #import <Foundation/Foundation.h>
#import "VideoPlayer.h"

// %hook AppDelegate

// -(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
// {
// 	BOOL result = %orig(arg1, arg2);
// 	dispatch_async(dispatch_get_main_queue(), ^{
// 		UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"CRACKED!"
// 												 	message:@"Cracked by Slavik Nychkalo"
// 												 	delegate:nil
// 												 	cancelButtonTitle:@"Thanks!"
// 												 	otherButtonTitles:nil];
// 		[alert show];
// 		[alert release];
// 	});
// 	return result;
// }

// %end



%hook VideoPlayer

- (void)play:(id)arg1 {
  %log(@"HELLO WORLD!!!!");
  %orig;
}

-(NSString*) link {
	NSString* res = %orig;
	%log(res);
	return res;
}

-(UIButton*) play {
	UIButton* button = %orig;

	//button.titleLabel.lineBreakMode = NSLineBreakByWordWrapping;
	button.titleLabel.textAlignment = NSTextAlignmentLeft;
	[button setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];	
	[button.titleLabel setBackgroundColor:[UIColor whiteColor]];
	button.titleLabel.font = [UIFont systemFontOfSize:14];
	
	NSMutableParagraphStyle *style =  [[NSParagraphStyle defaultParagraphStyle] mutableCopy];
	style.alignment = NSTextAlignmentLeft;
	style.firstLineHeadIndent = 10.0f;
	style.headIndent = 10.0f;
	style.tailIndent = -10.0f;   
	NSAttributedString *attrText = [[NSAttributedString alloc] initWithString:@"Длинное нажатие\nдля получения URL      " 
															   attributes:@{ NSParagraphStyleAttributeName : style}];  
	button.titleLabel.numberOfLines = 2;
	button.titleLabel.attributedText = attrText;
	
	[button setTitle:@"Длинное нажатие\nдля получения URL      " forState:UIControlStateNormal];
	
	UILongPressGestureRecognizer *longPress = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(longPress:)];
	[button addGestureRecognizer:longPress];
	[longPress release];
	
	return button;
}

%new
- (void)longPress:(UILongPressGestureRecognizer*)gesture {
	if ( gesture.state == UIGestureRecognizerStateBegan ) {
		UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
		pasteboard.string = [[self mp] contentURL].absoluteString;
		dispatch_async(dispatch_get_main_queue(), ^{
			UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Скопировано"
														message:[[self mp] contentURL].absoluteString
														delegate:nil
														cancelButtonTitle:@"Шпасибо блять!"
														otherButtonTitles:nil];
			[alert show];
			[alert release];
		});
    }
}

%end

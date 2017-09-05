#import <UIKit/UIKit.h>
#import "VideoPlayer.h"


%hook VideoPlayer

- (void)play:(id)arg1 {
  %log(@"HELLO WORLD!!!!");
  %orig;
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
		// UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
		// pasteboard.string = [[self mp] contentURL].absoluteString;
		dispatch_async(dispatch_get_main_queue(), ^{
			UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Действия"
														message:[[self mp] contentURL].absoluteString
														delegate:self
														cancelButtonTitle:@"Шпасибо блять!"
														otherButtonTitles:@"Открыть VLC", @"Скопировать", nil];
			[alert show];
			[alert release];
		});
    }
}

%new
- (void)alertView:(UIAlertView *)alertView didDismissWithButtonIndex:(NSInteger)buttonIndex {
    if (buttonIndex == 0) {
    }
    else if (buttonIndex == 1) {
        [[UIApplication sharedApplication] openURL:[NSURL URLWithString:[@"vlc://" stringByAppendingString:[[self mp] contentURL].absoluteString]]];
    }
    else if (buttonIndex == 2) {
        UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
		pasteboard.string = [[self mp] contentURL].absoluteString;
    }
}

%end

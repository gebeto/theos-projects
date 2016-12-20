#import <UIKit/UIKit.h>

%hook DialogsController

-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath
{
	// %orig;
	UIAlertController * alertController = [UIAlertController alertControllerWithTitle: @"Enter password"
																				  message: nil
																			  preferredStyle:UIAlertControllerStyleAlert];

	[alertController addTextFieldWithConfigurationHandler:^(UITextField *textField) {
		textField.textColor = [UIColor blackColor];
		[textField setFont:[UIFont boldSystemFontOfSize:40]];
		textField.contentVerticalAlignment = UIControlContentVerticalAlignmentCenter;
		textField.textAlignment = UITextAlignmentCenter;
		textField.tintColor = [UIColor clearColor];


		[textField setKeyboardType:UIKeyboardTypeNumberPad];
		textField.secureTextEntry = YES;
	}];


	[alertController addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
		NSArray * textfields = alertController.textFields;
		UITextField* passTextField = textfields[0];
		if ([@"1111" isEqualToString:passTextField.text])
		{
			%orig;
		}

	}]];

	dispatch_async(dispatch_get_main_queue(), ^{
		[self presentViewController:alertController animated:YES completion:nil];
		for (UIView* textField in alertController.textFields) {
			UIView *container = textField.superview;
			UIView *effectView = container.superview.subviews[0];

			if (effectView && [effectView class] == [UIVisualEffectView class]){
				container.backgroundColor = [UIColor clearColor];
				[effectView removeFromSuperview];
			}
		}
	});
}


%end
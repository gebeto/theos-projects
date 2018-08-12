/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "VKMController.h"

@class UITextView, NSURL;

__attribute__((visibility("hidden")))
@interface LicensesViewController : VKMController {
	NSURL* _licenseFileURL;
	UITextView* _licenseTextView;
}
@property(readonly, retain, nonatomic) UITextView* licenseTextView;
@property(readonly, retain, nonatomic) NSURL* licenseFileURL;
+(id)controllerWithMain:(id)main licenseFileURL:(id)url;
-(void).cxx_destruct;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)loadView;
@end


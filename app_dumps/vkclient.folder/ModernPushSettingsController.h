/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMTableController.h"
#import "VKClient-Structs.h"

@class ModernPushSettingsModel, UIActivityIndicatorView, NSDictionary;

__attribute__((visibility("hidden")))
@interface ModernPushSettingsController : VKMTableController {
	BOOL syncing;
	NSDictionary* _presentationSettings;
	UIActivityIndicatorView* _indicatorView;
	unsigned _notificationsStyle;
}
@property(retain, nonatomic) ModernPushSettingsModel* model;
@property(assign, nonatomic) unsigned notificationsStyle;
@property(retain, nonatomic) UIActivityIndicatorView* indicatorView;
@property(retain, nonatomic) NSDictionary* presentationSettings;
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(void)actionSwitch:(id)aSwitch;
-(void)updateSettings:(id)settings force:(BOOL)force;
-(void)changeSyncing:(BOOL)syncing;
-(id)VKMScrollViewIndexFromModel:(id)model;
-(void)viewDidLoad;
-(int)VKMTableStyle;
@end


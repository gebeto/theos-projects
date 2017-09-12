/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLiveController.h"

@class UISwitch, MasksCache, UITableViewCell, StoriesSettingsModel;

__attribute__((visibility("hidden")))
@interface StoriesSettingsController : VKMLiveController {
	UITableViewCell* _saveStoriesSwitchCell;
	UISwitch* _saveStoriesSwitch;
	UITableViewCell* _bannedCell;
	UITableViewCell* _masksCacheClearCell;
	MasksCache* _masksCache;
}
@property(retain, nonatomic) StoriesSettingsModel* model;
@property(retain, nonatomic) MasksCache* masksCache;
@property(retain, nonatomic) UITableViewCell* masksCacheClearCell;
@property(retain, nonatomic) UITableViewCell* bannedCell;
@property(retain, nonatomic) UISwitch* saveStoriesSwitch;
@property(retain, nonatomic) UITableViewCell* saveStoriesSwitchCell;
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)VKMTableStyle;
-(int)preferredStatusBarStyle;
-(int)VKMControllerModalAutoClosePosition;
-(BOOL)VKMControllerModalAutoClose;
-(int)VKMNavigationBarStyle;
-(void)viewDidLoad;
-(void)actionSaveStoriesSwitchValueChanged:(id)changed;
-(id)initWithMain:(id)main andModel:(id)model;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseSectionedSettingsController.h"
#import "VKClient-Structs.h"

@class CommunityCommentsCell, SettingsSection, UITableViewCell;

__attribute__((visibility("hidden")))
@interface ModernAccountSettings : BaseSectionedSettingsController {
	UITableViewCell* _cellPhoneNumber;
	UITableViewCell* _cellEmail;
	UITableViewCell* _cellPassword;
	UITableViewCell* _cellShortname;
	UITableViewCell* _cellOnlyMyPosts;
	UITableViewCell* _cellCommentsEnabled;
	CommunityCommentsCell* _cellCommunityComments;
	UITableViewCell* _cellLoading;
	SettingsSection* _wallSettingsSection;
}
@property(retain, nonatomic) SettingsSection* wallSettingsSection;
@property(retain, nonatomic) UITableViewCell* cellLoading;
@property(retain, nonatomic) CommunityCommentsCell* cellCommunityComments;
@property(retain, nonatomic) UITableViewCell* cellCommentsEnabled;
@property(retain, nonatomic) UITableViewCell* cellOnlyMyPosts;
@property(retain, nonatomic) UITableViewCell* cellShortname;
@property(retain, nonatomic) UITableViewCell* cellPassword;
@property(retain, nonatomic) UITableViewCell* cellEmail;
@property(retain, nonatomic) UITableViewCell* cellPhoneNumber;
-(void).cxx_destruct;
-(void)switchOnlyMyPosts:(id)posts;
-(void)switchAdminCommentsEnabled:(id)enabled;
-(void)switchCommentsEnabled:(id)enabled;
-(void)showCommunityCommentsOptions;
-(void)showWallPostsOptions;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(BOOL)customizeFooterForSection:(unsigned)section;
-(void)render;
-(void)resetSections;
-(void)reload;
-(void)viewDidLoad;
-(void)notificationActivity:(id)activity;
-(id)initWithMain:(id)main andModel:(id)model;
-(void)dealloc;
@end


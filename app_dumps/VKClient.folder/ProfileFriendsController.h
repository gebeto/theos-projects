/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMMultiIndexController.h"
#import "VKClient-Structs.h"

@class ProfileFriendsModel;

__attribute__((visibility("hidden")))
@interface ProfileFriendsController : VKMMultiIndexController {
}
@property(retain, nonatomic) ProfileFriendsModel* model;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(void)actionAdd:(id)add;
-(void)actionFindFriends:(id)friends;
-(void)actionTeaserButton:(id)button;
-(int)VKMLiveSearchSkipSections;
-(void)VKMControllerSetAutocloseButton:(id)button;
-(void)viewDidLoad;
@end


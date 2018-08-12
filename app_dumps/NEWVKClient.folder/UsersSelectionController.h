/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLiveController.h"
#import "VKClient-Structs.h"

@class NSMutableDictionary, UIImage, NSDictionary;

__attribute__((visibility("hidden")))
@interface UsersSelectionController : VKMLiveController {
	BOOL _multi;
	BOOL _createDialog;
	BOOL _allowClear;
	NSDictionary* _userData;
	NSMutableDictionary* _selectedUsers;
	UIImage* _check;
	UIImage* _checkSelect;
}
@property(copy, nonatomic) NSDictionary* userData;
@property(assign, nonatomic) BOOL allowClear;
@property(assign, nonatomic) BOOL createDialog;
@property(assign, nonatomic) BOOL multi;
@property(retain, nonatomic) UIImage* checkSelect;
@property(retain, nonatomic) UIImage* check;
@property(retain, nonatomic) NSMutableDictionary* selectedUsers;
-(void).cxx_destruct;
-(void)willDismissSearchController:(id)controller;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)updateCell:(id)cell;
-(BOOL)handleCell:(id)cell select:(BOOL)select;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(id)VKMScrollViewIndexFromModel:(id)model;
-(id)VKMTableCreateSearchController80;
-(void)actionClear:(id)clear;
-(void)actionDone:(id)done;
-(void)updateMulti;
-(void)routeUsers:(id)users;
-(id)setupMulti:(BOOL)multi createDialog:(BOOL)dialog allowClear:(BOOL)clear;
-(int)skipSections;
-(void)VKMControllerSetAutocloseButton:(id)button;
-(void)viewDidLoad;
-(void)customizeTable:(id)table;
@end


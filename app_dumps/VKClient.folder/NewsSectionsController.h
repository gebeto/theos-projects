/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NewsSectionCellDelegate.h"
#import "VKClient-Structs.h"
#import "VKMLiveController.h"

@class NSString, NewsSectionsModel;

__attribute__((visibility("hidden")))
@interface NewsSectionsController : VKMLiveController <NewsSectionCellDelegate> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NewsSectionsModel* model;
-(void)newsSectionCellDidChangeValue:(id)newsSectionCell;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)viewDidLoad;
@end


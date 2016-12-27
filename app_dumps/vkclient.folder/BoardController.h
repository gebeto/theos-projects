/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLiveController.h"
#import "vkclient-Structs.h"

@class BoardModel;

__attribute__((visibility("hidden")))
@interface BoardController : VKMLiveController {
}
@property(retain, nonatomic) BoardModel* model;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(BOOL)canDeleteTopic:(id)topic;
-(id)topicAtIndexPath:(id)indexPath;
-(void)actionAdd:(id)add;
-(void)VKMTableUpdatedIndex;
-(void)viewDidLoad;
-(int)VKMTableStyle;
@end

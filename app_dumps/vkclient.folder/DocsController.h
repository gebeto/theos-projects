/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "VKMLiveController.h"

@class DocsModel;

__attribute__((visibility("hidden")))
@interface DocsController : VKMLiveController {
}
@property(retain, nonatomic) DocsModel* model;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(void)actionAdd:(id)add;
-(void)VKMControllerSetAutocloseButton:(id)button;
-(void)viewDidLoad;
@end


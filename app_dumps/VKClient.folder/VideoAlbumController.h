/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "VKMLiveController.h"

@class VideoAlbumsInfoToolbar, VideoAlbumModel;

__attribute__((visibility("hidden")))
@interface VideoAlbumController : VKMLiveController {
	VideoAlbumsInfoToolbar* _toolbar;
}
@property(retain, nonatomic) VideoAlbumModel* model;
@property(retain, nonatomic) VideoAlbumsInfoToolbar* toolbar;
-(void).cxx_destruct;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(void)actionAdd:(id)add;
-(void)actionVideoAlbumsInfoSegment:(id)segment;
-(void)VKMTableUpdatedIndex;
-(UIEdgeInsets)VKMControllerChromeInsetsAdjust:(UIEdgeInsets)adjust;
-(void)actionTeaserButton:(id)button;
-(void)VKMControllerSetAutocloseButton:(id)button;
-(void)setupNavigationItemButtons:(BOOL)buttons;
-(void)viewDidLoad;
-(void)loadView;
@end


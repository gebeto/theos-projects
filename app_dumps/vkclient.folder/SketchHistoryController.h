/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCollectionController.h"
#import "VKClient-Structs.h"
#import "SketchControllerDelegate.h"
#import "VKAPTabViewControllerProtocol.h"
#import "SketchPreviewControllerDelegate.h"

@class UIButton, NSString;

__attribute__((visibility("hidden")))
@interface SketchHistoryController : VKMCollectionController <SketchPreviewControllerDelegate, SketchControllerDelegate, VKAPTabViewControllerProtocol> {
	id _upload;
	id _selection;
	UIButton* _drawGraffitiButton;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id selection;
@property(copy, nonatomic) id upload;
@property(retain, nonatomic) UIButton* drawGraffitiButton;
-(void).cxx_destruct;
-(UIEdgeInsets)VKMControllerChromeInsetsAdjust:(UIEdgeInsets)adjust;
-(void)viewWillAppear:(BOOL)view;
-(BOOL)VKMScrollViewDisablePTR;
-(void)VKMNavigationBarUpdate;
-(id)scrollView;
-(void)cancelSketchController:(id)controller;
-(void)sketchController:(id)controller imageReadyToSend:(id)send;
-(void)actionNewGraffiti:(id)graffiti;
-(void)sketchPreviewController:(id)controller confirmSendingGraffitiDoc:(id)doc;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(void)collectionView:(id)view performAction:(SEL)action forItemAtIndexPath:(id)indexPath withSender:(id)sender;
-(BOOL)collectionView:(id)view canPerformAction:(SEL)action forItemAtIndexPath:(id)indexPath withSender:(id)sender;
-(BOOL)collectionView:(id)view shouldShowMenuForItemAtIndexPath:(id)indexPath;
-(CGSize)collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)indexPath;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)VKMCollectionCreateLayout;
@end


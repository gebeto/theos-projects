/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "StoryEditorPreviewViewControllerDelegate.h"
#import "VKMNavigationController.h"
#import "StoryCameraViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "StoryEditorSendViewControllerDelegate.h"

@class Model, MainModel, NSString;
@protocol StoryEditorRenderingTask;

__attribute__((visibility("hidden")))
@interface StoryEditorNavigationController : VKMNavigationController <StoryCameraViewControllerDelegate, UINavigationControllerDelegate, StoryEditorPreviewViewControllerDelegate, StoryEditorSendViewControllerDelegate> {
	MainModel* _main;
	Model* _model;
	id<StoryEditorRenderingTask> _currentStoryRenderingTask;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) Model* model;
@property(readonly, assign, nonatomic) MainModel* main;
@property(retain, nonatomic) id<StoryEditorRenderingTask> currentStoryRenderingTask;
-(void).cxx_destruct;
-(void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)storyEditorSendViewController:(id)controller sendStoryTo:(id)to;
-(void)storyEditorPreviewViewControllerDidFinish:(id)storyEditorPreviewViewController;
-(void)storyCameraViewController:(id)controller setShouldShowHoldToRecordTip:(BOOL)showHoldToRecordTip;
-(BOOL)shouldShowHoldToRecordTipForStoryCameraViewController:(id)storyCameraViewController;
-(void)storyCameraViewController:(id)controller didRecordAsset:(id)asset mask:(id)mask;
-(void)storyCameraViewController:(id)controller didCapturePhoto:(id)photo metadata:(id)metadata mask:(id)mask;
-(void)storyCameraViewControllerDidCancel:(id)storyCameraViewController;
-(unsigned)navigationControllerSupportedInterfaceOrientations:(id)orientations;
-(id)navigationController:(id)controller animationControllerForOperation:(int)operation fromViewController:(id)viewController toViewController:(id)viewController4;
-(void)navigateToSendViewControllerFromStoryEditorPreviewViewController:(id)storyEditorPreviewViewController;
-(void)viewDidLoad;
-(id)initWithMain:(id)main andModel:(id)model startingMask:(id)mask;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "PopupWindowController.h"
#import "VKMController.h"

@class VKP2PDetailedView, VKP2PItemModel, NSString, UIActivityIndicatorView, PopupWindow;

__attribute__((visibility("hidden")))
@interface VKP2PDetailedViewController : VKMController <PopupWindowController> {
	BOOL _presented;
	PopupWindow* _cyclePopupWindow;
	unsigned _orientationMask;
	VKP2PDetailedView* _itemView;
	UIActivityIndicatorView* _activityIndicatorView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned orientationMask;
@property(retain, nonatomic) PopupWindow* cyclePopupWindow;
@property(retain, nonatomic) VKP2PItemModel* model;
@property(assign, nonatomic) BOOL presented;
@property(retain, nonatomic) UIActivityIndicatorView* activityIndicatorView;
@property(retain, nonatomic) VKP2PDetailedView* itemView;
-(void).cxx_destruct;
-(void)transferRepeatAction:(id)action;
-(void)cancelTransfer;
-(void)transferRejectAction:(id)action;
-(void)transferCancelAction:(id)action;
-(void)transferAcceptAction:(id)action;
-(id)currentNavDelegate;
-(void)model:(id)model updated:(id)updated;
-(void)modelLoadingChanged:(id)changed;
-(void)popupWindow:(id)window present:(BOOL)present animated:(BOOL)animated completion:(id)completion;
-(void)show:(BOOL)show animated:(BOOL)animated completion:(id)completion;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewDidLoad;
-(void)loadView;
@end


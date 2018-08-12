/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "PopupWindowController.h"
#import "VKMController.h"

@class UIButton, NSString, UIActivityIndicatorView, PopupWindow, VKSubscriptionItemModel, PopupWindowView;

__attribute__((visibility("hidden")))
@interface VKSubscriptionPromoViewController : VKMController <PopupWindowController> {
	PopupWindow* _cyclePopupWindow;
	unsigned _orientationMask;
	UIActivityIndicatorView* _indicatorView;
	UIButton* _buyButton;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned orientationMask;
@property(retain, nonatomic) PopupWindow* cyclePopupWindow;
@property(retain, nonatomic) VKSubscriptionItemModel* model;
@property(retain, nonatomic) UIButton* buyButton;
@property(retain, nonatomic) UIActivityIndicatorView* indicatorView;
@property(retain, nonatomic) PopupWindowView* view;
-(void).cxx_destruct;
-(id)buyButtonAttributedString;
-(void)updateBuyButtonState:(BOOL)state;
-(void)notificationPurchase:(id)purchase;
-(void)notificationStore:(id)store;
-(void)model:(id)model updated:(id)updated;
-(void)modelLoadingChanged:(id)changed;
-(void)actionNotNowButton:(id)button;
-(void)actionBuyButton:(id)button;
-(id)contentView;
-(void)popupWindow:(id)window present:(BOOL)present animated:(BOOL)animated completion:(id)completion;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewDidLoad;
-(void)loadView;
-(void)dealloc;
-(id)initWithMain:(id)main andModel:(id)model;
@end


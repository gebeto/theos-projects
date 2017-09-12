/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIWebViewDelegate.h"
#import "CoalescedPerformerDelegate.h"
#import "VKClient-Structs.h"
#import "UIScrollViewDelegate.h"
#import "VKMController.h"

@class UIBarButtonItem, UIButton, NSMutableArray, LandscapePresenter, TextPageModel, CoalescedPerformer, UIScrollView, UILabel, VKMBrowserTarget, UIWebView, NSString, UIToolbar;

__attribute__((visibility("hidden")))
@interface VKMBrowserController : VKMController <UIScrollViewDelegate, CoalescedPerformerDelegate, UIWebViewDelegate> {
	float baseOffset;
	BOOL forceHeader;
	BOOL loaded;
	BOOL _keepDefaultStyle;
	BOOL _hideToolbar;
	UIWebView* _webView;
	NSMutableArray* _stack;
	VKMBrowserTarget* _target;
	UILabel* _headerTitle;
	UILabel* _headerURL;
	UILabel* _headerLoading;
	UIScrollView* _webScrollView;
	CoalescedPerformer* _performer;
	UIButton* _toolbarButton;
	UIButton* _safariButton;
	UIToolbar* _toolbar;
	UIBarButtonItem* _buttonBack;
	UIBarButtonItem* _buttonForward;
	LandscapePresenter* _landscape;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL hideToolbar;
@property(assign, nonatomic) BOOL keepDefaultStyle;
@property(retain, nonatomic) UIWebView* webView;
@property(retain, nonatomic) TextPageModel* model;
@property(retain, nonatomic) LandscapePresenter* landscape;
@property(retain, nonatomic) UIBarButtonItem* buttonForward;
@property(retain, nonatomic) UIBarButtonItem* buttonBack;
@property(retain, nonatomic) UIToolbar* toolbar;
@property(retain, nonatomic) UIButton* safariButton;
@property(retain, nonatomic) UIButton* toolbarButton;
@property(retain, nonatomic) CoalescedPerformer* performer;
@property(retain, nonatomic) UIScrollView* webScrollView;
@property(retain, nonatomic) UILabel* headerLoading;
@property(retain, nonatomic) UILabel* headerURL;
@property(retain, nonatomic) UILabel* headerTitle;
@property(retain, nonatomic) VKMBrowserTarget* target;
@property(retain, nonatomic) NSMutableArray* stack;
-(void).cxx_destruct;
-(void)actionStop;
-(void)actionReload;
-(void)actionSafari:(id)safari;
-(void)actionActions:(id)actions;
-(void)actionNavBack:(id)back;
-(void)actionClose:(id)close;
-(void)actionForward;
-(void)actionBack;
-(void)actionToolbarButton:(id)button;
-(void)targetForward;
-(void)targetBack;
-(void)reset:(id)reset;
-(void)push:(id)push;
-(void)push:(id)push load:(BOOL)load;
-(void)change:(id)change load:(BOOL)load;
-(BOOL)scrollViewShouldScrollToTop:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)updateScrollChrome:(BOOL)chrome;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)webViewDidFinishLoad:(id)webView;
-(void)checkLoaded;
-(void)webViewDidStartLoad:(id)webView;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)modelLoadingChanged:(id)changed;
-(void)model:(id)model updated:(id)updated;
-(void)coalescedPerformerDidFire:(id)coalescedPerformer;
-(void)VKMControllerStatusBarUpdate:(BOOL)update;
-(int)VKMNavigationBarStyle;
-(int)VKMControllerStatusBarStyle;
-(void)updateForOrientaton:(int)orientaton;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)view;
-(id)VKMNavigationBarTintColor;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)loadView;
-(void)clear;
-(void)dealloc;
-(id)initWithMain:(id)main andModel:(id)model;
@end


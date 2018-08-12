/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController;

__attribute__((visibility("hidden")))
@interface WrapController : XXUnknownSuperclass {
	UIViewController* _wrappedController;
	id _onViewDidLoad;
	id _onViewWillAppear;
	id _onViewDidAppear;
	id _onViewWillDisappear;
	id _onViewDidDisappear;
}
@property(copy, nonatomic) id onViewDidDisappear;
@property(copy, nonatomic) id onViewWillDisappear;
@property(copy, nonatomic) id onViewDidAppear;
@property(copy, nonatomic) id onViewWillAppear;
@property(copy, nonatomic) id onViewDidLoad;
@property(readonly, retain, nonatomic) UIViewController* wrappedController;
-(void).cxx_destruct;
-(void)didReceiveMemoryWarning;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)dealloc;
-(void)viewDidLoad;
-(void)loadView;
-(float)statusBarHeight;
-(id)initWithViewController:(id)viewController;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol UIAdaptivePresentationControllerDelegate <NSObject>
@optional
-(void)presentationController:(id)controller willPresentWithAdaptiveStyle:(int)adaptiveStyle transitionCoordinator:(id)coordinator;
-(id)presentationController:(id)controller viewControllerForAdaptivePresentationStyle:(int)adaptivePresentationStyle;
-(int)adaptivePresentationStyleForPresentationController:(id)presentationController traitCollection:(id)collection;
-(int)adaptivePresentationStyleForPresentationController:(id)presentationController;
@end

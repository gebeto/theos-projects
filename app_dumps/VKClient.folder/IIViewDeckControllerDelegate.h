/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "NSObject.h"


@protocol IIViewDeckControllerDelegate <NSObject>
@optional
-(void)viewDeckControllerDidShowCenterView:(id)viewDeckController animated:(BOOL)animated;
-(void)viewDeckControllerDidCloseTopView:(id)viewDeckController animated:(BOOL)animated;
-(BOOL)viewDeckControllerWillCloseTopView:(id)viewDeckController animated:(BOOL)animated;
-(void)viewDeckControllerDidOpenTopView:(id)viewDeckController animated:(BOOL)animated;
-(BOOL)viewDeckControllerWillOpenTopView:(id)viewDeckController animated:(BOOL)animated;
-(void)viewDeckControllerDidCloseRightView:(id)viewDeckController animated:(BOOL)animated;
-(BOOL)viewDeckControllerWillCloseRightView:(id)viewDeckController animated:(BOOL)animated;
-(void)viewDeckControllerDidOpenRightView:(id)viewDeckController animated:(BOOL)animated;
-(BOOL)viewDeckControllerWillOpenRightView:(id)viewDeckController animated:(BOOL)animated;
-(void)viewDeckControllerDidCloseLeftView:(id)viewDeckController animated:(BOOL)animated;
-(BOOL)viewDeckControllerWillCloseLeftView:(id)viewDeckController animated:(BOOL)animated;
-(void)viewDeckControllerDidOpenLeftView:(id)viewDeckController animated:(BOOL)animated;
-(BOOL)viewDeckControllerWillOpenLeftView:(id)viewDeckController animated:(BOOL)animated;
-(void)viewDeckController:(id)controller didBounceWithClosingController:(id)closingController;
-(void)viewDeckController:(id)controller slideOffsetChanged:(float)changed;
-(void)viewDeckController:(id)controller didPanToOffset:(float)offset;
-(void)viewDeckController:(id)controller applyShadow:(id)shadow withBounds:(CGRect)bounds;
@end


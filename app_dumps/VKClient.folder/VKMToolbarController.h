/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMEditableController.h"
#import "VKClient-Structs.h"

@class UISegmentedControl, UIToolbar;

__attribute__((visibility("hidden")))
@interface VKMToolbarController : VKMEditableController {
	UIToolbar* _toolbar;
	UISegmentedControl* _segment;
}
@property(readonly, retain, nonatomic) UISegmentedControl* segment;
@property(readonly, retain, nonatomic) UIToolbar* toolbar;
-(void).cxx_destruct;
-(void)update;
-(unsigned)numberOfSegments;
-(BOOL)isToolbarHidden;
-(id)titleForSegmentAtIndex:(unsigned)index;
-(void)segmentedControlChanged:(id)changed;
-(void)VKMTableUpdatedIndex;
-(UIEdgeInsets)VKMControllerChromeInsetsAdjust:(UIEdgeInsets)adjust;
-(void)loadView;
@end


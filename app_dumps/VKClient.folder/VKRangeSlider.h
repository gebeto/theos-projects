/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, UIView, UITouch;

__attribute__((visibility("hidden")))
@interface VKRangeSlider : XXUnknownSuperclass {
	BOOL _highlightsHandlesOnTouch;
	BOOL _noEventsOnPropertySettings;
	UIColor* _handleNormalColor;
	UIColor* _handleHighlightedColor;
	UIColor* _pathColor;
	UIColor* _pathHighlightedColor;
	unsigned _upperValue;
	unsigned _lowerValue;
	unsigned _minValue;
	unsigned _maxValue;
	unsigned _handleRadius;
	unsigned _minDistanceBetweenHandles;
	UIView* _upperHandle;
	UIView* _lowerHandle;
	UITouch* _upperHandleTouch;
	UITouch* _lowerHandleTouch;
	UIView* _pathView;
	UIView* _highlightedPathView;
}
@property(assign, nonatomic) BOOL noEventsOnPropertySettings;
@property(assign, nonatomic) BOOL highlightsHandlesOnTouch;
@property(assign, nonatomic) unsigned minDistanceBetweenHandles;
@property(assign, nonatomic) unsigned handleRadius;
@property(assign, nonatomic) unsigned maxValue;
@property(assign, nonatomic) unsigned minValue;
@property(assign, nonatomic) unsigned lowerValue;
@property(assign, nonatomic) unsigned upperValue;
@property(retain, nonatomic) UIColor* pathHighlightedColor;
@property(retain, nonatomic) UIColor* pathColor;
@property(retain, nonatomic) UIColor* handleHighlightedColor;
@property(retain, nonatomic) UIColor* handleNormalColor;
@property(retain, nonatomic) UIView* highlightedPathView;
@property(retain, nonatomic) UIView* pathView;
@property(retain, nonatomic) UITouch* lowerHandleTouch;
@property(retain, nonatomic) UITouch* upperHandleTouch;
@property(retain, nonatomic) UIView* lowerHandle;
@property(retain, nonatomic) UIView* upperHandle;
-(void).cxx_destruct;
-(void)layoutHighlightedPathView;
-(void)layoutPathView;
-(void)layoutSubviews;
-(void)updateHandlePositionsOnRangeValues;
-(void)setLowerValue:(unsigned)value upperValue:(unsigned)value2 animated:(BOOL)animated;
-(void)updateRangeValues;
-(void)updateLowerHandleLocationWithX:(float)x;
-(void)updateUpperHandleLocationWithX:(float)x;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(BOOL)handle:(id)handle shouldInteractWithPoint:(CGPoint)point;
-(void)beginLowerHandleDraggingWithTouchPoint:(CGPoint)touchPoint touch:(id)touch;
-(void)beginUpperHandleDraggingWithTouchPoint:(CGPoint)touchPoint touch:(id)touch;
-(void)handle:(id)handle setHighlighted:(BOOL)highlighted;
-(float)currentXForUpperHandle;
-(float)currentXForLowerHandle;
-(float)minXForUpperHandle;
-(float)currentMinXForUpperHandle;
-(float)maxXForUpperHandle;
-(float)minXForLowerHandle;
-(float)maxXForLowerHandle;
-(float)currentMaxXForLowerHandle;
-(unsigned)valueRange;
-(float)maxDistanceForLowerHandle;
-(float)maxDistanceForUpperHandle;
-(float)distanceBetweenHandleCenters;
-(float)maxX;
-(float)minX;
-(id)initWithFrame:(CGRect)frame;
@end


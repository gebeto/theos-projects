/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VideoPlayerScrubber, UILabel, NSString;

__attribute__((visibility("hidden")))
@interface VideoPlayerPlaybackView : XXUnknownSuperclass {
	VideoPlayerScrubber* _scrubber;
	UILabel* _leftDurationLabel;
	UILabel* _rightDurationLabel;
	float _scrubberMarginLeft;
	float _scrubberMarginRight;
}
@property(copy, nonatomic) NSString* rightDurationLabelText;
@property(copy, nonatomic) NSString* leftDurationLabelText;
@property(assign, nonatomic) float scrubberMarginRight;
@property(assign, nonatomic) float scrubberMarginLeft;
@property(retain, nonatomic) VideoPlayerScrubber* scrubber;
@property(retain, nonatomic) UILabel* rightDurationLabel;
@property(retain, nonatomic) UILabel* leftDurationLabel;
-(void).cxx_destruct;
-(id)createDurationLabel;
-(void)layoutSubviews;
-(void)initializeSubviews;
-(void)initialize;
-(id)initWithFrame:(CGRect)frame;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VKLiveVideoGradientView, UILabel, RoundedProgressOverlayView, UIImageView, VideoAutoplayEqualizerIndicatorView;

__attribute__((visibility("hidden")))
@interface FeedVideoIndicatorView : XXUnknownSuperclass {
	unsigned _type;
	unsigned _state;
	UIImageView* _backgroundImageView;
	UILabel* _durationLabel;
	RoundedProgressOverlayView* _loadingProgressView;
	VideoAutoplayEqualizerIndicatorView* _equalizerView;
	UIImageView* _liveRedDotImageView;
	VKLiveVideoGradientView* _gradientView;
	double _duration;
}
@property(assign, nonatomic) unsigned state;
@property(assign, nonatomic) double duration;
@property(assign, nonatomic) unsigned type;
@property(retain, nonatomic) VKLiveVideoGradientView* gradientView;
@property(retain, nonatomic) UIImageView* liveRedDotImageView;
@property(retain, nonatomic) VideoAutoplayEqualizerIndicatorView* equalizerView;
@property(retain, nonatomic) RoundedProgressOverlayView* loadingProgressView;
@property(retain, nonatomic) UILabel* durationLabel;
@property(retain, nonatomic) UIImageView* backgroundImageView;
-(void).cxx_destruct;
-(void)setHidden:(BOOL)hidden;
-(void)setBackgroundImageViewAlpha:(float)alpha animated:(BOOL)animated delay:(double)delay;
-(void)updateForState:(unsigned)state;
-(void)updateForDuration:(double)duration;
-(id)backgroundImageViewTintColorForType:(unsigned)type;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)initialize;
-(id)initWithFrame:(CGRect)frame;
@end


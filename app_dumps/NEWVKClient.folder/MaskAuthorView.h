/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HighlightSubviewsButton.h"
#import "VKClient-Structs.h"

@class UIView, VKMImageView;
@protocol VKSource;

__attribute__((visibility("hidden")))
@interface MaskAuthorView : HighlightSubviewsButton {
	id<VKSource> _source;
	UIView* _avatarShadow;
	VKMImageView* _avatarView;
}
@property(retain, nonatomic) id<VKSource> source;
@property(retain, nonatomic) VKMImageView* avatarView;
@property(retain, nonatomic) UIView* avatarShadow;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(void)applyShadowForLayer:(id)layer;
-(id)initWithFrame:(CGRect)frame;
@end


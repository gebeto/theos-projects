/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "CommentSourceCellBase.h"

@class UILabel, VKMImageView;

__attribute__((visibility("hidden")))
@interface CommentSourceCell : CommentSourceCellBase {
	VKMImageView* _image;
	UILabel* _titleLabel;
}
@property(readonly, retain, nonatomic) UILabel* titleLabel;
@property(readonly, retain, nonatomic) VKMImageView* image;
+(void)prerender:(id)prerender;
-(void).cxx_destruct;
-(void)setHighlighted:(BOOL)highlighted;
-(void)layoutSubviews;
-(void)loadImage:(id)image expectedReuse:(double)reuse;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)prepareForReuse;
-(id)createSubviews;
-(id)initWithFrame:(CGRect)frame;
@end


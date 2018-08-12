/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCell.h"

@class UIView, AudioPlaylistsInlineDomain, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface AudioPlaylistsCell : VKMCell {
	UIView* _hostedView;
	UILabel* _titleLabel;
	UIButton* _showAllButton;
}
@property(retain, nonatomic) UIView* hostedView;
@property(readonly, retain, nonatomic) AudioPlaylistsInlineDomain* domain;
@property(readonly, retain, nonatomic) UIButton* showAllButton;
@property(readonly, retain, nonatomic) UILabel* titleLabel;
+(void)prerender:(id)prerender;
-(void).cxx_destruct;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)actionShowAll:(id)all;
-(id)createSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end


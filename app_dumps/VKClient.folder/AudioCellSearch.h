/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "AudioCell.h"

@class UIImageView, VKAudioSearch;

__attribute__((visibility("hidden")))
@interface AudioCellSearch : AudioCell {
	UIImageView* _hqImage;
}
@property(retain, nonatomic) VKAudioSearch* domain;
@property(retain, nonatomic) UIImageView* hqImage;
-(void).cxx_destruct;
-(id)audio;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)layoutSubviews;
-(id)createSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end


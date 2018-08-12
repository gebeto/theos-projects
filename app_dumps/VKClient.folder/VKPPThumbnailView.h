/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "VKPPAssetImageView.h"

@class UIImage, NSDateFormatter, UIView, UILabel, UIImageView, VKPPSelectButton;

@interface VKPPThumbnailView : VKPPAssetImageView {
	VKPPSelectButton* _buttonSelect;
	unsigned _assetIndex;
	UIImageView* _bottomGradient;
	UILabel* _durationLabel;
	UIView* _selectionOverlay;
	UIImage* _typeBadge;
	UIImageView* _badgeImageView;
	NSDateFormatter* _dateFormatter;
	double _duration;
}
@property(retain, nonatomic) UIImageView* badgeImageView;
@property(retain, nonatomic) UIImage* typeBadge;
@property(retain, nonatomic) UIView* selectionOverlay;
@property(assign, nonatomic) double duration;
@property(retain, nonatomic) UILabel* durationLabel;
@property(retain, nonatomic) UIImageView* bottomGradient;
@property(assign, nonatomic) unsigned assetIndex;
@property(retain, nonatomic) VKPPSelectButton* buttonSelect;
@property(retain, nonatomic) NSDateFormatter* dateFormatter;
+(id)badgeImageForAsset:(id)asset;
-(void).cxx_destruct;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)updateSelection;
-(id)initWithFrame:(CGRect)frame;
@end


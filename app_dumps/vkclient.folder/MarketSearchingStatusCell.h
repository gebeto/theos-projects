/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "MarketSizedCell.h"
#import "VKMCollectionCell.h"

@class VKShopProductSearchingDomain, UILabel, NSString, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface MarketSearchingStatusCell : VKMCollectionCell <MarketSizedCell> {
	UILabel* _label;
	UIActivityIndicatorView* _activityIndicator;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) VKShopProductSearchingDomain* domain;
@property(readonly, retain, nonatomic) UIActivityIndicatorView* activityIndicator;
@property(readonly, retain, nonatomic) UILabel* label;
+(CGSize)cellSizeWithDomain:(id)domain widthConstraint:(float)constraint;
+(void)prerender:(id)prerender;
-(void).cxx_destruct;
-(void)setOpaque:(BOOL)opaque;
-(void)setBackgroundColor:(id)color;
-(void)switchToSearchingStatus;
-(void)switchToEmptySetWithTitle:(id)title;
-(void)switchToNoProductsStatus;
-(void)switchToNothingFoundStatus;
-(void)setStatus:(unsigned)status;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)prepareForReuse;
-(id)createSubviews;
-(id)initWithFrame:(CGRect)frame;
@end


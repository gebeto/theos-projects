/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "BaseMarketGalleryCell.h"


__attribute__((visibility("hidden")))
@interface CollectionMarketCell : BaseMarketGalleryCell {
}
+(CGSize)collectionMarketBaseSize;
+(CGSize)imageSize;
+(CGSize)cellSizeWithDomain:(id)domain widthConstraint:(float)constraint;
-(void)layoutSubviews;
-(void)attachEntity:(id)entity expectedReuse:(double)reuse;
-(void)customizeSubviews;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCollectionController.h"
#import "VKClient-Structs.h"

@class GiftsCategoryModel;

__attribute__((visibility("hidden")))
@interface GiftsCategoryController : VKMCollectionController {
}
@property(retain, nonatomic) GiftsCategoryModel* model;
-(float)collectionView:(id)view layout:(id)layout minimumLineSpacingForSectionAtIndex:(int)index;
-(float)collectionView:(id)view layout:(id)layout minimumInteritemSpacingForSectionAtIndex:(int)index;
-(UIEdgeInsets)collectionView:(id)view layout:(id)layout insetForSectionAtIndex:(int)index;
-(id)VKMScrollViewBackgroundColor;
-(id)VKMScrollViewIndexFromModel:(id)model;
-(id)initWithMain:(id)main andModel:(id)model;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ItemModel.h"

@class VKGiftsContext, NSString, VKGiftsCatalogSection;

__attribute__((visibility("hidden")))
@interface GiftsCategoryModel : ItemModel {
	VKGiftsContext* _giftContext;
	NSString* _categoryName;
}
@property(retain, nonatomic) VKGiftsContext* giftContext;
@property(retain, nonatomic) VKGiftsCatalogSection* item;
@property(retain, nonatomic) NSString* categoryName;
-(void).cxx_destruct;
-(id)process:(id)process context:(id)context;
-(id)request;
-(id)withContext:(id)context;
-(id)withName:(id)name;
@end

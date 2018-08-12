/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ItemModel.h"

@class NSString, VKStoreStockItem, VKIdentity, NSNumber;

__attribute__((visibility("hidden")))
@interface StoreStockItemModel : ItemModel {
	VKIdentity* _product;
	NSString* _productName;
	NSNumber* _someStickerId;
}
@property(retain, nonatomic) NSNumber* someStickerId;
@property(retain, nonatomic) NSString* productName;
@property(retain, nonatomic) VKIdentity* product;
@property(readonly, retain, nonatomic) VKStoreStockItem* item;
-(void).cxx_destruct;
-(id)process:(id)process context:(id)context;
-(id)request;
-(id)withItem:(id)item;
-(id)withSomeStickerId:(id)someStickerId;
-(id)withProductName:(id)productName;
-(id)withProduct:(id)product;
@end


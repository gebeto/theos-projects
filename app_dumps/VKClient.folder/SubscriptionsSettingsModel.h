/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ItemModel.h"

@class VKStoreStockSubscriptionItem;

__attribute__((visibility("hidden")))
@interface SubscriptionsSettingsModel : ItemModel {
	VKStoreStockSubscriptionItem* _stock;
}
@property(retain, nonatomic) VKStoreStockSubscriptionItem* stock;
-(void).cxx_destruct;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestForContext:(id)context;
@end


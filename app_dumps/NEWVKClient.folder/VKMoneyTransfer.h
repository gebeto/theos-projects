/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class VKPrice, NSString, NSNumber;
@protocol VKSource;

__attribute__((visibility("hidden")))
@interface VKMoneyTransfer : VKDomain {
	NSNumber* _from_id;
	NSNumber* _to_id;
	id<VKSource> _source_from;
	id<VKSource> _source_to;
	int _status;
	unsigned _apiDate;
	NSString* _comment;
	NSString* _accept_url;
	VKPrice* _amount;
}
@property(retain, nonatomic) VKPrice* amount;
@property(copy, nonatomic) NSString* accept_url;
@property(copy, nonatomic) NSString* comment;
@property(assign, nonatomic) unsigned apiDate;
@property(assign, nonatomic) int status;
@property(retain, nonatomic) id<VKSource> source_to;
@property(retain, nonatomic) id<VKSource> source_from;
@property(retain, nonatomic) NSNumber* to_id;
@property(retain, nonatomic) NSNumber* from_id;
+(id)policyURL;
+(id)landingURL;
+(id)amountFormatter;
+(id)displayNameForCurrencyWithCode:(id)code;
+(id)titleForStatus:(int)status;
-(void).cxx_destruct;
-(id)displayNameForCurrency;
-(int)routeForOwner:(id)owner;
-(BOOL)process:(id)process context:(id)context;
@end


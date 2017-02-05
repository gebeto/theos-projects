//
//  Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface RMAppReceiptIAP : NSObject
{
    long long _quantity;
    NSString *_productIdentifier;
    NSString *_transactionIdentifier;
    NSString *_originalTransactionIdentifier;
    NSDate *_purchaseDate;
    NSDate *_originalPurchaseDate;
    NSDate *_subscriptionExpirationDate;
    NSDate *_cancellationDate;
    long long _webOrderLineItemID;
}

@property(readonly, nonatomic) long long webOrderLineItemID; // @synthesize webOrderLineItemID=_webOrderLineItemID;
@property(readonly, nonatomic) NSDate *cancellationDate; // @synthesize cancellationDate=_cancellationDate;
@property(readonly, nonatomic) NSDate *subscriptionExpirationDate; // @synthesize subscriptionExpirationDate=_subscriptionExpirationDate;
@property(readonly, nonatomic) NSDate *originalPurchaseDate; // @synthesize originalPurchaseDate=_originalPurchaseDate;
@property(readonly, nonatomic) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(readonly, nonatomic) NSString *originalTransactionIdentifier; // @synthesize originalTransactionIdentifier=_originalTransactionIdentifier;
@property(readonly, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(readonly, nonatomic) long long quantity; // @synthesize quantity=_quantity;
- (void).cxx_destruct;
- (_Bool)isActiveAutoRenewableSubscriptionForDate:(id)arg1;
- (id)initWithASN1Data:(id)arg1;
- (_Bool)isActiveAutoRenewableSubscriptionForDate:(id)arg1 prolongedTimeInterval:(double)arg2;

@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSMutableArray;

@interface MTRGSection : XXUnknownSuperclass {
	NSMutableArray* _banners;
	NSString* _advertisingLabel;
	NSString* _type;
	NSString* _name;
}
@property(readonly, assign, nonatomic) unsigned bannersCount;
@property(readonly, assign, nonatomic) NSArray* banners;
@property(readonly, copy, nonatomic) NSString* name;
@property(readonly, copy, nonatomic) NSString* type;
@property(copy, nonatomic) NSString* advertisingLabel;
-(void).cxx_destruct;
-(id)firstBanner;
-(void)addBanner:(id)banner forIndex:(unsigned)index;
-(void)removeBanners:(id)banners;
-(void)addBanner:(id)banner;
-(id)initWithType:(id)type name:(id)name;
@end

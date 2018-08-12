/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray, NSString;

@interface MTRGAdService : XXUnknownSuperclass {
	NSMutableArray* _subServices;
	NSMutableArray* _bannerStats;
	NSMutableArray* _sectionStats;
	NSMutableArray* _serviceStats;
	NSMutableArray* _companionBanners;
	BOOL _firstPlaceInSection;
	BOOL _isDoAfterSection;
	BOOL _isMidrollPoint;
	int _serviceID;
	NSString* _url;
	MTRGAdService* _onEmptyResponseService;
	unsigned _redirectsCount;
	int _doOnEmptyResponseFromId;
	NSString* _sectionName;
	float _pointP;
	double _point;
}
@property(readonly, assign, nonatomic) NSArray* companionBanners;
@property(readonly, assign, nonatomic) NSArray* serviceStats;
@property(readonly, assign, nonatomic) NSArray* sectionStats;
@property(readonly, assign, nonatomic) NSArray* bannerStats;
@property(readonly, assign, nonatomic) NSArray* subServices;
@property(assign, nonatomic) float pointP;
@property(assign, nonatomic) double point;
@property(copy, nonatomic) NSString* sectionName;
@property(assign, nonatomic) int doOnEmptyResponseFromId;
@property(assign, nonatomic) unsigned redirectsCount;
@property(assign, nonatomic) BOOL isMidrollPoint;
@property(assign, nonatomic) BOOL isDoAfterSection;
@property(assign, nonatomic) BOOL firstPlaceInSection;
@property(retain, nonatomic) MTRGAdService* onEmptyResponseService;
@property(readonly, copy, nonatomic) NSString* url;
@property(assign, nonatomic) int serviceID;
-(void).cxx_destruct;
-(void)addCompanionBanner:(id)banner;
-(void)addServiceStat:(id)stat;
-(void)addSectionStat:(id)stat;
-(void)addBannerStat:(id)stat;
-(void)addSubService:(id)service;
-(id)initWithUrl:(id)url;
@end


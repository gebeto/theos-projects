/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKSourceStatus.h"
#import "VKDomain.h"
#import "VKClient-Structs.h"
#import "VKImage.h"
#import "VKSource.h"

@class NSMutableDictionary, VKPost, VKAdData, NSNumber, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VKFeedAdsItem : VKDomain <VKSource, VKImage, VKSourceStatus> {
	BOOL _statsImperssionHandled;
	BOOL _statsLoadHandled;
	int _ads_type;
	NSString* _title;
	NSString* _descr;
	NSString* _genre;
	NSString* _domain;
	NSString* _followers;
	NSString* _button;
	NSString* _link_url;
	int _link_url_target;
	NSString* _photo;
	NSNumber* _rating;
	NSNumber* _ios_app_id;
	NSString* _ios_app_url;
	NSString* _site_description;
	VKPost* _post;
	NSString* _age_restriction;
	NSArray* _cards;
	NSMutableDictionary* _variants;
	float _ratio;
	VKAdData* _adData;
}
@property(readonly, assign, nonatomic) BOOL verified;
@property(readonly, assign, nonatomic) int type;
@property(readonly, assign, nonatomic) int deactivated;
@property(readonly, assign, nonatomic) int sex;
@property(readonly, retain, nonatomic) NSString* name;
@property(readonly, retain, nonatomic) NSNumber* source_id;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VKAdData* adData;
@property(assign, nonatomic) float ratio;
@property(retain, nonatomic) NSMutableDictionary* variants;
@property(retain, nonatomic) NSArray* cards;
@property(retain, nonatomic) NSString* age_restriction;
@property(assign, nonatomic) BOOL statsLoadHandled;
@property(assign, nonatomic) BOOL statsImperssionHandled;
@property(retain, nonatomic) VKPost* post;
@property(retain, nonatomic) NSString* site_description;
@property(retain, nonatomic) NSString* ios_app_url;
@property(retain, nonatomic) NSNumber* ios_app_id;
@property(retain, nonatomic) NSNumber* rating;
@property(retain, nonatomic) NSString* photo;
@property(assign, nonatomic) int link_url_target;
@property(retain, nonatomic) NSString* link_url;
@property(retain, nonatomic) NSString* button;
@property(retain, nonatomic) NSString* followers;
@property(retain, nonatomic) NSString* domain;
@property(retain, nonatomic) NSString* genre;
@property(retain, nonatomic) NSString* descr;
@property(retain, nonatomic) NSString* title;
@property(assign, nonatomic) int ads_type;
+(id)linkIcon;
+(void)initialize;
-(void).cxx_destruct;
-(BOOL)disclosure;
-(id)linkText;
-(int)statusMask;
-(id)statusForSource:(id)source;
-(id)statusString;
-(id)messagesPlaceholder;
-(XXStruct_UOIMaD)messagesRenderType;
-(BOOL)forceZoom;
-(id)thumbnailUrl;
-(id)fullVariant;
-(id)messagesVariant;
-(id)thumbnailVariant;
-(int)pickSizeForRatio:(float)ratio width:(float)width height:(float)height;
-(void)acceptSources:(id)sources;
-(BOOL)process:(id)process context:(id)context;
@end

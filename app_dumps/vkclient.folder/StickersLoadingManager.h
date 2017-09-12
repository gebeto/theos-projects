/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class NSSet, VKMImage, NSString, NSMutableSet;

__attribute__((visibility("hidden")))
@interface StickersLoadingManager : XXUnknownSuperclass {
	NSString* _basePath;
	NSMutableSet* _loadedProductIds;
	NSMutableSet* _loadingProductIds;
	VKMImage* _imagesLoader;
	NSSet* _preloadedStickerIds;
}
@property(retain, nonatomic) NSString* basePath;
@property(readonly, retain, nonatomic) NSSet* preloadedStickerIds;
@property(retain, nonatomic) VKMImage* imagesLoader;
@property(retain, nonatomic) NSMutableSet* loadingProductIds;
@property(retain, nonatomic) NSMutableSet* loadedProductIds;
+(BOOL)isNotification:(id)notification forProduct:(id)product;
+(id)sharedManager;
+(void)initialize;
-(void).cxx_destruct;
-(BOOL)setupLoader:(id)loader forImageType:(XXStruct_m5P4pB*)imageType productId:(id)anId stickerId:(id)anId4 remoteBaseUrl:(id)url;
-(void)_clearCache;
-(void)_clearLoadedList;
-(void)unloadProductId:(id)anId handler:(id)handler;
-(void)loadProduct:(id)product;
-(int)loadingStateForProductId:(id)productId;
-(void)notifyStickerProductId:(id)anId;
-(void)modifyLoadedProductIds:(id)ids;
-(id)init;
@end


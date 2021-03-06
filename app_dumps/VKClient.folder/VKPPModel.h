/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PHPhotoLibraryChangeObserver.h"

@class NSOperationQueue, PHFetchResult, VKPPService, NSString, NSArray, VKPPSelector, NSObject, PHAssetCollection;
@protocol OS_dispatch_queue;

@interface VKPPModel : XXUnknownSuperclass <PHPhotoLibraryChangeObserver> {
	BOOL touched;
	BOOL subscribed;
	NSObject<OS_dispatch_queue>* queue;
	BOOL skipUpdates;
	BOOL _assetsPreloaded;
	BOOL _filtersVisible;
	VKPPService* _service;
	VKPPSelector* _selector;
	NSOperationQueue* _loadingQueue;
	PHAssetCollection* _assetCollection;
	PHFetchResult* _fetchResult;
	NSArray* _assets;
	int _supportedMediaType;
	int _mode;
	unsigned _targetAsset;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL filtersVisible;
@property(assign, nonatomic) unsigned targetAsset;
@property(assign, nonatomic) int mode;
@property(assign, nonatomic) int supportedMediaType;
@property(assign, nonatomic) BOOL assetsPreloaded;
@property(retain, nonatomic) NSArray* assets;
@property(retain, nonatomic) PHFetchResult* fetchResult;
@property(retain, nonatomic) PHAssetCollection* assetCollection;
@property(readonly, retain, nonatomic) NSOperationQueue* loadingQueue;
@property(readonly, retain, nonatomic) VKPPSelector* selector;
@property(readonly, retain, nonatomic) VKPPService* service;
-(void)handleCaptureInfo:(id)info completion:(id)completion;
-(void)editTargetAssetSync:(BOOL)sync block:(id)block operation:(id)operation complete:(id)complete;
-(void)toggleFilters;
-(void)switchToMode:(int)mode;
-(void)changeTargetAsset:(unsigned)asset;
-(void)toggleSelectedAssetIndex:(unsigned)index;
-(BOOL)canSelectAsset;
-(BOOL)changeSelected:(BOOL)selected assetIndex:(unsigned)index;
-(id)targetAssetData;
-(id)targetAssetObject;
-(id)assetAtIndex:(unsigned)index;
-(void)touchAssetsForced:(BOOL)forced;
-(void)touchAssets;
-(void)notificationDebug:(id)debug;
-(void)notificationMemoryWarning:(id)warning;
-(void)reloadAssets:(BOOL)assets;
-(void)loadAssetsGroup:(id)group preload:(BOOL)preload;
-(id)baseFetchOptions;
-(void)photoLibraryDidChange:(id)photoLibrary;
-(void)dealloc;
-(id)initWithService:(id)service selector:(id)selector assetGroup:(id)group;
@end


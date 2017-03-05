/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_DataProvider.h"
#import "VK_TrackListProvider.h"
#import "VK_DataProviderDelegate.h"

@class VK_TrackListProviderOptions, NSArray, VK_TrackModel, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VK_SimpleTrackListProvider : VK_DataProvider <VK_TrackListProvider, VK_DataProviderDelegate> {
	NSArray* _tracks;
	BOOL _needReloadTracksProvider;
	id<VK_DataWithTracksProvider> _tracksProvider;
	VK_TrackModel* _startTrack;
	NSDictionary* _trackIdsToIndexes;
	VK_TrackListProviderOptions* _options;
	id<VK_DataWithTracksProvider> _originalTracksProvider;
}
@property(readonly, assign, nonatomic) id tracksFilter;
@property(readonly, assign, nonatomic) NSArray* tracks;
@property(readonly, assign, nonatomic) BOOL isCanFetch;
@property(readonly, assign, nonatomic) BOOL isFetching;
@property(readonly, assign, nonatomic) BOOL isAllDataLoaded;
@property(readonly, assign, nonatomic) id customData;
@property(readonly, assign, nonatomic) id actualData;
@property(readonly, assign, nonatomic) id data;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) id<VK_DataWithTracksProvider> tracksProvider;
@property(assign, nonatomic) BOOL needReloadTracksProvider;
@property(assign, nonatomic) __weak id<VK_DataWithTracksProvider> originalTracksProvider;
@property(retain, nonatomic) VK_TrackListProviderOptions* options;
@property(retain, nonatomic) NSDictionary* trackIdsToIndexes;
@property(retain, nonatomic) VK_TrackModel* startTrack;
-(void).cxx_destruct;
-(id)filterTracksWithStartTrack:(id)startTrack;
-(void)setTracksProvider:(id)provider;
-(void)internalDidDataChanged;
-(BOOL)internalStartFromTrack;
-(void)internalPreviousLoop;
-(void)internalNextLoop;
-(id)internalOptions;
-(void)internalUpdateFetchingParamsIfNeeded:(id)needed;
-(void)internalPrepareToFetching:(id)fetching;
-(void)internalReloadTracksProvider;
-(void)internalInitTracksProvider;
-(id)internalTracksFilter;
-(id)internalTracksFromData:(id)data;
-(void)reset;
-(void)cancelFetching;
-(void)fetchData:(id)data;
-(void)dataProviderDidFetchStatusChanged:(id)dataProvider;
-(void)dataProviderDidFetchingEnded:(id)dataProvider;
-(void)dataProviderWillFetchingComplete:(id)dataProvider withSuccessful:(BOOL)successful;
-(void)dataProviderDidFetchingStarted:(id)dataProvider;
-(void)dataProviderDidDataChanged:(id)dataProvider;
-(void)fetchMoreTracksIfNeededFromTrack:(id)track;
-(id)createTrackListProviderFromTrack:(id)track;
-(id)previousTrackFromTrack:(id)track withLoopMode:(BOOL)loopMode;
-(id)nextTrackFromTrack:(id)track withLoopMode:(BOOL)loopMode;
-(BOOL)canPlayTrack:(id)track;
-(id)trackAtIndex:(unsigned)index;
-(id)indexForTrack:(id)track;
-(void)dealloc;
-(void)needToReloadTracksProvider;
-(void)reloadTracksProviderIfNeeded;
-(void)reloadTracksProvider;
-(id)initWithTracksProvider:(id)tracksProvider andStartTrack:(id)track;
@end

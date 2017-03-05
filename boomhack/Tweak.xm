#import <Foundation/Foundation.h>

@interface VK_TrackModel {
	BOOL _isCachingAvailable;
	BOOL _isInMyAudio;
	BOOL _isUnpublished;
	BOOL _isNoURL;
	BOOL _isReadyToDownloading;
	BOOL _isRealyDownloaded;
	NSString* _title;
	unsigned _vkTrackId;
	unsigned _vkOwnerId;
	NSString* _runtimeUniqueId;
	unsigned _duration;
	NSString* _durationString;
	NSString* _artist;
	NSString* _artistId;
	NSString* _albumId;
	unsigned _albumTrackNumber;
	NSString* _albumName;
	unsigned _umaReleaseId;
	NSString* _trackId;
	NSString* _favoriteId;
	NSNumber* _offset;
	unsigned _state;
	unsigned _lyricsId;
	NSString* _lyricsText;
}
@property(readonly, assign, nonatomic) BOOL isRealyDownloaded;
@property(readonly, assign, nonatomic) BOOL isReadyToDownloading;
@property(readonly, assign, nonatomic) BOOL isNoURL;
@property(readonly, assign, nonatomic) BOOL isUnpublished;
@property(assign, nonatomic) BOOL isInMyAudio;
@property(assign, nonatomic) unsigned state;
@property(assign, nonatomic) BOOL isCachingAvailable;
@property(retain, nonatomic) NSString* favoriteId;
@property(retain, nonatomic) NSString* trackId;
@property(assign, nonatomic) unsigned vkOwnerId;
@property(assign, nonatomic) unsigned vkTrackId;
@property(retain, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) BOOL isAvailbaleForShuffle;
@property(readonly, assign, nonatomic) BOOL canBeSavedOnDisk;
@property(readonly, assign, nonatomic) BOOL isInTrackList;
@property(readonly, assign, nonatomic) VK_TrackModel* trackState;
@property(readonly, assign, nonatomic) VK_TrackModel* favoriteTrack;
-(BOOL)isRealyDownloaded;
-(BOOL)isReadyToDownloading;
-(BOOL)isNoURL;
-(BOOL)isFavoriteTrack; 	
-(BOOL)isUnpublished;
@end

%hook VK_App
-(NSString*) apiBaseURL
{
	// NSString* res = %orig;
	// return @"http://192.168.0.104";
	return @"http://api.um-agency.com";
}

// MSHookIvar<int>(self, "m_proxyPort") = 23;

%end

%hook VK_TrackStateView

-(void) actionButtonPressed
{
	// %log(self.track)
	// %log(@"PRESSED!!!!!");
	// MYSONG = self.track;
	// self.trackAddToFavoriteBlock = ^{ %log(@"BLOOOOOCK!!!!");};
	%orig;
}

-(VK_TrackModel*) track
{
	VK_TrackModel* res = %orig;
	%log(res);
	// %log(res.isFavoriteTrack ? @"YES" : @"NO");
	// res.isFavoriteTrack = YES;
	return res;
}

%end


%hook VK_TracksManager

-(NSMutableArray*) favoriteTracks
{
	NSMutableArray* res = %orig;
	%log(res);
	return res;
}

%end
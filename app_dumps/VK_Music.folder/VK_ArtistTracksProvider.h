/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_TracksProviderBase.h"
#import "VK_Music-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VK_ArtistTracksProvider : VK_TracksProviderBase {
	NSString* _artistId;
}
@property(readonly, assign, nonatomic) NSString* artistId;
-(void).cxx_destruct;
-(id)createTrackListProviderFromTrack:(id)track;
-(id)internalGetDataFromRequest:(id)request andRef:(id*)ref;
-(id)internalCreatePagedRequest;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithArtistId:(id)artistId;
@end

/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AlbumPhotoFeedContext.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MessagesAttachmentsPhotoContext : AlbumPhotoFeedContext {
	NSString* _nextFrom;
}
@property(retain, nonatomic) NSString* nextFrom;
-(void).cxx_destruct;
-(id)parsePhotosData:(id)data;
-(void)addPhotos:(id)photos withData:(id)data;
-(id)codeForNextPage;
-(void)spawnCopy:(id)copy;
@end


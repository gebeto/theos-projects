/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class VKPhotoAlbum, AlbumPhotoFeedContext;

__attribute__((visibility("hidden")))
@interface VKPhotoAlbumRow : VKRenderable {
	VKPhotoAlbum* _album;
	AlbumPhotoFeedContext* _context;
	float _offset;
}
@property(assign, nonatomic) float offset;
@property(retain, nonatomic) AlbumPhotoFeedContext* context;
@property(retain, nonatomic) VKPhotoAlbum* album;
+(id)album:(id)album;
-(void).cxx_destruct;
-(Class)cellClass;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VKVideoAlbum, VideoAlbumsInfo;

__attribute__((visibility("hidden")))
@interface VideoAlbumContext : XXUnknownSuperclass {
	BOOL _showAlbumsInfo;
	BOOL _canUploadVideo;
	BOOL _disableVideoUpload;
	VKVideoAlbum* _album;
	VideoAlbumsInfo* _albumsInfo;
}
@property(assign, nonatomic) BOOL disableVideoUpload;
@property(assign, nonatomic) BOOL canUploadVideo;
@property(assign, nonatomic) BOOL showAlbumsInfo;
@property(retain, nonatomic) VideoAlbumsInfo* albumsInfo;
@property(retain, nonatomic) VKVideoAlbum* album;
+(id)contextWithAlbum:(id)album showAlbumsInfo:(BOOL)info loadedInfo:(id)info3;
+(id)contextWithAlbum:(id)album showAlbumsInfo:(BOOL)info;
+(id)contextWithAlbum:(id)album;
-(void).cxx_destruct;
-(id)setupPrimaryIfOwner:(id)owner;
-(id)contextWithAlbum:(id)album;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IGLTexture.h"
#import "VKClient-Structs.h"
#import "IGLResource.h"

@class NSString;

@interface IGLTextureFast : IGLResource <IGLTexture> {
	CGSize size;
	CVOpenGLESTextureCacheRef cache;
	CVBufferRef pixelBuffer;
	CVBufferRef texture;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(BOOL)supported;
-(void)unload;
-(void)readImage:(id)image;
-(void)loadWithSize:(CGSize)size;
-(CGSize)size;
-(unsigned)texture;
@end


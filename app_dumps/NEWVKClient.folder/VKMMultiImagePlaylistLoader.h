/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMMultiLoader.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface VKMMultiImagePlaylistLoader : VKMMultiLoader {
	float _size;
	float _cornerRadius;
	UIColor* _overlayColor;
}
@property(retain, nonatomic) UIColor* overlayColor;
@property(assign, nonatomic) float cornerRadius;
@property(assign, nonatomic) float size;
-(void).cxx_destruct;
-(void)multiImage:(id)image handler:(id)handler;
-(id)multiImageUrlsKey:(id)key;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RendererStrategy : XXUnknownSuperclass {
	NSMutableDictionary* _renderers;
}
-(id)renderObject:(id)object;
-(void)registerRender:(Class)render block:(id)block;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface RendererElement : XXUnknownSuperclass {
	CGRect frame;
	id _setup;
	id _reuse;
	id _drop;
	id _layout;
	id _render;
	id _data;
}
@property(copy, nonatomic) id data;
@property(copy, nonatomic) id render;
@property(copy, nonatomic) id layout;
@property(copy, nonatomic) id drop;
@property(copy, nonatomic) id reuse;
@property(copy, nonatomic) id setup;
+(id)element:(CGRect)element;
-(id)withReuse:(id)reuse;
-(id)withFrame:(CGRect)frame;
-(id)withRender:(id)render;
-(id)withLayout:(id)layout;
-(id)withData:(id)data;
-(id)withSetup:(id)setup;
-(void)dealloc;
-(id)init;
@end


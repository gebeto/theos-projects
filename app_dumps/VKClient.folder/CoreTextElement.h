/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "RendererElement.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CoreTextElement : RendererElement {
	int lines;
	unsigned char textAlignment;
	NSDictionary* _attributes;
}
@property(retain, nonatomic) NSDictionary* attributes;
+(id)labelFont:(id)font color:(id)color bg:(id)bg lines:(int)lines textAlignment:(unsigned char)alignment;
+(id)labelFont:(id)font color:(id)color bg:(id)bg lines:(int)lines;
-(id)limitLines;
-(id)limitHeight:(float)height;
-(id)limitLength:(int)length preview:(int)preview;
-(void)dealloc;
@end


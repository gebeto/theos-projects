/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface AnimatedGifFrame : XXUnknownSuperclass {
	NSData* _header;
	NSData* _data;
	int _disposalMethod;
	int _frameNumber;
	double _delay;
	CGRect _area;
}
@property(assign, nonatomic) CGRect area;
@property(assign, nonatomic) int frameNumber;
@property(assign, nonatomic) int disposalMethod;
@property(assign, nonatomic) double delay;
@property(copy, nonatomic) NSData* data;
@property(copy, nonatomic) NSData* header;
-(void).cxx_destruct;
-(void)dealloc;
@end


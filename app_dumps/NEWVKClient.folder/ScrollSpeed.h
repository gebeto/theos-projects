/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"


__attribute__((visibility("hidden")))
@interface ScrollSpeed : XXUnknownSuperclass {
	CGPoint lastOffset;
	CGPoint lastOffsetDiff;
	double lastOffsetCapture;
	float _speed;
}
@property(readonly, assign, nonatomic) float speed;
-(double)reuseIntervalInScroll:(id)scroll;
-(void)scrolled:(id)scrolled;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class NSString;

@interface MTRGInstreamAdBanner : XXUnknownSuperclass {
	BOOL _allowClose;
	NSString* _ctaText;
	double _duration;
	double _allowCloseDelay;
	CGSize _size;
}
@property(copy, nonatomic) NSString* ctaText;
@property(assign, nonatomic) CGSize size;
@property(assign, nonatomic) double allowCloseDelay;
@property(assign, nonatomic) BOOL allowClose;
@property(assign, nonatomic) double duration;
-(void).cxx_destruct;
-(id)init;
@end


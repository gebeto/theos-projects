/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface AppScreenshot : XXUnknownSuperclass {
	NSNumber* _ID;
	NSString* _URL;
	CGSize _size;
}
@property(readonly, assign, nonatomic) CGSize size;
@property(readonly, copy, nonatomic) NSString* URL;
@property(readonly, retain, nonatomic) NSNumber* ID;
+(id)screenshotWithPhoto:(id)photo;
-(void).cxx_destruct;
-(id)initWithPhoto:(id)photo;
@end


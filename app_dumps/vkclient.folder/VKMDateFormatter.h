/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VKMDateFormatterImpl;

__attribute__((visibility("hidden")))
@interface VKMDateFormatter : XXUnknownSuperclass {
	VKMDateFormatterImpl* _impl;
}
@property(retain, nonatomic) VKMDateFormatterImpl* impl;
+(id)sharedFormatter;
-(void)reset;
-(void)localeChange:(id)change;
-(void)timeChange:(id)change;
-(void)dealloc;
-(id)init;
@end

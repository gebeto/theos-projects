/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface StatContext : XXUnknownSuperclass {
	NSString* _statName;
}
@property(copy, nonatomic) NSString* statName;
+(id)contextWithStatName:(id)statName;
-(void).cxx_destruct;
-(id)statsEventWithAction:(id)action;
-(id)statsEventWithParams:(id)params;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AudioStats.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface AudioStatsGroup : XXUnknownSuperclass <AudioStats> {
	NSArray* _stats;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) NSArray* stats;
+(id)stats:(id)stats;
-(void).cxx_destruct;
-(void)playAudio:(id)audio ref:(id)ref;
-(id)initWithStats:(id)stats;
@end


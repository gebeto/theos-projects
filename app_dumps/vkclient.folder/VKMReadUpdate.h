/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, NSArray;

__attribute__((visibility("hidden")))
@interface VKMReadUpdate : XXUnknownSuperclass {
	BOOL _incoming;
	NSNumber* _peer_id;
	NSNumber* _mid;
	NSArray* _messages;
}
@property(assign, nonatomic) BOOL incoming;
@property(retain, nonatomic) NSArray* messages;
@property(retain, nonatomic) NSNumber* mid;
@property(retain, nonatomic) NSNumber* peer_id;
+(id)update:(id)update;
-(void).cxx_destruct;
@end


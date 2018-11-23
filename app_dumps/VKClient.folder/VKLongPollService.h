/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperationQueue, VKClient, NSNumber, NSString;
@protocol VKLongPollServiceDelegate;

__attribute__((visibility("hidden")))
@interface VKLongPollService : XXUnknownSuperclass {
	int state;
	int tryNumber;
	BOOL _dropped;
	id<VKLongPollServiceDelegate> _delegate;
	VKClient* _client;
	NSOperationQueue* _pollQueue;
	NSString* _server;
	NSString* _key;
	NSNumber* _ts;
}
@property(assign, nonatomic) id<VKLongPollServiceDelegate> delegate;
@property(assign, nonatomic) BOOL dropped;
@property(retain, nonatomic) NSNumber* ts;
@property(retain, nonatomic) NSString* key;
@property(retain, nonatomic) NSString* server;
@property(readonly, retain, nonatomic) NSOperationQueue* pollQueue;
@property(readonly, retain, nonatomic) VKClient* client;
-(void)drop;
-(void)touch;
-(void)reach:(id)reach;
-(void)connect;
-(void)poll;
-(void)dropConnection;
-(void)becomeNotConnected;
-(void)cancelTimeout;
-(void)reconnectIfNeeded;
-(void)dealloc;
-(id)initWithClient:(id)client;
@end

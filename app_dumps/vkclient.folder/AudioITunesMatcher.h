/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperationQueue, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface AudioITunesMatcher : XXUnknownSuperclass {
	NSMutableDictionary* _matches;
	NSMutableSet* _pending;
	NSOperationQueue* _queue;
}
@property(readonly, retain, nonatomic) NSMutableSet* pending;
@property(readonly, retain, nonatomic) NSMutableDictionary* matches;
@property(readonly, retain, nonatomic) NSOperationQueue* queue;
+(BOOL)isNotification:(id)notification forAudioIdentity:(id)audioIdentity;
+(id)encodedSearchTermForAudio:(id)audio withTitle:(BOOL)title;
+(id)sharedMatcher;
-(void).cxx_destruct;
-(id)fullSizeCoverUrl:(id)url;
-(void)openITunes:(id)tunes;
-(void)match:(id)match;
-(BOOL)untouched:(id)untouched;
-(id)init;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKSourceStatus.h"
#import "VKRenderable.h"

@class NSNumber, NSString;
@protocol VKSource;

__attribute__((visibility("hidden")))
@interface VKFeed : VKRenderable <VKSourceStatus> {
	NSNumber* _source_id;
	unsigned _date;
	int _max_photos;
	id<VKSource> _source;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) id<VKSource> source;
@property(assign, nonatomic) int max_photos;
@property(assign, nonatomic) unsigned date;
@property(retain, nonatomic) NSNumber* source_id;
+(id)feed:(id)feed;
+(id)_feed:(id)feed sources:(id)sources;
+(id)feed:(id)feed sources:(id)sources;
-(void).cxx_destruct;
-(void)acceptSources:(id)sources;
-(int)statusMask;
-(id)statusForSource:(id)source;
@end


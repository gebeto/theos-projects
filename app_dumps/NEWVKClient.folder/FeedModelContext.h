/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModelContext.h"

@class NSMutableDictionary, FeedExtras, NSIndexPath, NSMutableSet;

__attribute__((visibility("hidden")))
@interface FeedModelContext : ListModelContext {
	BOOL _cache;
	BOOL _canIgnoreItems;
	id _from;
	NSIndexPath* _reloadPath;
	FeedExtras* _feedExtras;
	NSMutableDictionary* _sources;
	NSMutableDictionary* _videoPlayStats;
	NSMutableSet* _viewPosts;
}
@property(retain, nonatomic) NSMutableSet* viewPosts;
@property(retain, nonatomic) NSMutableDictionary* videoPlayStats;
@property(retain, nonatomic) NSMutableDictionary* sources;
@property(assign, nonatomic) BOOL canIgnoreItems;
@property(assign, nonatomic) BOOL cache;
@property(retain, nonatomic) FeedExtras* feedExtras;
@property(retain, nonatomic) NSIndexPath* reloadPath;
@property(retain, nonatomic) id from;
-(void).cxx_destruct;
-(void)addSources:(id)sources;
-(void)spawnCopy:(id)copy;
-(id)init;
@end


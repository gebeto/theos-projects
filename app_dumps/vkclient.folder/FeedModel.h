/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LoadingModel.h"

@class FeedModelContext;

__attribute__((visibility("hidden")))
@interface FeedModel : LoadingModel {
}
@property(retain, nonatomic) FeedModelContext* lastContext;
+(void)updateBuilder:(id)builder enumerateIdentityWithBlock:(id)block;
+(void)updateBuilder:(id)builder enumeratePost:(id)post withBlock:(id)block;
+(void)updateBuilder:(id)builder enumerateAdsWithBlock:(id)block;
+(void)updateBuilder:(id)builder enumeratePostsWithBlock:(id)block;
+(int)handlesSourcesBans;
-(void)viewed:(id)viewed;
-(BOOL)requireViewed;
-(void)statsViewFriendsRecommendation:(id)recommendation atIndexPath:(id)indexPath;
-(void)statsViewPost:(id)post atIndexPath:(id)indexPath;
-(void)statsViewAds:(id)ads atIndexPath:(id)indexPath;
-(void)statsLoadedAds:(id)ads;
-(id)feedStatContext;
-(void)handleFriend:(id)aFriend :(id)arg2;
-(void)handleGroup:(id)group :(id)arg2;
-(void)updateBuilder:(id)builder handleSubscribed:(BOOL)subscribed target:(id)target;
-(void)handleHideAdsBlock:(id)block :(id)arg2;
-(void)handleReportAds:(id)ads :(id)arg2;
-(void)handleHideAds:(id)ads :(id)arg2;
-(void)removeAds:(id)ads :(id)arg2;
-(void)handleHideFriendsRecommendations:(id)recommendations :(id)arg2;
-(void)handleToggleExpand:(id)expand :(id)arg2;
-(void)handlePhotoEdit:(id)edit :(id)arg2;
-(void)handlePollEdit:(id)edit :(id)arg2;
-(void)handlePollVote:(id)vote :(id)arg2;
-(void)handleDeleteComment:(id)comment :(id)arg2;
-(void)handleAddComment:(id)comment :(id)arg2;
-(void)handleRepost:(id)repost :(id)arg2;
-(void)handleLike:(id)like :(id)arg2;
-(void)handleDelete:(id)aDelete :(id)arg2;
-(void)handleRefresh:(id)refresh :(id)arg2;
-(void)updateBuilder:(id)builder updatePost:(id)post atIndexPath:(id)indexPath;
-(void)updateBuilder:(id)builder updatePost:(id)post atIndexPath:(id)indexPath withContext:(id)context;
-(void)updateBuilder:(id)builder refreshRowAtIndexPath:(id)indexPath withObject:(id)object;
-(void)updateBuilder:(id)builder refreshRowAtIndexPath:(id)indexPath;
-(void)updateBuilder:(id)builder reloadRowAtIndexPath:(id)indexPath;
-(void)updateBuilder:(id)builder reloadRowAtIndexPath:(id)indexPath withObject:(id)object;
-(void)registerForEvents:(id)events;
-(id)postTarget;
-(BOOL)shouldLoad:(id)load;
-(id)componentForObject:(id)object withContext:(id)context;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)updatedIndex:(id)index data:(id)data context:(id)context append:(BOOL)append;
-(id)prerenderContext;
-(id)prerenderContextForModelContext:(id)modelContext;
-(id)spawnContext:(id)context;
-(BOOL)feedModelComplete:(id)complete loaded:(int)loaded;
-(void)updateFeedContext:(id)context withData:(id)data;
-(id)nextFrom:(id)from data:(id)data count:(int)count;
-(id)renderFeedItem:(id)item context:(id)context statContext:(id)context3;
-(id)process:(id)process context:(id)context statContext:(id)context3;
-(id)itemsFromData:(id)data;
-(id)groupsFromData:(id)data;
-(id)usersFromData:(id)data;
-(id)requestForContext:(id)context;
-(id)feedRequestBuilderForContext:(id)context;
-(id)requestFrom:(id)from count:(int)count;
-(Class)renderContextClass;
@end


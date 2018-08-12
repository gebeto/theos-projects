/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NewsFeedModel.h"

@class MainNewsFeedModelDeferredUpdate, NSNumber, MainNewsFeedModelContext, NSDate;

__attribute__((visibility("hidden")))
@interface MainNewsFeedModel : NewsFeedModel {
	NSNumber* _unsynced;
	MainNewsFeedModelDeferredUpdate* _deferredUpdate;
	NSDate* _lastActivityDate;
	NSDate* _lastNotificationsSync;
}
@property(retain, nonatomic) NSDate* lastActivityDate;
@property(retain, nonatomic) MainNewsFeedModelDeferredUpdate* deferredUpdate;
@property(retain, nonatomic) NSNumber* unsynced;
@property(retain, nonatomic) MainNewsFeedModelContext* lastContext;
@property(retain, nonatomic) NSDate* lastNotificationsSync;
+(int)handlesSourcesBans;
+(id)newsFeedMethod;
-(void).cxx_destruct;
-(id)feedStatContext;
-(BOOL)canInsertPost:(id)post;
-(void)discovered:(id)discovered;
-(id)processNotificationsData:(id)data forIndex:(id)index context:(id)context;
-(void)checkFreshNewsWithContext:(id)context;
-(BOOL)shouldCheckFreshNews;
-(void)processActivateResult:(id)result oldIndex:(id)index context:(id)context;
-(void)handleAdd:(id)add :(id)arg2;
-(void)applyDeferredUpdate;
-(void)changeUnsynced:(int)unsynced;
-(void)addUnsyncedCount:(int)count;
-(id)componentForObject:(id)object withContext:(id)context;
-(void)changeIndex:(id)index withUpdate:(id)update;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(void)handleEnableTopNewsfeed:(id)newsfeed :(id)arg2;
-(void)hideAppNotification:(id)notification :(id)arg2;
-(void)registerForEvents:(id)events;
-(void)resetUnsynced;
-(void)resetWithContext:(id)context;
-(void)resetWithEmptyIndex:(BOOL)emptyIndex;
-(void)resetWithMode:(int)mode;
-(id)resetContext;
-(id)notificationsRequest;
-(id)feedRequestBuilderForContext:(id)context;
-(id)requestForContext:(id)context;
-(BOOL)isSameModel:(id)model;
-(id)spawnContext:(id)context;
-(BOOL)isEmpty;
@end


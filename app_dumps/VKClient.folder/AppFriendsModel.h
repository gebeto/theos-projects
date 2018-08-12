/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LoadingModel.h"

@class Index, NSNumber, NSArray;

__attribute__((visibility("hidden")))
@interface AppFriendsModel : LoadingModel {
	NSArray* _friendsSorted;
	Index* _friends;
	Index* _online;
	NSNumber* _appID;
}
@property(readonly, retain, nonatomic) NSNumber* appID;
@property(retain, nonatomic) Index* online;
@property(retain, nonatomic) Index* friends;
@property(copy, nonatomic) NSArray* friendsSorted;
+(id)modelForAppID:(id)appID withSession:(id)session;
-(void).cxx_destruct;
-(void)handleSendInvite:(id)invite builder:(id)builder;
-(void)handleFriend:(id)aFriend :(id)arg2;
-(void)removeUser:(id)user :(id)arg2;
-(void)addUser:(id)user :(id)arg2;
-(void)registerForEvents:(id)events;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestForContext:(id)context;
-(id)countKey;
-(id)usersToBeExcludedByID:(id)beExcludedByID;
@end


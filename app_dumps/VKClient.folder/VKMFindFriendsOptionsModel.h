/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModel.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface VKMFindFriendsOptionsModel : ListModel {
	int _introMask;
	NSArray* _findFriendsOptions;
}
@property(assign, nonatomic) int introMask;
@property(retain, nonatomic) NSArray* findFriendsOptions;
+(int)introStep;
-(void).cxx_destruct;
-(void)handleAddFriend:(id)aFriend :(id)arg2;
-(void)registerForEvents:(id)events;
-(id)countKey;
-(id)process:(id)process;
-(id)request:(int)request count:(int)count;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)indexWithUsers:(id)users;
-(id)initWithSession:(id)session;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKSelectorOptionViewController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VKFriendList, NSString;

__attribute__((visibility("hidden")))
@interface FriendsSelectorMenuItem : XXUnknownSuperclass <VKSelectorOptionViewController> {
	int _type;
	VKFriendList* _list;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) VKFriendList* list;
@property(readonly, assign, nonatomic) int type;
+(id)list:(id)list;
+(id)type:(int)type;
-(void).cxx_destruct;
-(id)icon;
-(id)title;
-(id)viewControllerWithMainModel:(id)mainModel;
-(id)initWithList:(id)list;
-(id)initWithType:(int)type;
@end


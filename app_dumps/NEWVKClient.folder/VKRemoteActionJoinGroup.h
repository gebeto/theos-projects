/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRemoteAction.h"
#import "VKRenderable.h"

@class NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface VKRemoteActionJoinGroup : VKRenderable <VKRemoteAction> {
	NSNumber* _groupId;
	NSString* _source;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* source;
@property(retain, nonatomic) NSNumber* groupId;
+(id)actionWithGroupId:(id)groupId;
-(void).cxx_destruct;
-(id)url;
-(void)runInContext:(id)context completion:(id)completion;
-(BOOL)process:(id)process context:(id)context;
-(id)initWithGroupId:(id)groupId;
-(int)remoteActionType;
@end


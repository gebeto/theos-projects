/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ModelActionUpdateAccountInfo : ModelAction {
	NSString* _name;
	id _value;
}
@property(readonly, retain, nonatomic) id value;
@property(readonly, retain, nonatomic) NSString* name;
+(id)name:(id)name value:(id)value;
+(int)domainType;
+(id)wallRepliesDisabled:(BOOL)disabled;
+(id)displayMyPosts:(BOOL)posts;
+(id)adminCommentsEnabled:(BOOL)enabled;
-(void).cxx_destruct;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(id)initWithName:(id)name value:(id)value;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMNavResolver.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface DispatchNavResolver : VKMNavResolver {
	NSMutableDictionary* _dispatch;
}
@property(retain, nonatomic) NSMutableDictionary* dispatch;
+(id)resolver;
-(BOOL)route:(id)route context:(id)context;
-(void)registerRoutes:(id)routes;
-(void)dealloc;
@end

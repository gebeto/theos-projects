/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKAPNSHandler.h"


__attribute__((visibility("hidden")))
@interface VKAPNSHandlerSdkRequest : VKAPNSHandler {
}
+(id)userNotificationCategory;
+(id)postNotificationName;
-(void)markRequestAsRead:(id)read withCompletion:(id)completion;
-(void)handleActionIdentifier:(id)identifier completionHandler:(id)handler;
-(void)notify;
-(id)appID;
-(int)typeOfPayload;
-(void)handle;
@end


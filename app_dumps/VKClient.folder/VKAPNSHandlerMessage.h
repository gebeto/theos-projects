/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKAPNSHandler.h"


__attribute__((visibility("hidden")))
@interface VKAPNSHandlerMessage : VKAPNSHandler {
}
+(id)muteIdentifier;
+(id)markIdentifier;
+(id)replyIdentifier;
+(id)userNotificationCategory;
-(void)handleActionIdentifier:(id)identifier responseInfo:(id)info completionHandler:(id)handler;
-(void)handleActionIdentifier:(id)identifier completionHandler:(id)handler;
-(void)notify;
-(void)handle;
@end


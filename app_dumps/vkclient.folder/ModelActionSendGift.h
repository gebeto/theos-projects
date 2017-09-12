/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class NSNumber, NSString, NSArray, VKGiftsCatalogItem;

__attribute__((visibility("hidden")))
@interface ModelActionSendGift : ModelAction {
	BOOL _isPrivate;
	NSArray* _receivedUsers;
	NSString* _message;
	NSNumber* _guid;
	NSArray* _users;
}
@property(retain, nonatomic) VKGiftsCatalogItem* target;
@property(assign, nonatomic) BOOL isPrivate;
@property(retain, nonatomic) NSArray* receivedUsers;
@property(copy, nonatomic) NSString* message;
@property(retain, nonatomic) NSArray* users;
@property(retain, nonatomic) NSNumber* guid;
+(int)domainType;
-(void).cxx_destruct;
-(BOOL)actionShowsFailureConfirmation;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(id)withPrivacy:(BOOL)privacy;
-(id)withMessage:(id)message;
-(id)withGuid:(id)guid;
-(id)withRecipientUsers:(id)recipientUsers;
@end


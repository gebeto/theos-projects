/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelUpdateHandler.h"
#import "StoreUpdateModel.h"

@class NSMutableDictionary, ActivityModel, UsersModel, NSString, NSMutableSet, DialogsListModel;

__attribute__((visibility("hidden")))
@interface MessagesModel : StoreUpdateModel <ModelUpdateHandler> {
	BOOL processingRead;
	DialogsListModel* _dialogs;
	UsersModel* _users;
	ActivityModel* _activity;
	NSMutableDictionary* _chats;
	NSMutableDictionary* _sending;
	NSMutableSet* _readQueue;
	NSMutableDictionary* _pendingEvents;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) ActivityModel* activity;
@property(readonly, retain, nonatomic) UsersModel* users;
@property(readonly, retain, nonatomic) DialogsListModel* dialogs;
@property(retain, nonatomic) NSMutableDictionary* pendingEvents;
@property(readonly, retain, nonatomic) NSMutableSet* readQueue;
@property(readonly, retain, nonatomic) NSMutableDictionary* sending;
@property(readonly, retain, nonatomic) NSMutableDictionary* chats;
-(void).cxx_destruct;
-(void)clearSendingForDialog:(id)dialog;
-(id)sendingForDialog:(id)dialog;
-(void)unregisterChatModel:(id)model;
-(void)registerChatModel:(id)model;
-(id)chatModelForDialog:(id)dialog;
-(void)markMessageRead:(id)read;
-(void)touchRead;
-(void)markMessageIdsAsRead:(id)read completion:(id)completion;
-(void)markDialogAsRead:(id)read untilMid:(id)mid completion:(id)completion;
-(void)loadDialog:(id)dialog;
-(void)process:(id)process;
-(void)notificationUserUpdated:(id)updated;
-(void)handleDeliveryErrorInDialog:(id)dialog;
-(void)handleIncomingMessages:(id)messages;
-(BOOL)messageReadyForNotification:(id)notification;
-(void)showNotification:(id)notification;
-(void)reloadMessagesNew:(id)aNew;
-(void)deleteMessages:(id)messages;
-(void)deleteDialog:(id)dialog;
-(void)reloadDialogs:(id)dialogs;
-(void)dealloc;
-(id)initWithSession:(id)session usersModel:(id)model;
@end


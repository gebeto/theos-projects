/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "MultiImageLoaderDelegate.h"
#import "ChatController.h"
#import "MessagesModelObserver.h"

@class VKMMultiLoader, VKDialog, NSString;

__attribute__((visibility("hidden")))
@interface MultiChatController : ChatController <MultiImageLoaderDelegate, MessagesModelObserver> {
	BOOL updated;
	BOOL imagePending;
	VKDialog* _dialog;
	VKMMultiLoader* _multiloader;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) VKMMultiLoader* multiloader;
@property(retain, nonatomic) VKDialog* dialog;
-(void).cxx_destruct;
-(void)modelUpdatedDialogsData:(id)data;
-(void)headerSelected;
-(void)notificationUserUpdated:(id)updated;
-(BOOL)isChatParticipant;
-(void)loadDialogImage;
-(void)chatRefreshTitle;
-(id)chatActivityComponent;
-(id)chatTitleText;
-(void)viewDidLoad;
-(void)multiImageLoader:(id)loader complete:(id)complete;
-(void)dealloc;
-(id)initWithMain:(id)main andDialog:(id)dialog caching:(BOOL)caching;
@end


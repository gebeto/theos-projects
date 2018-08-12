/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DomainEvent.h"
#import "Action.h"

@class NSString, VKHUD;

__attribute__((visibility("hidden")))
@interface ModelAction : Action <DomainEvent> {
	BOOL _disableHUD;
	BOOL _hudSuccessEmptyVisible;
	VKHUD* _weakHUD;
	int _completeRequestResult;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int completeRequestResult;
@property(assign, nonatomic) VKHUD* weakHUD;
@property(assign, nonatomic) BOOL hudSuccessEmptyVisible;
@property(assign, nonatomic) BOOL disableHUD;
+(int)domainType;
-(id)resultMessage;
-(void)fireInContext:(id)context;
-(void)runInContext:(id)context;
-(id)actionSuccessMessage:(id)message;
-(void)actionHandleResult:(id)result;
-(BOOL)actionShowsFailureConfirmation;
-(BOOL)actionShowsSuccessConfirmation;
-(id)actionQueueKey;
-(void)setupHud:(id)hud;
-(void)actionHandleSuccessForData:(id)data context:(id)context;
-(BOOL)actionResultForErrorResult:(int)errorResult;
-(int)actionResultForFailedRequestResult:(id)failedRequestResult;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(id)withHUD:(id)hud;
@end


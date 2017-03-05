/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VK_ValidationViewControllerDelegate.h"

@class NSMutableArray, NSString, VK_AuthTokenRequest;

__attribute__((visibility("hidden")))
@interface VK_ValidationManager : XXUnknownSuperclass <VK_ValidationViewControllerDelegate> {
	BOOL _needToUpdatePasskey;
	NSString* _accessToken;
	NSString* _passkey;
	NSMutableArray* _completionBlocks;
	VK_AuthTokenRequest* _authTokenRequest;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VK_AuthTokenRequest* authTokenRequest;
@property(copy, nonatomic) NSString* passkey;
@property(copy, nonatomic) NSString* accessToken;
@property(assign, nonatomic) BOOL needToUpdatePasskey;
@property(retain, nonatomic) NSMutableArray* completionBlocks;
+(id)shared;
-(void).cxx_destruct;
-(void)notifySubscribersWithCancellationFlag:(BOOL)cancellationFlag;
-(void)updatePasskey;
-(void)handleAccessToken:(id)token withCancellationFlag:(BOOL)cancellationFlag;
-(id)extractUrlFromResponse:(id)response;
-(void)validationViewController:(id)controller validationFinishedWithAccessToken:(id)accessToken;
-(void)validationViewControllerValidationCanceled:(id)canceled;
-(void)validateWithResponse:(id)response passkeyUpdate:(BOOL)update andCompletionBlock:(id)block;
@end

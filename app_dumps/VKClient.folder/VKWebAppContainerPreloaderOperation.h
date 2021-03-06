/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TimerTargetDelegate.h"
#import "AsyncOperation.h"
#import "VKWebAppScriptInitMessageDelegate.h"
#import "VKWebAppContainerControllerDelegate.h"

@class TimerTarget, NSString, VKWebAppContainerController;

__attribute__((visibility("hidden")))
@interface VKWebAppContainerPreloaderOperation : AsyncOperation <VKWebAppContainerControllerDelegate, VKWebAppScriptInitMessageDelegate, TimerTargetDelegate> {
	VKWebAppContainerController* _container;
	id _success;
	id _failure;
	TimerTarget* _timer;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) TimerTarget* timer;
@property(copy) id failure;
@property(copy) id success;
@property(retain, nonatomic) VKWebAppContainerController* container;
-(void).cxx_destruct;
-(void)cleanUp;
-(void)failed;
-(void)timerTargetFired:(id)fired;
-(void)didReceiveInitMessageHandler:(id)handler;
-(void)container:(id)container didFailWithError:(id)error;
-(void)runAsync;
-(void)dealloc;
-(id)initWithContainer:(id)container success:(id)success failure:(id)failure;
@end


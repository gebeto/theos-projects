/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class FlurryBackgroundTaskTracker, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FlurryDataSenderBase : XXUnknownSuperclass {
	NSMutableArray* _runningTasks;
	NSObject<OS_dispatch_queue>* _queue;
	FlurryBackgroundTaskTracker* _backgroundTaskTracker;
}
@property(retain, nonatomic) FlurryBackgroundTaskTracker* backgroundTaskTracker;
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* queue;
@property(retain, nonatomic) NSMutableArray* runningTasks;
-(void).cxx_destruct;
-(void)performRetransmitNotSentBlocks;
-(void)networkStatusChanged:(id)changed;
-(void)cancelTasks;
-(void)didCompleteAllTasks;
-(void)retransmitNotSentBlocks;
-(void)unregisterTask:(id)task completedSuccessfuly:(BOOL)successfuly;
-(void)registerNewTask:(id)task;
-(BOOL)hasOngoingTasksWindow;
-(void)dealloc;
-(id)initWithQueue:(id)queue backgroundTracker:(id)tracker;
-(id)initWithQueue:(id)queue;
-(id)init;
-(void)initialize;
@end

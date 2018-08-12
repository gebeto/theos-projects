/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MainModel, VKAudioQueuePlayer, NSDate;

__attribute__((visibility("hidden")))
@interface VKAudioBackgroundStreamingManager : XXUnknownSuperclass {
	BOOL _appInBackground;
	BOOL _pausedInBackground;
	MainModel* _weakMain;
	VKAudioQueuePlayer* _weakPlayer;
	id _observer;
	NSDate* _pausedInBackgroundTime;
}
@property(retain, nonatomic) NSDate* pausedInBackgroundTime;
@property(assign, nonatomic) BOOL pausedInBackground;
@property(assign, nonatomic) BOOL appInBackground;
@property(retain, nonatomic) id observer;
@property(assign, nonatomic) __weak VKAudioQueuePlayer* weakPlayer;
@property(assign, nonatomic) __weak MainModel* weakMain;
-(void).cxx_destruct;
-(void)dealloc;
-(void)applicationWillEnterForegroundNotification:(id)application;
-(void)applicationDidEnterBackgroundNotification:(id)application;
-(id)initWithMain:(id)main player:(id)player;
@end


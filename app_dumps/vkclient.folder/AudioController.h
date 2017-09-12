/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "VKMController.h"

@class UIButton, UISlider, AVPlayerItem, UILabel, AVPlayer, VKAudioQueuePlayer;

__attribute__((visibility("hidden")))
@interface AudioController : VKMController {
	BOOL _dragging;
	VKAudioQueuePlayer* _queuePlayer;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	id _observer;
	UILabel* _pos;
	UISlider* _seek;
	UILabel* _time;
	UILabel* _timeLeft;
	UIButton* _pp;
	UIButton* _prev;
	UIButton* _next;
	UILabel* _actor;
	UILabel* _song;
	UIButton* _shuffle;
	UIButton* _repeat;
	UIButton* _add;
	UIButton* _broadcast;
	UIButton* _turnOffAd;
}
@property(retain, nonatomic) VKAudioQueuePlayer* queuePlayer;
@property(assign, nonatomic) BOOL dragging;
@property(retain, nonatomic) UIButton* turnOffAd;
@property(retain, nonatomic) UIButton* broadcast;
@property(retain, nonatomic) UIButton* add;
@property(retain, nonatomic) UIButton* repeat;
@property(retain, nonatomic) UIButton* shuffle;
@property(retain, nonatomic) UILabel* song;
@property(retain, nonatomic) UILabel* actor;
@property(retain, nonatomic) UIButton* next;
@property(retain, nonatomic) UIButton* prev;
@property(retain, nonatomic) UIButton* pp;
@property(retain, nonatomic) UILabel* timeLeft;
@property(retain, nonatomic) UILabel* time;
@property(retain, nonatomic) UISlider* seek;
@property(retain, nonatomic) UILabel* pos;
@property(retain, nonatomic) id observer;
@property(retain) AVPlayerItem* playerItem;
@property(retain) AVPlayer* player;
+(id)audioNavigationForController:(id)controller;
+(id)alloc;
-(void).cxx_destruct;
-(void)playerChangedItem:(id)item;
-(void)playerUpdated:(id)updated;
-(void)actionBroadcast:(id)broadcast;
-(void)actionAdd:(id)add;
-(void)actionRepeat:(id)repeat;
-(void)actionShuffle:(id)shuffle;
-(void)actionPrev:(id)prev;
-(void)actionNext:(id)next;
-(void)actionPP:(id)pp;
-(void)seekMoved:(id)moved;
-(void)seekStopped:(id)stopped;
-(void)seekStarted:(id)started;
-(void)seeked:(id)seeked;
-(void)actionPlaylist:(id)playlist;
-(void)actionShowSubscriptionPromo:(id)promo;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(BOOL)VKMControllerCustomized;
-(void)done:(id)done;
-(void)updateBroadcast;
-(void)updateShuffle;
-(void)update;
-(void)updateSeek;
-(void)attach:(id)attach;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)dealloc;
-(id)initWithMain:(id)main andModel:(id)model;
@end


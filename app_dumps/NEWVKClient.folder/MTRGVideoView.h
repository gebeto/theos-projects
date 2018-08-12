/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AVURLAsset, NSURL, AVPlayerItem, MTRGVideoData, AVPlayer;
@protocol MTRGVideoViewDelegate;

@interface MTRGVideoView : XXUnknownSuperclass {
	AVURLAsset* _asset;
	BOOL _isFinishAssetLoading;
	MTRGVideoData* _videoData;
	NSURL* _videoUrl;
	double _duration;
	BOOL _playerItemDidReachEnd;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	BOOL _isStarted;
	BOOL _isPaused;
	BOOL _isMetaInfoReceived;
	BOOL _isWaitingTimerCallBack;
	double _lastActivityTime;
	double _currentPlaybackTime;
	double _maxLagTime;
	double _offsetFromStart;
	BOOL _isSuspense;
	BOOL _isTouchDown;
	BOOL _disableTimers;
	id<MTRGVideoViewDelegate> _delegate;
	float _volume;
}
@property(assign, nonatomic) float volume;
@property(readonly, assign, nonatomic) double currentPlaybackTime;
@property(assign, nonatomic) BOOL disableTimers;
@property(assign, nonatomic) __weak id<MTRGVideoViewDelegate> delegate;
+(Class)layerClass;
-(void).cxx_destruct;
-(void)dealloc;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)delegateOnAirPlayActiveChanged:(BOOL)changed;
-(void)delegateOnResumption;
-(void)delegateOnSuspense;
-(void)delegateOnStart;
-(void)delegateOnError:(id)error;
-(void)delegateOnClick;
-(void)delegateOnProgressWithTime:(double)time;
-(void)delegateOnComplete;
-(void)updateLagState:(BOOL)state;
-(void)checkVideoTimeLeftChanged;
-(void)startTimer;
-(void)timerIterationExecute;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)externalPlaybackActiveChanged:(BOOL)changed;
-(void)playerItemStatusChanged:(int)changed;
-(double)durationForPlayerItem:(id)playerItem;
-(void)playerItemDidReachEnd:(id)playerItem;
-(void)playerStart;
-(void)prepareToPlayAsset:(id)playAsset withKeys:(id)keys;
-(void)deletePlayer;
-(void)createPlayer;
-(void)deletePlayerItem;
-(void)createPlayerItemForAsset:(id)asset;
-(void)loadAssetWithUrl:(id)url;
-(void)finishedWithError:(id)error;
-(void)finishedSuccess;
-(void)resume;
-(void)pause;
-(void)stop;
-(void)updatePlayerSound;
-(void)startWithUrl:(id)url options:(id)options;
-(void)clearValues;
-(void)baseInit;
-(id)init;
-(void)setVideoFillMode:(id)mode;
-(void)setPlayer:(id)player;
-(id)player;
@end


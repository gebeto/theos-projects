/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MPVolumeView, AVAudioSession;

__attribute__((visibility("hidden")))
@interface JPSVolumeButtonHandler : XXUnknownSuperclass {
	BOOL _appIsActive;
	id _upBlock;
	id _downBlock;
	float _initialVolume;
	AVAudioSession* _session;
	MPVolumeView* _volumeView;
}
@property(copy, nonatomic) id downBlock;
@property(copy, nonatomic) id upBlock;
@property(assign, nonatomic) BOOL appIsActive;
@property(retain, nonatomic) MPVolumeView* volumeView;
@property(retain, nonatomic) AVAudioSession* session;
@property(assign, nonatomic) float initialVolume;
+(id)volumeButtonHandlerWithUpBlock:(id)upBlock downBlock:(id)block;
-(void).cxx_destruct;
-(void)setSystemVolume:(float)volume;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)applicationDidChangeActive:(id)application;
-(void)setInitialVolume;
-(void)updateInitialVolumeWithDelay;
-(void)disableVolumeHUD;
-(void)audioSessionInterrupted:(id)interrupted;
-(void)setupSession;
-(void)dealloc;
-(id)init;
@end


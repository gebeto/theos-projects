/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VKAudioQueuePlayer;

__attribute__((visibility("hidden")))
@interface VMInteroperabilityManager : XXUnknownSuperclass {
	BOOL _musicPlayerWasPlayingBefore;
	VKAudioQueuePlayer* _musicPlayer;
}
@property(assign, nonatomic) BOOL musicPlayerWasPlayingBefore;
@property(retain, nonatomic) VKAudioQueuePlayer* musicPlayer;
-(void).cxx_destruct;
-(void)resumeExternal;
-(void)pauseExternal;
-(id)initWithMusicPlayer:(id)musicPlayer;
@end


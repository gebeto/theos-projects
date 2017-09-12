/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomainDerived.h"

@class VKAudio;

__attribute__((visibility("hidden")))
@interface VKAudioMinimized : VKDomainDerived {
	BOOL _showArtist;
	unsigned _trackNumber;
}
@property(assign, nonatomic) BOOL showArtist;
@property(assign, nonatomic) unsigned trackNumber;
@property(readonly, retain, nonatomic) VKAudio* domain;
+(id)from:(id)from trackNumber:(unsigned)number showArtist:(BOOL)artist;
-(Class)cellClass;
@end


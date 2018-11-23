/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelActionAdd.h"

@class VKAudioPlaylist;
@protocol VKSource;

__attribute__((visibility("hidden")))
@interface ModelActionAddAudioPlaylist : ModelActionAdd {
	id<VKSource> _source;
}
@property(retain, nonatomic) id<VKSource> source;
@property(retain, nonatomic) VKAudioPlaylist* added;
@property(retain, nonatomic) VKAudioPlaylist* target;
+(int)domainType;
-(void).cxx_destruct;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
@end

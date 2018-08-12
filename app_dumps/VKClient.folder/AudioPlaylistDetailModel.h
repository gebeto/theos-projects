/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModel.h"

@class AudioPlaylistDetailContext, VKIdentity, VKAudioPlaylist;
@protocol AudioPlaylistDetailModelDelegate;

__attribute__((visibility("hidden")))
@interface AudioPlaylistDetailModel : ListModel {
	BOOL _editing;
	VKIdentity* _playlistIden;
	id<AudioPlaylistDetailModelDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<AudioPlaylistDetailModelDelegate> delegate;
@property(retain, nonatomic) VKIdentity* playlistIden;
@property(retain, nonatomic) AudioPlaylistDetailContext* lastContext;
@property(readonly, retain, nonatomic) VKAudioPlaylist* playlist;
-(void).cxx_destruct;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)fillAudioActionsForBuilder:(id)builder item:(id)item;
-(void)fillActions:(id)actions;
-(void)didUpdatePlaylist;
-(void)didDeletePlaylist;
-(void)resetIndex;
-(void)handleUpdateAudioPlaylistCover:(id)cover :(id)arg2;
-(void)handleReorderAudio:(id)audio :(id)arg2;
-(void)handleRemoveAudioFromPlaylist:(id)playlist :(id)arg2;
-(void)handleAddAudiosToPlaylist:(id)playlist :(id)arg2;
-(void)handleEditAudioPlaylist:(id)playlist :(id)arg2;
-(void)handleDeleteAudioPlaylist:(id)playlist :(id)arg2;
-(void)handleFollowAudioPlaylist:(id)playlist :(id)arg2;
-(void)registerForEvents:(id)events;
-(int)resultForRequestResponse:(id)requestResponse;
-(id)buttonForEditingMode:(id)editingMode audioCount:(unsigned)count;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestForContext:(id)context;
-(id)process:(id)process;
-(int)totalDurationSecs;
-(id)countString;
-(id)countKey;
-(id)audiosToPlay;
-(id)source;
-(id)spawnContext:(id)context;
-(id)setupAudioPlaylistIden:(id)iden;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "StoryFeedPreviewAvatarCellViewModel.h"

@class StoryIdentity, StoriesModel, NSString;
@protocol VKSource;

__attribute__((visibility("hidden")))
@interface StoryFeedPreviewItem : XXUnknownSuperclass <StoryFeedPreviewAvatarCellViewModel> {
	BOOL _isMyStory;
	BOOL _seen;
	id<VKSource> _source;
	StoryIdentity* _storyIden;
	StoriesModel* _storiesModel;
}
@property(readonly, copy, nonatomic) NSString* avatarPhotoURL;
@property(readonly, copy, nonatomic) NSString* sourceName;
@property(readonly, assign, nonatomic) unsigned cellState;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) StoryIdentity* storyIden;
@property(readonly, assign, nonatomic) id<VKSource> source;
@property(assign, nonatomic, getter=isSeen) BOOL seen;
@property(assign, nonatomic) BOOL isMyStory;
@property(retain, nonatomic) StoriesModel* storiesModel;
-(void).cxx_destruct;
-(id)initWithStoryIdentity:(id)storyIdentity storiesModel:(id)model source:(id)source;
@end


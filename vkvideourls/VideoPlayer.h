@interface VKVideo
	//@property(retain, nonatomic) VKAdData* adData;
	@property(assign, nonatomic) int height;
	@property(assign, nonatomic) int width;
	@property(retain, nonatomic) NSNumber* can_comment;
	@property(retain, nonatomic) NSNumber* can_repost;
	@property(assign, nonatomic) BOOL added;
	@property(assign, nonatomic) int videoType;
	@property(retain, nonatomic) NSDictionary* files;
	@property(assign, nonatomic) BOOL repeat;
	@property(assign, nonatomic) BOOL is_private;
	@property(assign, nonatomic) BOOL no_comments;
	@property(assign, nonatomic) BOOL can_add;
	@property(assign, nonatomic) BOOL can_edit;
	@property(assign, nonatomic) int duration;
	@property(retain, nonatomic) NSString* title;
	@property(retain, nonatomic) NSMutableDictionary* variants;
@end

@interface MPMoviePlayerController
	@property(retain, nonatomic) NSURL* contentURL;
@end

@interface VideoPlayer
	@property(assign, nonatomic) int quality;
	@property(retain, nonatomic) VKVideo* video;
	@property(retain, nonatomic) NSString* link;
	@property(retain, nonatomic) UIButton* play;
	@property(retain, nonatomic) MPMoviePlayerController* mp;
@end


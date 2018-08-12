/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PhotoFeedContext.h"

@class VKFeedPhoto;

__attribute__((visibility("hidden")))
@interface NewsPhotoFeedContext : PhotoFeedContext {
	VKFeedPhoto* _feed;
}
@property(retain, nonatomic) VKFeedPhoto* feed;
+(id)contextWithFeedPhoto:(id)feedPhoto;
-(void).cxx_destruct;
-(BOOL)canContainPhotoIdentity:(id)identity;
-(id)codeForNextPage;
-(void)spawnCopy:(id)copy;
-(void)addPhotos:(id)photos;
@end


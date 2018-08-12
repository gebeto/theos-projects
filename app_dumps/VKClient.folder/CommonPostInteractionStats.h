/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FeedPostInteractionStats.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CommonStatsManager, VKAdData, VKIdentity, NSString;

__attribute__((visibility("hidden")))
@interface CommonPostInteractionStats : XXUnknownSuperclass <FeedPostInteractionStats> {
	VKIdentity* _post;
	VKAdData* _adData;
	CommonStatsManager* _statsManager;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) CommonStatsManager* statsManager;
@property(readonly, assign, nonatomic) VKAdData* adData;
@property(readonly, assign, nonatomic) VKIdentity* post;
+(BOOL)validTarget:(id)target;
+(id)post:(id)post adData:(id)data statsManager:(id)manager;
-(void).cxx_destruct;
-(void)tapLinkAttachment:(id)attachment ref:(id)ref;
-(void)tapSnippetButton:(id)button ref:(id)ref;
-(void)tapSnippet:(id)snippet ref:(id)ref;
-(void)openImage:(id)image ref:(id)ref;
-(void)playAudio:(id)audio ref:(id)ref;
-(void)action:(int)action context:(id)context;
-(id)initWithPost:(id)post adData:(id)data statsManager:(id)manager;
@end


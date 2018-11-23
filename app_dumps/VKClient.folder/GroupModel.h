/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DefaultProfileModel.h"

@class VKGroupProfile;

__attribute__((visibility("hidden")))
@interface GroupModel : DefaultProfileModel {
}
@property(retain, nonatomic) VKGroupProfile* item;
+(id)groupFromResponse:(id)response;
+(id)requestForGroupID:(id)groupID withExtraFields:(BOOL)extraFields withMarketProducts:(BOOL)marketProducts;
-(void)handleMessagesFromGroup:(id)group :(id)arg2;
-(void)handleSubscribeLiveVideo:(id)video :(id)arg2;
-(void)handlePushSourceSubscribe:(id)subscribe :(id)arg2;
-(void)handleFavorites:(id)favorites :(id)arg2;
-(void)handleGroup:(id)group :(id)arg2;
-(void)registerForEvents:(id)events;
-(id)profilePhotosContext;
-(void)fillGroupActions:(id)actions;
-(id)safeScreenName;
-(id)groupAction:(BOOL)action notSure:(BOOL)sure;
-(id)recreateProfileIndex:(id)index;
-(id)process:(id)process context:(id)context;
-(id)request;
-(id)ownerId;
@end

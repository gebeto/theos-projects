/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKAttachment.h"
#import "VKDomainDerived.h"

@class NSString, VKWallReply;

__attribute__((visibility("hidden")))
@interface VKWallReplyLink : VKDomainDerived <VKAttachment> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VKWallReply* domain;
-(id)attachmentButtonTitle;
-(id)attachmentIco;
-(id)attachmentImage;
-(id)attachmentStatus:(BOOL)status;
-(id)attachmentTitle;
-(id)attachmentPlaceholder;
-(Class)rendererClass;
@end


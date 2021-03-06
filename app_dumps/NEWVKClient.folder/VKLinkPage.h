/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"
#import "VKTextPage.h"

@class NSString, NSURL, VKLink;

__attribute__((visibility("hidden")))
@interface VKLinkPage : VKDomain <VKTextPage> {
	VKLink* _link;
	NSURL* _url;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSURL* url;
@property(retain, nonatomic) VKLink* link;
+(id)pageForLink:(id)link;
-(void).cxx_destruct;
-(id)URLForTextPage;
@end


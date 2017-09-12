/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class VKCity, NSNumber, VKUser, NSString;

__attribute__((visibility("hidden")))
@interface LookupContactVK : VKRenderable {
	BOOL _verified;
	BOOL _request_sent;
	BOOL _me;
	VKUser* _user;
	unsigned _common_count;
	NSString* _universityName;
	NSNumber* _graduation;
	VKCity* _city;
	VKCity* _country;
}
@property(assign, nonatomic, getter=isMe) BOOL me;
@property(retain, nonatomic) VKCity* country;
@property(retain, nonatomic) VKCity* city;
@property(copy, nonatomic) NSNumber* graduation;
@property(copy, nonatomic) NSString* universityName;
@property(assign, nonatomic) unsigned common_count;
@property(assign, nonatomic) BOOL request_sent;
@property(assign, nonatomic) BOOL verified;
@property(retain, nonatomic) VKUser* user;
-(void).cxx_destruct;
-(BOOL)process:(id)process context:(id)context;
-(Class)cellClass;
-(BOOL)isEqualIdentity:(id)identity;
-(id)description;
@end


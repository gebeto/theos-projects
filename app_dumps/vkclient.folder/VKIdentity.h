/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VKIdentity : XXUnknownSuperclass <NSCopying> {
	int _type;
	NSNumber* _oid;
	NSNumber* _iid;
	NSString* _access_key;
	NSString* _context;
	NSString* _track_code;
}
@property(retain, nonatomic) NSString* track_code;
@property(retain, nonatomic) NSString* context;
@property(retain, nonatomic) NSString* access_key;
@property(retain, nonatomic) NSNumber* iid;
@property(retain, nonatomic) NSNumber* oid;
@property(assign, nonatomic) int type;
+(id)parse:(id)parse withType:(int)type;
+(id)type:(int)type oid:(id)oid iid:(id)iid;
+(id)identityFromUrl:(id)url;
+(id)identityFromString:(id)string;
+(id)source:(id)source;
+(id)group:(id)group;
+(id)user:(id)user;
-(void).cxx_destruct;
-(BOOL)isOwner:(id)owner;
-(id)titleShort;
-(id)title;
-(BOOL)isEqualToIdentity:(id)identity;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqual:(id)equal;
-(id)description;
@end


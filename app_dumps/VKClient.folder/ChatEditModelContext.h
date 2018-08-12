/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelContext.h"

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface ChatEditModelContext : ModelContext {
	BOOL _admin;
	BOOL _inviter;
	BOOL _participant;
	BOOL _left;
	BOOL _kicked;
	NSSet* _uids;
	NSString* _title;
	NSString* _photo;
}
@property(retain, nonatomic) NSString* photo;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSSet* uids;
@property(assign, nonatomic) BOOL kicked;
@property(assign, nonatomic) BOOL left;
@property(assign, nonatomic) BOOL participant;
@property(assign, nonatomic) BOOL inviter;
@property(assign, nonatomic) BOOL admin;
-(void).cxx_destruct;
-(void)spawnCopy:(id)copy;
@end


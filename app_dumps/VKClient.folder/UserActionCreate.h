/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Action.h"

@class EditContext;

__attribute__((visibility("hidden")))
@interface UserActionCreate : Action {
	BOOL _animated;
	id _block;
	EditContext* _context;
}
@property(assign, nonatomic) BOOL animated;
@property(retain, nonatomic) EditContext* context;
@property(copy, nonatomic) id block;
+(id)identity:(id)identity context:(id)context animated:(BOOL)animated block:(id)block;
-(void).cxx_destruct;
-(void)runInContext:(id)context;
@end

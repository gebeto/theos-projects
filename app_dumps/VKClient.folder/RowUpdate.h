/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface RowUpdate : XXUnknownSuperclass {
	NSIndexPath* _path;
	id _object;
	int _animation;
}
@property(assign, nonatomic) int animation;
@property(retain, nonatomic) id object;
@property(retain, nonatomic) NSIndexPath* path;
+(id)row:(id)row object:(id)object animation:(int)animation;
-(void).cxx_destruct;
@end


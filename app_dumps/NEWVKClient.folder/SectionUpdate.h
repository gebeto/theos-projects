/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface SectionUpdate : XXUnknownSuperclass {
	unsigned _idx;
	NSArray* _objects;
	NSString* _title;
	NSString* _indexTitle;
	int _animation;
}
@property(assign, nonatomic) int animation;
@property(retain, nonatomic) NSString* indexTitle;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSArray* objects;
@property(assign, nonatomic) unsigned idx;
+(id)section:(unsigned)section objects:(id)objects title:(id)title indexTitle:(id)title4 animation:(int)animation;
-(void).cxx_destruct;
@end


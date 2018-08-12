/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKMention : XXUnknownSuperclass {
	NSString* _identifier;
	NSString* _name;
	NSRange _range;
}
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) NSString* identifier;
@property(readonly, assign, nonatomic) NSRange range;
+(id)linkMentionsInString:(id)string;
+(id)mentionsInString:(id)string;
+(id)mentionsInString:(id)string regexp:(id)regexp;
+(id)mentionWithName:(id)name identifier:(id)identifier characterRange:(NSRange)range;
-(void).cxx_destruct;
-(id)initWithName:(id)name identifier:(id)identifier characterRange:(NSRange)range;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSObject.h"
#import "VKRequestValue.h"

@class NSString;

@protocol VKRequestValue <NSObject>
-(id)code;
@end

__attribute__((visibility("hidden")))
@interface VKRequestValue : XXUnknownSuperclass <VKRequestValue> {
	id _value;
	int _type;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) int type;
@property(readonly, assign, nonatomic) id value;
+(id)array:(id)array;
+(id)expression:(id)expression;
+(id)string:(id)string;
+(id)boolean:(BOOL)boolean;
+(id)number:(id)number;
+(id)value:(id)value type:(int)type;
-(void).cxx_destruct;
-(id)code;
-(id)initWithValue:(id)value type:(int)type;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MOTextViewLimit.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MOTextViewPointLimit : XXUnknownSuperclass <MOTextViewLimit> {
	float _height;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) float height;
+(id)limitWithHeight:(float)height;
-(float)heightLimitForTextView:(id)textView;
@end


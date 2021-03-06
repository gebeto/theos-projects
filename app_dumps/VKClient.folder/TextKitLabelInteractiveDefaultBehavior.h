/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "TextKitLabelDelegate.h"

@class NSString;
@protocol TextKitLabelInteractiveDefaultBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface TextKitLabelInteractiveDefaultBehavior : XXUnknownSuperclass <TextKitLabelDelegate> {
	id<TextKitLabelInteractiveDefaultBehaviorDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<TextKitLabelInteractiveDefaultBehaviorDelegate> delegate;
-(void).cxx_destruct;
-(void)textKitLabel:(id)label didLongPressAttribute:(id)attribute;
-(BOOL)textKitLabel:(id)label shouldLongPressAttribute:(id)attribute;
-(void)textKitLabel:(id)label didSelectAttribute:(id)attribute;
-(BOOL)textKitLabel:(id)label shouldHighlightAttribute:(id)attribute;
-(BOOL)textKitLabel:(id)label shouldSelectAttribute:(id)attribute;
@end


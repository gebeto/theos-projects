/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ActionButtonProperties, NSString;
@protocol TapableComponentHandler;

__attribute__((visibility("hidden")))
@interface PriorityButtonComponentState : XXUnknownSuperclass {
	unsigned _priority;
	NSString* _title;
	id<TapableComponentHandler> _handler;
	ActionButtonProperties* _properties;
}
@property(readonly, assign, nonatomic) ActionButtonProperties* properties;
@property(readonly, assign, nonatomic) __weak id<TapableComponentHandler> handler;
@property(readonly, copy, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) unsigned priority;
+(id)stateWithPriority:(unsigned)priority title:(id)title handler:(id)handler;
-(void).cxx_destruct;
@end


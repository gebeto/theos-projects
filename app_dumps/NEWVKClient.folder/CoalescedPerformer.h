/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol CoalescedPerformerDelegate;

__attribute__((visibility("hidden")))
@interface CoalescedPerformer : XXUnknownSuperclass {
	double last;
	BOOL pending;
	id _block;
	id<CoalescedPerformerDelegate> _delegate;
	double _interval;
}
@property(assign, nonatomic) __weak id<CoalescedPerformerDelegate> delegate;
@property(copy, nonatomic) id block;
@property(assign, nonatomic) double interval;
-(void).cxx_destruct;
-(void)clear;
-(void)invalidate;
-(void)resetDelay;
-(void)performWithBlock:(id)block force:(BOOL)force;
-(void)perform:(BOOL)perform;
-(void)perform;
-(void)_perform:(id)perform;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TextComponentInteractiveController.h"
#import "PostBodyTextLabelBehaviorDelegate.h"

@class NSString, PostBodyTextComponent;

__attribute__((visibility("hidden")))
@interface PostBodyTextComponentController : TextComponentInteractiveController <PostBodyTextLabelBehaviorDelegate> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) PostBodyTextComponent* component;
-(void)postBodyTextlabelBehavior:(id)behavior didRouteUrl:(id)url;
-(id)postIdentityForInteractiveLabelBehavior:(id)interactiveLabelBehavior;
-(id)initWithView:(id)view context:(id)context;
@end


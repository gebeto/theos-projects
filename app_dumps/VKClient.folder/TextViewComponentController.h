/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextViewDelegate.h"
#import "VKClient-Structs.h"
#import "Component5Controller.h"

@class UITextView, TextViewComponent, NSString;

__attribute__((visibility("hidden")))
@interface TextViewComponentController : Component5Controller <UITextViewDelegate> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) TextViewComponent* component;
@property(readonly, assign, nonatomic) __weak UITextView* view;
+(id)createView;
-(void)setNode:(id)node;
-(id)initWithView:(id)view context:(id)context;
@end

/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKSelectorDelegate.h"
#import "VKMViewControllerContainer.h"

@class VKSelector, NSString;

__attribute__((visibility("hidden")))
@interface VKSelectorContainerController : VKMViewControllerContainer <VKSelectorDelegate> {
	VKSelector* _vkSelector;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)main:(id)main selector:(id)selector;
-(void).cxx_destruct;
-(void)selectorDidChangeOptions:(id)selector;
-(void)selector:(id)selector didSelectOption:(id)option;
-(id)vkSelector;
-(id)viewControllerForOption:(id)option;
-(id)initWithMain:(id)main selector:(id)selector;
-(void)dealloc;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKSelectorContainerController.h"
#import "VKSelectorDropdownPresentationDelegate.h"

@class UIView, NSString, NavigationButtonView, UIViewController, VKSelectorDropdownPresentation;

__attribute__((visibility("hidden")))
@interface VKSelectorContainerControllerDropdown : VKSelectorContainerController <VKSelectorDropdownPresentationDelegate> {
	UIViewController* _selectorViewController;
	NavigationButtonView* _navigationButtonView;
	UIView* _dimView;
	VKSelectorDropdownPresentation* _vkSelectorPresentation;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VKSelectorDropdownPresentation* vkSelectorPresentation;
@property(retain, nonatomic) UIView* dimView;
@property(retain, nonatomic) NavigationButtonView* navigationButtonView;
@property(retain, nonatomic) UIViewController* selectorViewController;
-(void).cxx_destruct;
-(void)selectorDropdownPresentationDidDismiss:(id)selectorDropdownPresentation animated:(BOOL)animated;
-(void)selectorDropdownPresentationWillDismiss:(id)selectorDropdownPresentation animated:(BOOL)animated;
-(void)selectorDropdownPresentationDidPresent:(id)selectorDropdownPresentation animated:(BOOL)animated;
-(void)selectorDropdownPresentationWillPresent:(id)selectorDropdownPresentation animated:(BOOL)animated;
-(void)selectorDidChangeOptions:(id)selector;
-(void)selector:(id)selector didSelectOption:(id)option;
-(void)actionTitleButton:(id)button;
-(void)selectorToggle;
-(void)selectorDismissAnimated:(BOOL)animated;
-(void)setTitleArrowFlipped:(BOOL)flipped;
-(void)setTitle:(id)title;
-(void)viewWillAppear:(BOOL)view;
-(id)initWithMain:(id)main selector:(id)selector;
-(void)dealloc;
@end


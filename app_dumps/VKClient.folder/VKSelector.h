/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKSelector.h"
#import "NSObject.h"

@class UIView, NSObject, NSString;
@protocol VKSelectorOption, VKSelectorOptionsProvider, VKSelectorDelegate;

@protocol VKSelector <NSObject>
-(id)optionsProvider;
-(id)selectedOption;
@end

__attribute__((visibility("hidden")))
@interface VKSelector : XXUnknownSuperclass <VKSelector> {
	id<VKSelectorDelegate> _delegate;
	NSObject<VKSelectorOptionsProvider>* _optionsProvider;
	id<VKSelectorOption> _selectedOption;
	UIView* _view;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIView* view;
@property(retain, nonatomic) id<VKSelectorOption> selectedOption;
@property(retain, nonatomic) NSObject<VKSelectorOptionsProvider>* optionsProvider;
@property(assign, nonatomic) __weak id<VKSelectorDelegate> delegate;
-(void).cxx_destruct;
-(void)didSelectOption:(id)option;
-(BOOL)willSelectOption:(id)option;
-(void)didChangeOptions;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)updateSelectedOption:(id)option;
-(void)updateSelection;
-(void)reloadData;
-(void)loadView;
-(BOOL)isViewLoaded;
-(id)options;
-(id)initWithOptionsProvider:(id)optionsProvider;
-(void)dealloc;
@end


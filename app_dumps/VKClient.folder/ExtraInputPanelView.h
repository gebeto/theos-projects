/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "StickerSuggestionsViewDelegate.h"
#import "VKClient-Structs.h"
#import "ExtrasInputViewDelegate.h"
#import "InputPanelView.h"

@class UIButton, StickerSuggestionsView, NSString, ExtrasInputView;
@protocol ExtraInputPanelViewDelegate;

__attribute__((visibility("hidden")))
@interface ExtraInputPanelView : InputPanelView <ExtrasInputViewDelegate, StickerSuggestionsViewDelegate> {
	ExtrasInputView* _inputView;
	UIButton* _inputViewButton;
	StickerSuggestionsView* _stickerSuggestionsView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) StickerSuggestionsView* stickerSuggestionsView;
@property(assign, nonatomic) __weak id<ExtraInputPanelViewDelegate> inputPanelDelegate;
@property(retain, nonatomic) UIButton* inputViewButton;
@property(retain, nonatomic) ExtrasInputView* inputView;
-(void).cxx_destruct;
-(void)stickerSuggestionsView:(id)view didSelectSticker:(id)sticker referrerContext:(id)context promoted:(BOOL)promoted;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)inputPanelViewTextViewResignFirstResponder:(BOOL)responder;
-(void)inputPanelViewTextViewBecomeFirstResponder:(BOOL)responder;
-(void)updateStickerSuggestionsView:(BOOL)view animated:(BOOL)animated isAutocomplete:(BOOL)autocomplete;
-(void)ensureStickerSuggestionsView;
-(id)extrasInputViewStickersGiftContext:(id)context;
-(void)extrasInputViewDidChangeTab:(id)extrasInputView;
-(void)actionToggleEmoji:(id)emoji;
-(BOOL)isExtraInputVisible;
-(void)setExtraInputVisible:(BOOL)visible;
-(void)inputPanelViewTextViewAttemptToSend:(id)send;
-(void)inputPanelViewTextViewAttemptToBecomeFirstResponder:(id)becomeFirstResponder;
-(void)ensureInputView;
-(void)emojiSelectionView:(id)view didSelectEmoji:(id)emoji;
-(void)stickerSelectionView:(id)view didSelectSticker:(id)sticker referrerContext:(id)context;
-(BOOL)routeStickerProductId:(id)anId;
-(void)updateTextWithSelectedEmoji:(id)selectedEmoji;
-(void)updateOverlay;
-(void)updateInputViewButton;
-(void)inputEnable:(BOOL)enable;
-(CGRect)textPanelFrame;
-(void)dealloc;
-(void)createSubviews;
-(id)initForComments:(BOOL)comments;
@end


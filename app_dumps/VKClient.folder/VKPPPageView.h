/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextViewDelegate.h"
#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIScrollViewDelegate.h"

@class UITextView, AVPlayerLayer, VKPPProcessingOperation, VKPPModel, VKPPAssetImageView, UIImageView, NSString;

@interface VKPPPageView : XXUnknownSuperclass <UITextViewDelegate, UIScrollViewDelegate> {
	BOOL skipScroll;
	float keyboardInset;
	BOOL _started;
	BOOL _seekToZeroBeforePlay;
	VKPPModel* _model;
	VKPPAssetImageView* _assetView;
	float _bottomInset;
	UITextView* _textView;
	UIImageView* _textShadow;
	VKPPProcessingOperation* _operation;
	AVPlayerLayer* _playerLayer;
	UIImageView* _playIcon;
	int _currentRequest;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) float bottomInset;
@property(readonly, retain, nonatomic) VKPPAssetImageView* assetView;
@property(readonly, retain, nonatomic) VKPPModel* model;
@property(assign, nonatomic) int currentRequest;
@property(retain, nonatomic) UIImageView* playIcon;
@property(retain, nonatomic) AVPlayerLayer* playerLayer;
@property(assign, nonatomic) BOOL seekToZeroBeforePlay;
@property(assign, nonatomic) BOOL started;
@property(retain, nonatomic) VKPPProcessingOperation* operation;
@property(retain, nonatomic) UIImageView* textShadow;
@property(retain, nonatomic) UITextView* textView;
-(void)notificationTargetEdit:(id)edit;
-(void)playerItemDidReachEnd:(id)playerItem;
-(void)actionTap:(id)tap;
-(void)textViewDidChange:(id)textView;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textViewDidEndEditing:(id)textView;
-(BOOL)textViewShouldBeginEditing:(id)textView;
-(void)handleScroll:(BOOL)scroll;
-(void)updateScrollInset:(BOOL)inset;
-(void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;
-(void)activateText;
-(void)alignText;
-(void)updateTextForBounds;
-(void)updateText:(id)text force:(BOOL)force;
-(id)viewForZoomingInScrollView:(id)scrollView;
-(void)preservingMinZoom:(id)zoom;
-(void)alignScrollView;
-(void)scrollViewDidZoom:(id)scrollView;
-(void)alignImage;
-(void)renderImage:(id)image animated:(BOOL)animated;
-(void)resetZoom;
-(void)loadFullWithPriority:(int)priority;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)handlePlay;
-(void)hidePlayIcon;
-(void)showPlayIcon;
-(void)attachAsset:(id)asset;
-(void)attachAsset:(id)asset forced:(BOOL)forced;
-(void)cleanVideoLayer;
-(void)appear;
-(void)dissappear;
-(void)cancel;
-(void)dealloc;
-(id)initWithModel:(id)model;
@end


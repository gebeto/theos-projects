/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIPopoverPresentationControllerDelegate.h"
#import "SketchDrawViewDelegate.h"
#import "SketchPreviewControllerDelegate.h"
#import "SketchBrushViewControllerDelegate.h"

@class UIButton, SketchDrawView, NSString, NSArray;
@protocol SketchViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SketchViewController : XXUnknownSuperclass <UIPopoverPresentationControllerDelegate, SketchBrushViewControllerDelegate, SketchDrawViewDelegate, SketchPreviewControllerDelegate> {
	id<SketchViewControllerDelegate> _delegate;
	SketchDrawView* _drawView;
	NSArray* _paletteButtons;
	int _lastInterfaceOrientation;
	NSArray* _rotatingViews;
	UIButton* _sendButton;
	UIButton* _undoButton;
	UIButton* _eraserButton;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<SketchViewControllerDelegate> delegate;
@property(retain, nonatomic) UIButton* eraserButton;
@property(retain, nonatomic) UIButton* undoButton;
@property(retain, nonatomic) UIButton* sendButton;
@property(retain, nonatomic) NSArray* rotatingViews;
@property(assign, nonatomic) int lastInterfaceOrientation;
@property(retain, nonatomic) NSArray* paletteButtons;
@property(retain, nonatomic) SketchDrawView* drawView;
-(void).cxx_destruct;
-(void)undoLongPress:(id)press;
-(void)undoButtonAction;
-(void)sketchPreviewController:(id)controller confirmSendingImage:(id)image;
-(void)sendButtonAction;
-(void)cancelButtonAction;
-(void)paletteButtonAction:(id)action;
-(void)eraserButtonAction:(id)action;
-(void)brushButtonAction:(id)action;
-(int)adaptivePresentationStyleForPresentationController:(id)presentationController;
-(int)adaptivePresentationStyleForPresentationController:(id)presentationController traitCollection:(id)collection;
-(void)updateSendUndoEraserButtons;
-(void)sketchDrawViewDidClearAll:(id)sketchDrawView;
-(void)sketchDrawViewDidUndo:(id)sketchDrawView;
-(void)sketchDrawViewDidDraw:(id)sketchDrawView;
-(void)sketchBrushControllerDidEndChangingColor:(id)sketchBrushController;
-(void)sketchBrushController:(id)controller changeColor:(id)color;
-(void)sketchBrushController:(id)controller changeBrush:(float)brush;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)updateOrientationIfCan;
-(void)deviceOrientationDidChange;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)prefersStatusBarHidden;
@end


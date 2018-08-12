/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MBProgressHUD.h"
#import "VKClient-Structs.h"
#import "MBProgressHUDDelegate.h"
#import "RoundedProgressOverlayViewDelegate.h"

@class NSMutableDictionary, UITapGestureRecognizer, NSOperation, NSString;

__attribute__((visibility("hidden")))
@interface VKHUD : MBProgressHUD <RoundedProgressOverlayViewDelegate, MBProgressHUDDelegate> {
	BOOL _disableLayoutUpdatesForKeyboard;
	BOOL _willHide;
	NSOperation* _op;
	id _cancelHandler;
	NSMutableDictionary* _errors;
	NSString* _any;
	UITapGestureRecognizer* _closeGesture;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL willHide;
@property(assign, nonatomic) BOOL disableLayoutUpdatesForKeyboard;
@property(copy, nonatomic) id cancelHandler;
@property(retain, nonatomic) NSOperation* op;
@property(retain, nonatomic) UITapGestureRecognizer* closeGesture;
@property(retain, nonatomic) NSString* any;
@property(readonly, retain, nonatomic) NSMutableDictionary* errors;
+(id)hudForDialogModification:(BOOL)dialogModification;
+(void)runInBackgroundWithHUD:(id)hud;
+(void)API;
+(void)NYI;
+(void)success:(id)success;
+(void)info:(id)info;
+(void)error:(id)error;
+(void)closeAll;
+(id)hud;
+(id)hudForWindow:(id)window;
-(void).cxx_destruct;
-(void)showCancelButtonAnimated:(BOOL)animated;
-(void)showCancelButton;
-(void)cleanupCancelDelayDelay;
-(void)progressViewDidCancel:(id)progressView;
-(void)showForOperation:(id)operation;
-(void)with:(id)with run:(id)run;
-(id)any:(id)any;
-(id)on:(int)on label:(id)label;
-(void)hideWithResult:(BOOL)result message:(id)message;
-(void)hideWithResult:(BOOL)result;
-(void)hideWithErrorResult:(int)errorResult;
-(void)hideWithInfo:(id)info;
-(void)hideWithSuccess:(id)success forceVisible:(BOOL)visible;
-(void)hideWithSuccess:(id)success;
-(void)hideWithSuccess:(id)success delay:(float)delay;
-(void)hideWithSuccess;
-(void)hideWithTitle:(id)title;
-(void)hideWithError:(id)error;
-(void)setCustomView:(id)view;
-(void)hide:(BOOL)hide afterDelay:(double)delay;
-(void)hudWasHidden:(id)hidden;
-(void)actionClose:(id)close;
-(void)HUDkeyboardNotification:(id)notification;
-(void)updateFrame:(id)frame;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end


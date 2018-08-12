/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "ExtraInputPanelView.h"
#import "VMRecordingDelegate.h"
#import "VMRaiseToRecordActivatorDelegate.h"
#import "VMPushToTalkDelegate.h"

@class VMRecording, VMVoiceMessagePlayer, UIButton, VMPushToTalkController, UILabel, UIView, NSString, VMPushToTalkPreviewView, VMSessionManager, UIViewController, VMRaiseToRecordActivator, UIWindow;
@protocol RecordPanelDelegate;

__attribute__((visibility("hidden")))
@interface RecordExtraInputPanelView : ExtraInputPanelView <VMPushToTalkDelegate, VMRaiseToRecordActivatorDelegate, VMRecordingDelegate> {
	BOOL _pushToTalkHintAnimationInProcess;
	id<RecordPanelDelegate> _recordPanelDelegate;
	UIViewController* _presentingController;
	UIButton* _record;
	UIView* _pushToTalkCoverView;
	UILabel* _pushToTalkHintLabel;
	UIWindow* _pushToTalkWindow;
	VMPushToTalkController* _pushToTalkController;
	VMVoiceMessagePlayer* _voiceMessagePlayer;
	VMSessionManager* _VMSessionManager;
	VMRaiseToRecordActivator* _raiseToRecordActivator;
	VMRecording* _recording;
	VMPushToTalkPreviewView* _previewView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak UIViewController* presentingController;
@property(assign, nonatomic) __weak id<RecordPanelDelegate> recordPanelDelegate;
@property(retain, nonatomic) VMPushToTalkPreviewView* previewView;
@property(retain, nonatomic) VMRecording* recording;
@property(retain, nonatomic) VMRaiseToRecordActivator* raiseToRecordActivator;
@property(retain, nonatomic) VMSessionManager* VMSessionManager;
@property(retain, nonatomic) VMVoiceMessagePlayer* voiceMessagePlayer;
@property(retain, nonatomic) VMPushToTalkController* pushToTalkController;
@property(retain, nonatomic) UIWindow* pushToTalkWindow;
@property(assign, nonatomic) BOOL pushToTalkHintAnimationInProcess;
@property(retain, nonatomic) UILabel* pushToTalkHintLabel;
@property(retain, nonatomic) UIView* pushToTalkCoverView;
@property(retain, nonatomic) UIButton* record;
-(void).cxx_destruct;
-(void)model:(id)model willStartLoadingWithContext:(id)context;
-(void)modelLoadingChanged:(id)changed;
-(void)model:(id)model updated:(id)updated;
-(BOOL)shouldRaiseToRecordRecognizeAttemptAtThisTime:(id)thisTime;
-(void)raiseToRecordActivatorDidRecognizedAttempt:(id)raiseToRecordActivator;
-(void)updateShouldListenEarRecordingAttempts:(BOOL)update;
-(void)cleanPushToTalk;
-(void)hidePreview;
-(void)actionPreviewCancel:(id)cancel;
-(void)actionPreviewSend:(id)send;
-(void)stopRecordingAndPreview;
-(void)pushToTalkControllerActionBlankTap:(id)talkControllerActionBlankTap;
-(void)pushToTalkControllerActionCancel:(id)talkControllerActionCancel;
-(void)pushToTalkControllerActionSend:(id)talkControllerActionSend;
-(void)recording:(id)recording updateVolume:(float)volume time:(double)time;
-(void)recordingGetInterruptedOrExceededLimitOrGettingAwayFromEar:(id)ear;
-(void)startRecordingIsFromRiseToRecord:(BOOL)record;
-(void)showPushToTalk;
-(void)showRecorderPermissionInfoAlert;
-(void)recordLongPress:(id)press;
-(void)animateHint;
-(void)recordPressed:(id)pressed;
-(BOOL)isPushToTalkActive;
-(void)showTextInput;
-(void)hideTextInput;
-(void)updateEmpty:(BOOL)empty;
-(id)initForComments:(BOOL)comments voiceMessagePlayer:(id)player VMSessionManager:(id)manager;
-(void)dealloc;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class VMSessionManager, PreviewPlayerView, UIButton, VKOpusRecord;

__attribute__((visibility("hidden")))
@interface VMPushToTalkPreviewView : XXUnknownSuperclass {
	UIButton* _sendButton;
	UIButton* _cancelButton;
	VKOpusRecord* _opusRecord;
	PreviewPlayerView* _previewPlayerView;
}
@property(retain, nonatomic) VKOpusRecord* opusRecord;
@property(retain, nonatomic) VMSessionManager* VMSessionManager;
@property(retain, nonatomic) UIButton* cancelButton;
@property(retain, nonatomic) UIButton* sendButton;
@property(retain, nonatomic) PreviewPlayerView* previewPlayerView;
-(void).cxx_destruct;
-(void)stopIfNeeded;
-(id)initWithFrame:(CGRect)frame opusRecord:(id)record;
@end


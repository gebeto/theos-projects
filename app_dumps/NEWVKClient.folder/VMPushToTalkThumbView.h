/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class UIView, UIButton, UIImageView;

__attribute__((visibility("hidden")))
@interface VMPushToTalkThumbView : XXUnknownSuperclass {
	UIButton* _sendButton;
	UIView* _body;
	UIView* _pulseView;
	UIImageView* _micImageView;
	UIImageView* _crossImageView;
}
@property(retain, nonatomic) UIButton* sendButton;
@property(retain, nonatomic) UIImageView* crossImageView;
@property(retain, nonatomic) UIImageView* micImageView;
@property(retain, nonatomic) UIView* pulseView;
@property(retain, nonatomic) UIView* body;
+(id)thumbWithDiamter:(float)diamter;
+(void)initialize;
-(void).cxx_destruct;
-(void)changeToSendState;
-(void)changeRedState:(BOOL)state inside:(BOOL)inside;
-(void)updateVolume:(float)volume;
-(id)initWithFrame:(CGRect)frame;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class UIImageView, EditAttachment, UIView, UIButton;

__attribute__((visibility("hidden")))
@interface EditAttachmentView : XXUnknownSuperclass {
	EditAttachment* _attachment;
	UIImageView* _backgroundView;
	UIView* _renderView;
	UIButton* _cancelButton;
}
@property(readonly, retain, nonatomic) UIView* renderView;
@property(readonly, retain, nonatomic) UIImageView* backgroundView;
@property(readonly, retain, nonatomic) EditAttachment* attachment;
@property(retain, nonatomic) UIButton* cancelButton;
+(id)createRenderView;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)notificationRender:(id)render;
-(void)actionDelete:(id)aDelete;
-(void)actionTapped:(id)tapped;
-(void)dealloc;
-(id)initWithAttachment:(id)attachment style:(XXStruct_9zIMjA)style;
-(id)initWithAttachment:(id)attachment style:(XXStruct_9zIMjA)style enableDeletion:(BOOL)deletion;
@end

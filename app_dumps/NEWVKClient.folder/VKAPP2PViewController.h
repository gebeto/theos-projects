/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKAPTabViewControllerProtocol.h"
#import "VKClient-Structs.h"
#import "VKP2PViewController.h"

@class NSString, UIButton;

__attribute__((visibility("hidden")))
@interface VKAPP2PViewController : VKP2PViewController <VKAPTabViewControllerProtocol> {
	id _success;
	UIButton* _sendButton;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id success;
@property(retain, nonatomic) UIButton* sendButton;
-(void).cxx_destruct;
-(void)actionTeaserButton:(id)button;
-(BOOL)VKMScrollViewDisablePTR;
-(void)VKMNavigationBarUpdate;
-(void)VKMScrollViewUpdateTeaserView;
-(BOOL)VKMScrollViewShouldShowTeaser;
-(id)scrollView;
-(void)actionNewP2P:(id)p;
-(void)viewWillAppear:(BOOL)view;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AuthModel;

__attribute__((visibility("hidden")))
@interface LandingPageController : XXUnknownSuperclass {
	AuthModel* _model;
}
@property(retain, nonatomic) AuthModel* model;
-(void)useAPNSToken:(id)token;
-(void)actionLogIn:(id)anIn;
-(void)actionFacebook:(id)facebook;
-(void)actionSignUp:(id)up;
-(int)preferredStatusBarStyle;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
@end

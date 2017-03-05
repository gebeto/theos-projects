/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UITabBarController, VK_AudioPlayerViewController;

__attribute__((visibility("hidden")))
@interface VK_MiniPlayerController : XXUnknownSuperclass {
	BOOL _isVisible;
	UITabBarController* _tabBarController;
	VK_AudioPlayerViewController* _bigPlayerViewController;
}
@property(readonly, assign, nonatomic) __weak VK_AudioPlayerViewController* bigPlayerViewController;
@property(readonly, assign, nonatomic) __weak UITabBarController* tabBarController;
@property(assign, nonatomic) BOOL isVisible;
-(void).cxx_destruct;
-(void)changeMiniPlayerVisibility:(BOOL)visibility;
-(id)internalCreateAudioPlayerViewController;
-(void)internalMiniPlayerVisibilityChanged:(BOOL)changed;
-(void)internalConfigureWithTabBarController:(id)tabBarController;
-(void)dismissAudioPlayerViewControllerIfNeededWithCompletion:(id)completion;
-(void)dismissAudioPlayerViewControllerIfNeeded;
-(void)openAudioPlayerViewControllerWithCompletion:(id)completion;
-(void)openAudioPlayerViewController;
-(void)hide;
-(void)show;
-(id)initWithTabBarController:(id)tabBarController;
@end

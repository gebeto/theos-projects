/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, VKStoreProductSticker, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface ExtrasTabBarItem : XXUnknownSuperclass {
	BOOL _enabled;
	BOOL _shouldAnimateBadge;
	NSString* _badgeValue;
	NSString* _title;
	NSString* _customClassTag;
	UIImage* _image;
	UIColor* _tintColor;
	UIColor* _selectedTintColor;
	VKStoreProductSticker* _product;
}
@property(retain, nonatomic) VKStoreProductSticker* product;
@property(retain, nonatomic) UIColor* selectedTintColor;
@property(retain, nonatomic) UIColor* tintColor;
@property(retain, nonatomic) UIImage* image;
@property(assign, nonatomic) BOOL shouldAnimateBadge;
@property(assign, nonatomic) BOOL enabled;
@property(retain, nonatomic) NSString* customClassTag;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSString* badgeValue;
-(void).cxx_destruct;
-(id)init;
@end


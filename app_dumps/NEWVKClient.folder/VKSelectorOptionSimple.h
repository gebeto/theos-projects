/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKSelectorOption.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface VKSelectorOptionSimple : XXUnknownSuperclass <VKSelectorOption> {
	NSString* _title;
	UIImage* _icon;
	id _userInfo;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) id userInfo;
@property(retain, nonatomic) UIImage* icon;
@property(retain, nonatomic) NSString* title;
+(id)optionWithTitle:(id)title icon:(id)icon;
+(id)optionWithTitle:(id)title icon:(id)icon userInfo:(id)info;
-(void).cxx_destruct;
-(id)initWithTitle:(id)title icon:(id)icon userInfo:(id)info;
@end


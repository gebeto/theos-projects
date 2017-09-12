/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSURL, NSString;

__attribute__((visibility("hidden")))
@interface VKPostCaption : VKRenderable {
	NSString* _text;
	NSURL* _actionUrl;
	NSString* _actionTitle;
}
@property(retain, nonatomic) NSString* actionTitle;
@property(retain, nonatomic) NSURL* actionUrl;
@property(retain, nonatomic) NSString* text;
-(void).cxx_destruct;
-(BOOL)process:(id)process context:(id)context;
@end


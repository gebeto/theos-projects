/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class UIImage, NSString;

__attribute__((visibility("hidden")))
@interface VKDocSketchPreview : VKDomain {
	NSString* _src;
	UIImage* _image;
	int _width;
	int _height;
}
@property(readonly, assign, nonatomic) float ratio;
@property(assign, nonatomic) int height;
@property(assign, nonatomic) int width;
@property(retain, nonatomic) UIImage* image;
@property(copy, nonatomic) NSString* src;
-(void).cxx_destruct;
-(BOOL)process:(id)process context:(id)context;
@end


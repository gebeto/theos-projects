/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "Brush.h"

@class UIBezierPath;

__attribute__((visibility("hidden")))
@interface MarkerBrush : Brush {
	UIBezierPath* _path;
}
@property(retain, nonatomic) UIBezierPath* path;
+(float)minSize;
+(float)maxSize;
-(void).cxx_destruct;
-(id)generateImageWithScale:(float)scale;
-(CGSize)brushImageSize;
-(float)drawPeriod;
-(id)initWithSize:(float)size color:(id)color angle:(float)angle;
-(id)initWithSize:(float)size color:(id)color;
-(id)initWithSize:(float)size color:(id)color deviceOrientation:(int)orientation;
@end


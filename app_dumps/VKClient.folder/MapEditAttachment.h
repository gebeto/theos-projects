/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "EditAttachment.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface MapEditAttachment : EditAttachment {
	UIImage* _image;
	CLLocationCoordinate2D _coord;
}
@property(retain, nonatomic) UIImage* image;
@property(assign, nonatomic) CLLocationCoordinate2D coord;
-(void).cxx_destruct;
-(void)updateCoordinate:(CLLocationCoordinate2D)coordinate image:(id)image;
-(void)renderView:(id)view;
-(id)createViewForStyle:(id)style;
@end


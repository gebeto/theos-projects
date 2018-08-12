/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MTRGBanner.h"

@class MTRGVideoBanner, NSNumber, NSArray, MTRGImageData, NSString;

@interface MTRGNativeBanner : MTRGBanner {
	NSString* _title;
	NSString* _descriptionText;
	NSString* _disclaimer;
	NSString* _domain;
	NSString* _category;
	NSString* _subcategory;
	NSNumber* _rating;
	MTRGImageData* _icon;
	MTRGImageData* _image;
	unsigned _votes;
	MTRGVideoBanner* _videoBanner;
	NSArray* _cards;
}
@property(retain, nonatomic) NSArray* cards;
@property(retain, nonatomic) MTRGVideoBanner* videoBanner;
@property(assign, nonatomic) unsigned votes;
@property(retain, nonatomic) MTRGImageData* image;
@property(retain, nonatomic) MTRGImageData* icon;
@property(retain, nonatomic) NSNumber* rating;
@property(copy, nonatomic) NSString* subcategory;
@property(copy, nonatomic) NSString* category;
@property(copy, nonatomic) NSString* domain;
@property(copy, nonatomic) NSString* disclaimer;
@property(copy, nonatomic) NSString* descriptionText;
@property(copy, nonatomic) NSString* title;
-(void).cxx_destruct;
@end


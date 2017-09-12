/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCell.h"

@class VKPhotoRow, NSArray;

__attribute__((visibility("hidden")))
@interface PhotoRowCell : VKMCell {
	NSArray* _previews;
}
@property(retain, nonatomic) VKPhotoRow* domain;
@property(readonly, retain, nonatomic) NSArray* previews;
+(void)prerender:(id)prerender;
+(id)renderPhotosRow:(id)row max:(int)max width:(float)width height:(float)height padding:(float)padding zoomMax:(float)max6 zoomMin:(float)min;
+(void)initialize;
-(void).cxx_destruct;
-(id)visibleThumbnails;
-(void)thumbnailView:(id)view selected:(id)selected;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)prepareForReuse;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MultiImageLoaderDelegate.h"
#import "VKClient-Structs.h"
#import "NewDialogCell.h"

@class UIImageView, NSString, VKMMultiLoader;

__attribute__((visibility("hidden")))
@interface DialogMultiCell : NewDialogCell <MultiImageLoaderDelegate> {
	BOOL imagePending;
	VKMMultiLoader* _multiloader;
	UIImageView* _multi;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) UIImageView* multi;
@property(readonly, retain, nonatomic) VKMMultiLoader* multiloader;
-(void).cxx_destruct;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)multiImageLoader:(id)loader complete:(id)complete;
-(void)loadDialogImage:(double)image;
-(void)notificationUserUpdated:(id)updated;
-(void)prepareForReuse;
-(void)dealloc;
-(id)initWithModel:(id)model reuse:(id)reuse;
@end


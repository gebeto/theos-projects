/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MaskLoaderObserver.h"
#import "VKMCollectionCell.h"
#import "VKClient-Structs.h"

@class VKMImageView, MaskLoader, UIImageView, VKMask;

__attribute__((visibility("hidden")))
@interface MaskCollectionCell : VKMCollectionCell <MaskLoaderObserver> {
	MaskLoader* _maskLoader;
	VKMImageView* _imageView;
	UIImageView* _disabledImageView;
	UIImageView* _downloadIconImageView;
	UIImageView* _selectionView;
}
@property(retain, nonatomic) MaskLoader* maskLoader;
@property(retain, nonatomic) VKMask* domain;
@property(retain, nonatomic) UIImageView* selectionView;
@property(retain, nonatomic) UIImageView* downloadIconImageView;
@property(retain, nonatomic) UIImageView* disabledImageView;
@property(retain, nonatomic) VKMImageView* imageView;
-(void).cxx_destruct;
-(void)maskLoader:(id)loader masksCacheCleanedMaskWithIden:(id)iden;
-(void)maskLoader:(id)loader canceledLoadingMask:(id)mask;
-(void)maskLoader:(id)loader finishLoadingMask:(id)mask;
-(void)maskLoader:(id)loader failedLoadingMask:(id)mask;
-(void)maskLoader:(id)loader loadingMask:(id)mask updatedProgress:(id)progress;
-(void)maskLoader:(id)loader startLoadingMask:(id)mask;
-(void)maskLoader:(id)loader changeCurrentMask:(id)mask;
-(void)updateDownloadIconVisibility;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class UIView, VKAPModel;

__attribute__((visibility("hidden")))
@interface VKAPTabsCollectionViewController : XXUnknownSuperclass {
	VKAPModel* _model;
	UIView* _separator;
}
@property(retain, nonatomic) UIView* separator;
@property(retain, nonatomic) VKAPModel* model;
+(id)collectionWithModel:(id)model;
-(void).cxx_destruct;
-(BOOL)collectionView:(id)view shouldHighlightItemAtIndexPath:(id)indexPath;
-(void)collectionView:(id)view didDeselectItemAtIndexPath:(id)indexPath;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(CGSize)preferredContentSize;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)setButtonsAlpha:(float)alpha;
@end


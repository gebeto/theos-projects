/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UICollectionViewDataSource.h"
#import "VKClient-Structs.h"
#import "VKMController.h"
#import "UICollectionViewDelegate.h"

@class NSString, NSArray, UICollectionView;

__attribute__((visibility("hidden")))
@interface StoryFeedPreviewViewController : VKMController <UICollectionViewDataSource, UICollectionViewDelegate> {
	BOOL _lockedForTransition;
	BOOL _needsReloadAfterUnlock;
	UICollectionView* _collectionView;
	NSArray* _items;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UICollectionView* collectionView;
@property(assign, nonatomic) BOOL needsReloadAfterUnlock;
@property(assign, nonatomic) BOOL lockedForTransition;
@property(retain, nonatomic) NSArray* items;
-(void).cxx_destruct;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(void)unlockForTransition;
-(void)lockForTransition;
-(void)scrollToSource:(id)source animated:(BOOL)animated;
-(void)reloadItems;
-(void)reloadData;
-(void)handleStoriesUpdatedNotification:(id)notification;
-(void)handleStoryMarkedSeenNotification:(id)notification;
-(void)preloadUnseen;
-(void)buildItems;
-(id)navContext;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithMain:(id)main andModel:(id)model;
@end


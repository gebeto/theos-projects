/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ExtrasTabBarDelegate.h"
#import "UIInputViewAudioFeedback.h"
#import "VKClient-Structs.h"
#import "StickerSelectionViewDelegate.h"
#import "LargeEmojiSelectionViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PagingViewDelegate.h"
#import "StickerSelectionViewScrollingDelegate.h"
#import "StickerSelectionViewPhotoEditorModeDelegate.h"
#import "ModelObserver.h"
#import "PagingViewDataSource.h"
#import "UIScrollViewDelegate.h"
#import "EmojiInputDelegate.h"
#import "ExtrasTabBarScrollingDelegate.h"

@class EmojiSelectionView, StoreActiveModel, ExtrasTabBar, UIView, StickersLoadingManager, PhotoEditorStickersModel, LargeEmojiSelectionView, NSArray, ExtrasInputViewRecentStickersTab, VKMImageView, ExtrasInputViewPhotoEditorStickersTab, MainModel, NSString, PagingView, StoreStockManager, ExtrasTabBarItem;
@protocol VKMNavDelegate, ExtrasInputViewDelegate, ExtraInputPanelViewPhotoEditorModeDelegate;

__attribute__((visibility("hidden")))
@interface ExtrasInputView : XXUnknownSuperclass <ExtrasTabBarDelegate, ModelObserver, StickerSelectionViewDelegate, StickerSelectionViewPhotoEditorModeDelegate, LargeEmojiSelectionViewDelegate, EmojiInputDelegate, ExtrasTabBarScrollingDelegate, UIScrollViewDelegate, StickerSelectionViewScrollingDelegate, UIInputViewAudioFeedback, PagingViewDataSource, PagingViewDelegate> {
	float _tabBarOffset;
	int _toPage;
	int _fromPage;
	BOOL _photoEditorMode;
	BOOL _shouldShowRecentTab;
	id<ExtrasInputViewDelegate> _delegate;
	id<ExtraInputPanelViewPhotoEditorModeDelegate> _photoEditorModeDelegate;
	id<VKMNavDelegate> _navDelegate;
	MainModel* _main;
	StoreActiveModel* _stickersModel;
	PhotoEditorStickersModel* _photoEditorStickersModel;
	StickersLoadingManager* _stickersLoadingManager;
	StoreStockManager* _storeStockManager;
	ExtrasTabBar* _tabBar;
	NSArray* _productTabs;
	ExtrasTabBarItem* _storeTabBarItem;
	ExtrasTabBarItem* _settingsTabBarItem;
	ExtrasTabBarItem* _emojiTabBarItem;
	LargeEmojiSelectionView* _largeEmojiView;
	EmojiSelectionView* _emojiView;
	ExtrasInputViewRecentStickersTab* _recentStickersTab;
	ExtrasInputViewPhotoEditorStickersTab* _photoEditorStickersTab;
	NSArray* _stickerSelectionReusableViews;
	NSArray* _backgroundViews;
	UIView* _topSeparatorView;
	PagingView* _pagingView;
	VKMImageView* _currentBackgroundView;
	VKMImageView* _previousBackgroundView;
}
@property(readonly, assign, nonatomic) BOOL enableInputClicksWhenVisible;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) id<VKMNavDelegate> navDelegate;
@property(assign, nonatomic) id<ExtraInputPanelViewPhotoEditorModeDelegate> photoEditorModeDelegate;
@property(assign, nonatomic) id<ExtrasInputViewDelegate> delegate;
@property(retain, nonatomic) VKMImageView* previousBackgroundView;
@property(retain, nonatomic) VKMImageView* currentBackgroundView;
@property(retain, nonatomic) PagingView* pagingView;
@property(retain, nonatomic) UIView* topSeparatorView;
@property(retain, nonatomic) NSArray* backgroundViews;
@property(retain, nonatomic) NSArray* stickerSelectionReusableViews;
@property(retain, nonatomic) ExtrasInputViewPhotoEditorStickersTab* photoEditorStickersTab;
@property(retain, nonatomic) ExtrasInputViewRecentStickersTab* recentStickersTab;
@property(assign, nonatomic) BOOL shouldShowRecentTab;
@property(retain, nonatomic) EmojiSelectionView* emojiView;
@property(retain, nonatomic) LargeEmojiSelectionView* largeEmojiView;
@property(retain, nonatomic) ExtrasTabBarItem* emojiTabBarItem;
@property(retain, nonatomic) ExtrasTabBarItem* settingsTabBarItem;
@property(retain, nonatomic) ExtrasTabBarItem* storeTabBarItem;
@property(retain, nonatomic) NSArray* productTabs;
@property(retain, nonatomic) ExtrasTabBar* tabBar;
@property(retain, nonatomic) StoreStockManager* storeStockManager;
@property(retain, nonatomic) StickersLoadingManager* stickersLoadingManager;
@property(retain, nonatomic) PhotoEditorStickersModel* photoEditorStickersModel;
@property(retain, nonatomic) StoreActiveModel* stickersModel;
@property(retain, nonatomic) MainModel* main;
@property(assign, nonatomic) BOOL photoEditorMode;
-(void).cxx_destruct;
-(BOOL)canMakeOverlay;
-(int)currentTabType;
-(BOOL)selectStickerProductId:(id)anId;
-(void)showPopupForProductWithId:(id)anId referrerContext:(id)context;
-(BOOL)hasProducts;
-(void)showStoreController;
-(BOOL)extrasTabBar:(id)bar shouldSelectItem:(id)item;
-(void)extrasTabBar:(id)bar didSelectItem:(id)item animated:(BOOL)animated;
-(unsigned)pageIndexForTabBarItem:(id)tabBarItem;
-(void)stickerSelectionViewScrollViewWillEndDragging:(id)stickerSelectionViewScrollView withVelocity:(CGPoint)velocity;
-(void)stickerSelectionViewScrollViewDidScroll:(id)stickerSelectionViewScrollView;
-(void)extrasInputScrollViewWillAppear:(id)extrasInputScrollView;
-(void)extrasInputScrollViewWillEndDragging:(id)extrasInputScrollView withVelocity:(CGPoint)velocity;
-(void)extrasInputScrollViewDidScroll:(id)extrasInputScrollView;
-(void)setTabBarOffset:(float)offset animated:(BOOL)animated;
-(void)_makePageViewController;
-(void)_makeTabBarShouldBlur:(BOOL)_makeTabBar;
-(void)_makeBottomStoryBarShouldBlur:(BOOL)_makeBottomStoryBar;
-(void)informDelegateDidChangeTab;
-(void)didChangeTab;
-(void)model:(id)model willStartLoadingWithContext:(id)context;
-(void)modelLoadingChanged:(id)changed;
-(void)model:(id)model updated:(id)updated;
-(void)updateStoreBadgeValue;
-(void)updateTabsWithStickersModelIndex:(id)stickersModelIndex;
-(void)actionPhotoEditorModeStoreButton;
-(void)actionPhotoEditorModeCancel;
-(void)largeEmojiSelectionView:(id)view didSelectEmojiWithImage:(id)image emojiString:(id)string;
-(void)stickerSelectionView:(id)view didSelectStickerWithImage:(id)image stickerId:(id)anId;
-(void)stickerSelectionView:(id)view didSelectSticker:(id)sticker referrerContext:(id)context;
-(void)emojiSelectionView:(id)view didSelectEmoji:(id)emoji;
-(BOOL)productPurchasedAndActiveAndLoaded:(id)loaded;
-(BOOL)productPurchasedAndActive:(id)active;
-(void)renderBackgroundImageView:(id)view forPage:(int)page;
-(void)renderStickerSelectionView:(id)view forPage:(int)page;
-(id)productTabForPage:(int)page;
-(id)viewForPage:(int)page;
-(id)collectionViewLayoutWithColumnsCount:(unsigned)columnsCount;
-(float)collectionInteritemDistance;
-(float)collectionViewPadding;
-(void)pagingView:(id)view scrollingProgress:(float)progress fromPage:(int)page toPage:(int)page4;
-(void)pagingView:(id)view didChangeCurrentPage:(int)page;
-(id)currentScrollViewForPagingView:(id)pagingView;
-(id)pagingView:(id)view viewForPage:(int)page;
-(void)setActiveTab:(id)tab;
-(void)notificationProductPurchased:(id)purchased;
-(void)notificationProductLoadingChanged:(id)changed;
-(id)productTabForProductId:(id)productId;
-(id)initWithFrame:(CGRect)frame main:(id)main photoEditorMode:(BOOL)mode;
-(void)dealloc;
-(unsigned)numberOfNonProductPages;
-(BOOL)isPhotoEditorStickersPage:(unsigned)page;
-(BOOL)isRecentStickersPage:(unsigned)page;
-(BOOL)isEmojiPage:(unsigned)page;
@end


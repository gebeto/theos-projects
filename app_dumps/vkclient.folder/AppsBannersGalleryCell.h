/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "UIScrollViewDelegate.h"
#import "VKMCell.h"
#import "MOScrollPagingMediatorDelegate.h"

@class AutopagingGalleryView, AppsListDomain, MOScrollPagingMediator, NSString;

__attribute__((visibility("hidden")))
@interface AppsBannersGalleryCell : VKMCell <MOScrollPagingMediatorDelegate, UIScrollViewDelegate> {
	MOScrollPagingMediator* _mediator;
	AutopagingGalleryView* _scroller;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) AppsListDomain* domain;
@property(assign, nonatomic, getter=isAutopagingEnabled) BOOL autopagingEnabled;
@property(readonly, retain, nonatomic) AutopagingGalleryView* scroller;
@property(readonly, retain, nonatomic) MOScrollPagingMediator* mediator;
+(CGSize)cellSize;
+(void)prerender:(id)prerender;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)scrollerTapped:(id)tapped;
-(void)pagingMediator:(id)mediator renderPage:(int)page;
-(void)preparePagesInScroller:(id)scroller fromDomain:(id)domain;
-(void)detach;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(BOOL)pagingMediatorShouldResetForScrollResize:(id)pagingMediator;
-(id)createSubviews;
-(id)createMediatorWithScroller:(id)scroller delegate:(id)delegate;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end


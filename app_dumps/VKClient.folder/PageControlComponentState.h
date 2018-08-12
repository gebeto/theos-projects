/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, MOScrollPagingMediator;

__attribute__((visibility("hidden")))
@interface PageControlComponentState : XXUnknownSuperclass {
	MOScrollPagingMediator* _mediator;
	unsigned _numberOfPages;
	UIColor* _pageColor;
	UIColor* _currentPageColor;
}
@property(readonly, assign, nonatomic) UIColor* currentPageColor;
@property(readonly, assign, nonatomic) UIColor* pageColor;
@property(readonly, assign, nonatomic) unsigned numberOfPages;
@property(readonly, assign, nonatomic) MOScrollPagingMediator* mediator;
-(void).cxx_destruct;
-(id)initWithNumberOfPages:(unsigned)pages pageColor:(id)color currentPageColor:(id)color3 mediator:(id)mediator;
@end


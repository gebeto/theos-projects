/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class MOCTRender;

__attribute__((visibility("hidden")))
@interface VKBalanceDetail : VKRenderable {
	unsigned _balance;
	int _style;
	MOCTRender* _labelRender;
}
@property(retain, nonatomic) MOCTRender* labelRender;
@property(assign, nonatomic) int style;
@property(assign, nonatomic) unsigned balance;
-(void).cxx_destruct;
-(Class)cellClass;
-(id)withStyle:(int)style;
-(id)withBalance:(unsigned)balance;
@end


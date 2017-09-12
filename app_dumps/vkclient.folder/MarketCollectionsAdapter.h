/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "NSObject.h"


@protocol MarketCollectionsAdapter <NSObject>
-(BOOL)shouldApplyDecoration;
-(CGSize)sizeForItemAtIndexPath:(id)indexPath;
-(id)viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;
-(CGSize)referenceSizeForFooterInSection:(int)section;
-(CGSize)referenceSizeForHeaderInSection:(int)section;
-(id)itemAtIndexPath:(id)indexPath;
-(id)cellForItemAtIndexPath:(id)indexPath;
@end


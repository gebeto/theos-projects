/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BlockCellWithCollectionView.h"
#import "VKClient-Structs.h"

@class RecentSearchBlock;

__attribute__((visibility("hidden")))
@interface RecentSearchBlockCell : BlockCellWithCollectionView {
}
@property(retain, nonatomic) RecentSearchBlock* domain;
+(Class)collectionCellClass;
-(void)actionButtonTapped:(id)tapped;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

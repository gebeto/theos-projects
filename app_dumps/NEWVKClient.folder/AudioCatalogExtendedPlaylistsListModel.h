/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModel.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface AudioCatalogExtendedPlaylistsListModel : ListModel {
	NSNumber* _blockId;
}
@property(copy, nonatomic) NSNumber* blockId;
-(void).cxx_destruct;
-(id)listFromData:(id)data;
-(id)process:(id)process;
-(id)request:(int)request count:(int)count;
-(int)defaultPage;
-(id)countKey;
@end

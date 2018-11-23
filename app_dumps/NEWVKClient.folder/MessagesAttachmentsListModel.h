/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModel.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface MessagesAttachmentsListModel : ListModel {
	NSNumber* _dialogId;
}
@property(retain, nonatomic) NSNumber* dialogId;
+(id)requestBuilderForNextFrom:(id)from page:(int)page mediaType:(id)type dialogId:(id)anId;
+(id)with:(id)with dialogId:(id)anId;
-(void).cxx_destruct;
-(void)updateContext:(id)context withLoadedItems:(id)loadedItems andData:(id)data;
-(id)spawnContext:(id)context;
-(id)mediaType;
-(id)requestForContext:(id)context;
@end

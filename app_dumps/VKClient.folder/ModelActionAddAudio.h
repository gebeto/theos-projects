/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelActionAdd.h"

@class VKAudio;

__attribute__((visibility("hidden")))
@interface ModelActionAddAudio : ModelActionAdd {
}
@property(retain, nonatomic) VKAudio* added;
@property(retain, nonatomic) VKAudio* target;
+(int)domainType;
-(BOOL)hudSuccessEmptyVisible;
-(BOOL)actionShowsSuccessConfirmation;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
@end


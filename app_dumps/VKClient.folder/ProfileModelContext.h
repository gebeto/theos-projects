/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelContext.h"

@class ProfileContentBlock, AppWidget;

__attribute__((visibility("hidden")))
@interface ProfileModelContext : ModelContext {
	ProfileContentBlock* _audioBlock;
	ProfileContentBlock* _marketBlock;
	ProfileContentBlock* _mainSection;
	AppWidget* _appWidget;
}
@property(retain, nonatomic) AppWidget* appWidget;
@property(retain, nonatomic) ProfileContentBlock* mainSection;
@property(retain, nonatomic) ProfileContentBlock* marketBlock;
@property(retain, nonatomic) ProfileContentBlock* audioBlock;
-(void).cxx_destruct;
-(void)spawnCopy:(id)copy;
@end


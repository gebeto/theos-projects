/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKTitleableColor.h"
#import "VKRenderable.h"

@class VKPrivacySetting, NSString;

__attribute__((visibility("hidden")))
@interface PrivacyAddUsersRenderable : VKRenderable <VKTitleableColor> {
	VKPrivacySetting* _privacy;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VKPrivacySetting* privacy;
-(void).cxx_destruct;
-(id)setupPrivacy:(id)privacy;
-(BOOL)disclosure;
-(id)title;
-(id)titleColor;
-(id)titleFont;
-(float)titleOffsetX;
-(Class)rendererClass;
@end


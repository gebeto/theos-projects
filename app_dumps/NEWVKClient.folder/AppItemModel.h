/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LoadingModel.h"

@class VKDomainWithCustomCellClass, NSNumber;

__attribute__((visibility("hidden")))
@interface AppItemModel : LoadingModel {
	NSNumber* _appID;
	VKDomainWithCustomCellClass* _application;
}
@property(retain, nonatomic) VKDomainWithCustomCellClass* application;
@property(readonly, retain, nonatomic) NSNumber* appID;
-(void).cxx_destruct;
-(id)processActivities:(id)activities;
-(id)processApplications:(id)applications;
-(id)requestForContext:(id)context;
-(id)requestBuilderForContext:(id)context;
-(id)applicationRequestKey;
-(id)applicationRequestForAppID:(id)appID;
-(id)forAppID:(id)appID;
@end

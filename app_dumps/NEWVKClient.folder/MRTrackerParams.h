/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSNumber;

@interface MRTrackerParams : XXUnknownSuperclass {
	BOOL _trackLaunch;
	BOOL _trackEnvironment;
	NSString* _trackerId;
	int _locationTrackingMode;
	int _gender;
	NSNumber* _age;
	NSString* _language;
	NSString* _mrgsAppId;
	NSString* _mrgsUserId;
	NSString* _mrgsDeviceId;
	NSArray* _icqIds;
	NSArray* _okIds;
	NSArray* _vkIds;
	NSArray* _emails;
	NSArray* _customUserIds;
	double _launchTimeout;
}
@property(retain) NSArray* customUserIds;
@property(retain) NSArray* emails;
@property(retain) NSArray* vkIds;
@property(retain) NSArray* okIds;
@property(retain) NSArray* icqIds;
@property(copy) NSString* mrgsDeviceId;
@property(copy) NSString* mrgsUserId;
@property(copy) NSString* mrgsAppId;
@property(copy) NSString* language;
@property(retain) NSNumber* age;
@property(assign, nonatomic) int gender;
@property(assign, nonatomic) BOOL trackEnvironment;
@property(assign, nonatomic) int locationTrackingMode;
@property(assign, nonatomic) double launchTimeout;
@property(assign, nonatomic) BOOL trackLaunch;
@property(readonly, copy, nonatomic) NSString* trackerId;
-(void).cxx_destruct;
-(void)putDataToBuilder:(id)builder;
-(void)putSettingsToBuilder:(id)builder;
-(void)putCustomParamsToBuilder:(id)builder;
-(id)initWithTrackerId:(id)trackerId;
@end


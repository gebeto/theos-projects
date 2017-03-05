/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_BaseManager.h"

@class NSMutableDictionary, NSNumber, NSArray;

__attribute__((visibility("hidden")))
@interface VK_UserSettingsManager : VK_BaseManager {
	NSMutableDictionary* _settingsDict;
}
@property(assign, nonatomic) unsigned loopMode;
@property(assign, nonatomic) BOOL broadcastEnabled;
@property(assign, nonatomic) BOOL shuffleEnabled;
@property(assign, nonatomic) BOOL confirmRemoveEnabled;
@property(assign, nonatomic) BOOL dontSleepWhileDownloading;
@property(retain, nonatomic) NSArray* equalizerValues;
@property(retain, nonatomic) NSNumber* equalizerMod;
@property(assign, nonatomic) BOOL equalizerEnabled;
@property(assign, nonatomic) BOOL downloadByWifi;
@property(retain, nonatomic) NSMutableDictionary* settingsDict;
+(id)currentSettings;
-(void).cxx_destruct;
-(void)setSetting:(id)setting withValue:(id)value;
-(id)getValueSetting:(id)setting;
-(void)setBoolSetting:(id)setting withValue:(BOOL)value;
-(BOOL)getBoolSetting:(id)setting;
-(void)internalNeedLoadUserData;
-(id)init;
-(void)registerDefaultsSettings;
@end

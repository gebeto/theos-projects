/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MRAbstractDataProvider.h"

@class NSString;

@interface MREnvironmentDataProvider : MRAbstractDataProvider {
	NSString* _bssid;
	NSString* _ssid;
}
-(void).cxx_destruct;
-(void)putDataToBuilder:(id)builder;
-(void)collectWifiInfo;
-(void)collectData;
@end


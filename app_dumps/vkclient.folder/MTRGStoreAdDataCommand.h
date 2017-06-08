/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MTRGAsyncCommand.h"

@class NSString;

@interface MTRGStoreAdDataCommand : MTRGAsyncCommand {
	NSString* _data;
	unsigned _slotId;
	double _cachePeriod;
}
-(void).cxx_destruct;
-(void)run;
-(id)initWithData:(id)data slotId:(unsigned)anId cachePeriod:(double)period;
@end

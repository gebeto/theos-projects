/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "VKRenderedTextSettingsWriter.h"
#import "VKClient-Structs.h"


__attribute__((visibility("hidden")))
@interface VKRenderedTextSettings : XXUnknownSuperclass <VKRenderedTextSettingsWriter, NSCopying> {
	unsigned _maximumNumberOfLines;
	unsigned _minimumNumberOfLines;
	int _alignment;
	CGSize _minimumSize;
	CGSize _maximumSize;
}
@property(assign, nonatomic) CGSize maximumSize;
@property(assign, nonatomic) CGSize minimumSize;
@property(assign, nonatomic) int alignment;
@property(assign, nonatomic) unsigned minimumNumberOfLines;
@property(assign, nonatomic) unsigned maximumNumberOfLines;
-(id)copyChangingValues:(id)values;
-(id)copyWithZone:(NSZone*)zone;
@end


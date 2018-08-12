/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKConfigurationReader.h"
#import "VKConfigurationWriter.h"

@class NSUserDefaults, NSString;

__attribute__((visibility("hidden")))
@interface VKConfiguration : XXUnknownSuperclass <VKConfigurationWriter, VKConfigurationReader> {
	NSUserDefaults* _defaults;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) NSUserDefaults* defaults;
+(id)suiteName;
+(id)sharedInstance;
+(id)privateInstance;
-(void).cxx_destruct;
-(id)dictionary;
-(void)writeSavingWithBlock:(id)block;
-(BOOL)boolForKey:(id)key;
-(id)stringForKey:(id)key;
-(id)objectForKey:(id)key;
-(void)removeObjectForKey:(id)key;
-(void)setBool:(BOOL)aBool forKey:(id)key;
-(void)setObject:(id)object forKey:(id)key;
-(id)initShared;
-(id)initPrivate;
-(id)initWithSuiteName:(id)suiteName;
-(id)init;
@end


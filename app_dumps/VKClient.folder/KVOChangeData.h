/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface KVOChangeData : XXUnknownSuperclass {
	NSString* _keyPath;
	unsigned _kind;
	id _newValue;
	id _oldValue;
	NSIndexSet* _indexes;
}
@property(readonly, assign, nonatomic) NSIndexSet* indexes;
@property(readonly, assign, nonatomic) id oldValue;
@property(readonly, assign, nonatomic) id newValue;
@property(readonly, assign, nonatomic) unsigned kind;
@property(readonly, assign, nonatomic) NSString* keyPath;
+(id)changeDataWithChangeDictionary:(id)changeDictionary keyPath:(id)path;
-(void).cxx_destruct;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class NSMutableDictionary, IndexUpdate, NSIndexPath, Index;

__attribute__((visibility("hidden")))
@interface ModelUpdateBuilder : XXUnknownSuperclass {
	BOOL forcedReload;
	Index* _index;
	NSIndexPath* _scrollPathAnimated;
	NSMutableDictionary* _updates;
	Index* _resetIndex;
	IndexUpdate* _resetIndexUpdate;
	XXStruct_X102JB _animation;
}
@property(assign, nonatomic) XXStruct_X102JB animation;
@property(retain, nonatomic) NSIndexPath* scrollPathAnimated;
@property(retain, nonatomic) Index* index;
@property(retain, nonatomic) IndexUpdate* resetIndexUpdate;
@property(retain, nonatomic) Index* resetIndex;
@property(retain, nonatomic) NSMutableDictionary* updates;
+(void)lookupReorderIndex:(id)index section:(unsigned)section iden:(id)iden after:(id)after before:(id)before block:(id)block;
+(void)enumerateSections:(id)sections index:(id)index block:(id)block;
+(void)updateIndex:(id)index withContext:(id)context performing:(id)performing result:(id)result;
+(id)updatedIndex:(id)index performing:(id)performing;
+(id)builder:(id)builder;
-(void).cxx_destruct;
-(void)sectionAppend:(BOOL)append block:(id)block;
-(void)withSection:(unsigned)section block:(id)block;
-(void)deleteAllRows;
-(void)pathForInsertion:(id)insertion sortedSection:(unsigned)section comparator:(id)comparator block:(id)block;
-(void)lookupReorder:(id)reorder after:(id)after before:(id)before section:(int)section block:(id)block;
-(void)ensure:(Class)ensure path:(id)path block:(id)block;
-(void)pathForSection:(unsigned)section append:(BOOL)append object:(id)object block:(id)block;
-(void)pathForSection:(unsigned)section append:(BOOL)append reverse:(BOOL)reverse objects:(id)objects block:(id)block;
-(void)enumerateSections:(id)sections;
-(void)enumerateIdentity:(id)identity block:(id)block;
-(void)enumerateIdentity:(id)identity section:(unsigned)section block:(id)block;
-(void)enumerateObject:(id)object block:(id)block;
-(void)enumerateIdentity:(id)identity sections:(id)sections block:(id)block;
-(void)refreshSection:(unsigned)section title:(id)title;
-(void)refreshRow:(id)row with:(id)with;
-(void)refreshRow:(id)row;
-(void)insertRow:(id)row with:(id)with;
-(void)deleteRow:(id)row;
-(void)reloadRow:(id)row with:(id)with;
-(void)insertSection:(unsigned)section with:(id)with title:(id)title indexTitle:(id)title4;
-(void)deleteSection:(unsigned)section;
-(void)reloadSection:(unsigned)section with:(id)with;
-(void)addUpdate:(id)update key:(int)key;
-(void)scrollAnimated:(id)animated;
-(void)resetToIndex:(id)index update:(id)update;
-(void)forceReload;
-(id)buildUpdatedIndex;
-(id)buildAnimated:(BOOL)animated;
-(id)description;
-(id)init;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SearchModel.h"

@class Index, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HintsSearchModel : SearchModel {
	BOOL _initialAndStale;
	BOOL _initialStale;
	NSString* _qpending;
	NSString* _qfiltered;
	Index* _initial;
	NSDate* _initialUpdated;
}
@property(assign, nonatomic) BOOL initialAndStale;
@property(assign, nonatomic) BOOL initialStale;
@property(retain) NSDate* initialUpdated;
@property(retain) Index* initial;
@property(retain) NSString* qfiltered;
@property(retain, nonatomic) NSString* qpending;
-(void).cxx_destruct;
-(void)filter:(id)filter;
-(void)changeIndex:(id)index withUpdate:(id)update;
-(BOOL)shouldLoad:(id)load;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)parameters:(id)parameters;
-(id)countString;
-(id)method;
@end


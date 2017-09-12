/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLoader.h"

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface DialogsSearchLoader : VKMLoader {
	NSSet* _exclude;
	NSString* _query;
}
@property(retain) NSSet* exclude;
@property(readonly, retain, nonatomic) NSString* query;
-(void).cxx_destruct;
-(id)processResultsInBackground:(id)background data:(id)data;
-(id)requestForOffset:(int)offset count:(int)count success:(id)success failure:(id)failure;
-(id)initWithMain:(id)main andQuery:(id)query;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UISearchResultsUpdating.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class LoadingModel, NSString;
@protocol SearchModel;

__attribute__((visibility("hidden")))
@interface SearchModelUpdater : XXUnknownSuperclass <UISearchResultsUpdating> {
	LoadingModel<SearchModel>* _model;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) LoadingModel<SearchModel>* model;
+(id)model:(id)model;
-(void).cxx_destruct;
-(void)updateSearchResultsForSearchController:(id)searchController;
-(id)initWithSearchModel:(id)searchModel;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModel.h"

@class SearchPeopleFilterRenderable, SearchPeopleModelContext;

__attribute__((visibility("hidden")))
@interface SearchPeopleModel : ListModel {
	SearchPeopleFilterRenderable* _filterRenderable;
}
@property(retain, nonatomic) SearchPeopleModelContext* lastContext;
@property(retain, nonatomic) SearchPeopleFilterRenderable* filterRenderable;
-(void).cxx_destruct;
-(id)countString;
-(void)handleAddFriend:(id)aFriend :(id)arg2;
-(void)registerForEvents:(id)events;
-(void)clearIndex;
-(void)resetWithSearchQuery:(id)searchQuery;
-(id)currentFilter;
-(void)applyFilter:(id)filter;
-(id)indexWithUsers:(id)users;
-(id)process:(id)process;
-(id)requestForContext:(id)context;
-(id)spawnContext:(id)context;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)initWithSession:(id)session;
@end


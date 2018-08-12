/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UISearchControllerDelegate.h"
#import "VKClient-Structs.h"
#import "VKMViewControllerContainer.h"
#import "UISearchBarDelegate.h"

@class SearchModelUpdater, AudioSearchHistoryVKStats, VKMNavResolverProxy, UISearchController, NSNumber, NSString, AudioSearchHintsViewController, AudioSearchTrendsViewController;
@protocol SearchModel;

__attribute__((visibility("hidden")))
@interface AudioSearchViewController : VKMViewControllerContainer <UISearchControllerDelegate, UISearchBarDelegate> {
	NSNumber* _owner;
	AudioSearchTrendsViewController* _trends;
	AudioSearchHintsViewController* _hints;
	id<SearchModel> _audioSearchModel;
	SearchModelUpdater* _searchHintsUpdater;
	VKMNavResolverProxy* _navProxy;
	UISearchController* _search;
	AudioSearchHistoryVKStats* _localHistory;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) AudioSearchHistoryVKStats* localHistory;
@property(retain, nonatomic) UISearchController* search;
@property(retain, nonatomic) VKMNavResolverProxy* navProxy;
@property(retain, nonatomic) SearchModelUpdater* searchHintsUpdater;
@property(retain, nonatomic) id<SearchModel> audioSearchModel;
@property(retain, nonatomic) AudioSearchHintsViewController* hints;
@property(retain, nonatomic) AudioSearchTrendsViewController* trends;
@property(retain, nonatomic) NSNumber* owner;
+(id)main:(id)main ownerId:(id)anId;
-(void).cxx_destruct;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(void)search:(id)search scope:(int)scope;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)didPresentSearchController:(id)controller;
-(id)initWithMain:(id)main ownerId:(id)anId;
-(id)initWithMain:(id)main andModel:(id)model;
-(void)dealloc;
@end


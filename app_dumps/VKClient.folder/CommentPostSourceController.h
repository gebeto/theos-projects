/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCollectionController.h"
#import "VKClient-Structs.h"

@class CommentPostSourceCollectionModel, UIActivityIndicatorView;
@protocol CommentPostSourceDelegate;

__attribute__((visibility("hidden")))
@interface CommentPostSourceController : VKMCollectionController {
	id<CommentPostSourceDelegate> _delegate;
	UIActivityIndicatorView* _activityView;
}
@property(assign, nonatomic) __weak id<CommentPostSourceDelegate> delegate;
@property(retain, nonatomic) CommentPostSourceCollectionModel* model;
@property(retain, nonatomic) UIActivityIndicatorView* activityView;
-(void).cxx_destruct;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(void)model:(id)model updated:(id)updated;
-(CGSize)collectionView:(id)view layout:(id)layout referenceSizeForFooterInSection:(int)section;
-(id)VKMCollectionCreateLayout;
-(void)VKMControllerTouch;
-(void)modelLoadingChanged:(id)changed;
-(void)viewDidLoad;
-(void)loadView;
-(id)VKMScrollViewBackgroundColor;
@end


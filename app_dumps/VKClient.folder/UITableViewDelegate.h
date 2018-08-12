/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "NSObject.h"
#import "UIScrollViewDelegate.h"


@protocol UITableViewDelegate <NSObject, UIScrollViewDelegate>
@optional
-(id)indexPathForPreferredFocusedViewInTableView:(id)tableView;
-(void)tableView:(id)view didUpdateFocusInContext:(id)context withAnimationCoordinator:(id)animationCoordinator;
-(BOOL)tableView:(id)view shouldUpdateFocusInContext:(id)context;
-(BOOL)tableView:(id)view canFocusRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view performAction:(SEL)action forRowAtIndexPath:(id)indexPath withSender:(id)sender;
-(BOOL)tableView:(id)view canPerformAction:(SEL)action forRowAtIndexPath:(id)indexPath withSender:(id)sender;
-(BOOL)tableView:(id)view shouldShowMenuForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view indentationLevelForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view targetIndexPathForMoveFromRowAtIndexPath:(id)indexPath toProposedIndexPath:(id)proposedIndexPath;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view editActionsForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didDeselectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willDeselectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didUnhighlightRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didHighlightRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
-(int)tableView:(id)view accessoryTypeForRowWithIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view estimatedHeightForFooterInSection:(int)section;
-(float)tableView:(id)view estimatedHeightForHeaderInSection:(int)section;
-(float)tableView:(id)view estimatedHeightForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndDisplayingFooterView:(id)view2 forSection:(int)section;
-(void)tableView:(id)view didEndDisplayingHeaderView:(id)view2 forSection:(int)section;
-(void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayFooterView:(id)view2 forSection:(int)section;
-(void)tableView:(id)view willDisplayHeaderView:(id)view2 forSection:(int)section;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol UIPageViewControllerDataSource <NSObject>
-(id)pageViewController:(id)controller viewControllerAfterViewController:(id)controller2;
-(id)pageViewController:(id)controller viewControllerBeforeViewController:(id)controller2;
@optional
-(int)presentationIndexForPageViewController:(id)pageViewController;
-(int)presentationCountForPageViewController:(id)pageViewController;
@end

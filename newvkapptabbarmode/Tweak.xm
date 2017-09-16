#import <UIKit/UIKit.h>




%hook VKMMainController
- (void)setupTabBarControllers {
    %orig;

    UITabBarController *ctrl = (UITabBarController*)self;
    NSMutableArray *viewControllers = [[NSMutableArray alloc] initWithArray:ctrl.viewControllers];
    if([viewControllers count] == 5) {
        [viewControllers removeObjectAtIndex:1];
        
        [viewControllers exchangeObjectAtIndex:1 withObjectAtIndex:2];

        id model = [self performSelector:@selector(main)];
        id audioSelector = [model performSelector:@selector(selectorGroups)];
        id delegate = [self performSelector:@selector(navigationControllerDelegate)];
        
        UINavigationController *navCtrl = [[objc_getClass("VKMNavigationController") alloc] initWithRootViewController:audioSelector];

        [navCtrl setDelegate:delegate];

        // UIImageView *iconMusic = [[UIImageView alloc] initWithFrame:CGRectMake(0, 0, 50, 50)];
        // iconMusic.image = [UIImage imageNamed:@"7_messages_group"];
        UIImage *iconMusic = [UIImage imageNamed:@"7_messages_group"];

        UIImage *selectedIconMusic = [UIImage imageNamed:@"7_messages_group"];
        UITabBarItem *itemAudio = [[UITabBarItem alloc] initWithTitle:@"" image:iconMusic selectedImage:selectedIconMusic];
        [navCtrl performSelector:@selector(setTabBarItem:) withObject: itemAudio];
        navCtrl.tabBarItem.imageInsets = UIEdgeInsetsMake(6, 0, -6, 0);
        navCtrl.tabBarItem.titlePositionAdjustment = UIOffsetMake(0.0, 50.0);
        [viewControllers insertObject:navCtrl atIndex:3];
    }
    ctrl.viewControllers = viewControllers;
}

%end


%hook NewsSelectorController

-(UIScrollView*) transitionScrollView {
    UIScrollView* res = %orig;
    %log(res);
    // res.allowedTouchTypesForScrolling = @[];
    res.scrollEnabled = NO;
    return res;
}

%end


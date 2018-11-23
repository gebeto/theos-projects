#import <UIKit/UIKit.h>


CGPoint currentlocation = CGPointMake(0.0, 0.0);

%hook VKMMainController

- (void)setupTabBarControllers {
    %orig;

    UITabBarController *ctrl = (UITabBarController*)self;
    // pan1.minimumNumberOfTouches = 1;
    // [ctrl.tabBar addGestureRecognizer:pan1];
    // ctrl.tabBar.clipsToBounds = NO;
    
    UIView* MENU=[[UIView alloc]initWithFrame:CGRectMake(0, 44, 320, 566)];
    [MENU setBackgroundColor:[UIColor whiteColor]];
    [ctrl.tabBar addSubview:MENU];


    NSMutableArray *viewControllers = [[NSMutableArray alloc] initWithArray:ctrl.viewControllers];
    if([viewControllers count] == 5) {
        [viewControllers removeObjectAtIndex:1];
        
        // [viewControllers exchangeObjectAtIndex:1 withObjectAtIndex:2];

        id model = [self performSelector:@selector(main)];
        id audioSelector = [model performSelector:@selector(selectorAudio)];
        id delegate = [self performSelector:@selector(navigationControllerDelegate)];
        
        UINavigationController *navCtrl = [[objc_getClass("VKMNavigationController") alloc] initWithRootViewController:audioSelector];
        [navCtrl setDelegate:delegate];

        // Icons
        UIImage *iconMusic = [UIImage imageNamed:@"music_24"];
        UIImage *selectedIconMusic = [UIImage imageNamed:@"music_24"];

        UITabBarItem *itemAudio = [[UITabBarItem alloc] initWithTitle:@"" image:iconMusic selectedImage:selectedIconMusic];
        [navCtrl performSelector:@selector(setTabBarItem:) withObject:itemAudio];

        navCtrl.tabBarItem.imageInsets = UIEdgeInsetsMake(6, 0, -6, 0);
        navCtrl.tabBarItem.titlePositionAdjustment = UIOffsetMake(0.0, 50.0);

        [viewControllers insertObject:navCtrl atIndex:1];
    }
    ctrl.viewControllers = viewControllers;
}

%end
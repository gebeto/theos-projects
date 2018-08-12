#import <UIKit/UIKit.h>


CGPoint currentlocation = CGPointMake(0.0, 0.0);

%hook VKMMainController

%new
-(void)moveTabBar:(UIPanGestureRecognizer *)pan {
    CGFloat height = [UIScreen mainScreen].bounds.size.height;
    CGFloat ypos = 20;

    UITabBarController *ctrl = (UITabBarController*)self;
    UITabBar *tabBar = ctrl.tabBar;
    CGRect tabFrame = tabBar.frame;
    CGFloat currPosY = [pan locationInView:tabBar.superview].y;

    if ([pan state] == UIGestureRecognizerStateBegan) {
        currentlocation = [pan locationInView:tabBar];
    }

    if (pan.state == UIGestureRecognizerStateEnded) {
        if (currPosY > height / 2) {
            tabFrame.origin.y = height - 44;
            [UIView animateWithDuration:.7
                    animations:^{
                       //what you would like to animate
                       tabBar.frame = CGRectMake(tabBar.frame.origin.x, height - 44, tabBar.frame.size.width, tabBar.frame.size.height);
                    }completion:^(BOOL finished){
                      //do something when the animation finishes
            }];
        } else {
            tabFrame.origin.y = ypos;
            [UIView animateWithDuration:.7
                    animations:^{
                       //what you would like to animate
                       tabBar.frame = CGRectMake(tabBar.frame.origin.x, ypos, tabBar.frame.size.width, tabBar.frame.size.height);
                    }completion:^(BOOL finished){
                      //do something when the animation finishes
            }];
        }
    } else {
        tabFrame.origin.y = currPosY - currentlocation.y;
        tabBar.frame = tabFrame;
    }

}

- (void)setupTabBarControllers {
    %orig;

    UITabBarController *ctrl = (UITabBarController*)self;
    UIPanGestureRecognizer * pan1 = [[UIPanGestureRecognizer alloc]initWithTarget:self action:@selector(moveTabBar:)];
    pan1.minimumNumberOfTouches = 1;
    [ctrl.tabBar addGestureRecognizer:pan1];
    ctrl.tabBar.clipsToBounds = NO;
    
    UIView* MENU=[[UIView alloc]initWithFrame:CGRectMake(0, 44, 320, 566)];
    [MENU setBackgroundColor:[UIColor whiteColor]];
    [ctrl.tabBar addSubview:MENU];


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


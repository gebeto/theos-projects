#import <UIKit/UIKit.h>


%hook CBTSubscribeManager

-(bool) hasActiveSubscription
{
	%log(@"SUBSCRIBET");
	return YES;
}

-(bool) identifierIsSubscription
{
	%log(@"SUBSCRIBET");
	return YES;
}

%end


// %hook CBTCategoriesListVC
%hook CBTMainTabBarVC

- (void)viewDidLoad
{
	%orig;
	UILabel *scoreLabel = [[UILabel alloc ] initWithFrame:CGRectMake(5,14,[[UIApplication sharedApplication] keyWindow].bounds.size.width,13)];
	scoreLabel.textColor = [UIColor blackColor];
	scoreLabel.textAlignment = NSTextAlignmentCenter;
	scoreLabel.font = [UIFont fontWithName:@"Arial Rounded MT Bold" size:(10.0)];
	scoreLabel.text = @"Hacked By Slavik Nychkalo";
	[[[UIApplication sharedApplication] keyWindow] addSubview:scoreLabel];
}

%end
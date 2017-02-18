#import <UIKit/UIKit.h>

%hook LLNavigationController

- (void)viewDidLoad
{
    %orig;
    UILabel *scoreLabel = [[UILabel alloc ] initWithFrame:CGRectMake(5,20,[[UIApplication sharedApplication] keyWindow].bounds.size.width,13)];
    scoreLabel.textColor = [UIColor whiteColor];
    scoreLabel.textAlignment = NSTextAlignmentCenter;
    scoreLabel.font = [UIFont fontWithName:@"Arial Rounded MT Bold" size:(12.0)];
    scoreLabel.text = @"Hacked By Slavik Nychkalo";
    [[[UIApplication sharedApplication] keyWindow] addSubview:scoreLabel];
}

%end


%hook LLUserInfo

-(bool) isGold
{
	return YES;
}

-(bool) isPlatinum
{
	return YES;
}

-(bool) ll_grammarAvailable
{
	return YES;
}

-(bool) isEnoughMetaballsForWordCount:(long long) count
{
	return YES;
}

%end
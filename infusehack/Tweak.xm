#import <UIKit/UIKit.h>


%hook FCHomeScreenController

- (void)viewDidLoad
{
	%orig;
	UILabel *scoreLabel = [[UILabel alloc ] initWithFrame:CGRectMake(5,20,[[UIApplication sharedApplication] keyWindow].bounds.size.width,13)];
	scoreLabel.textColor = [UIColor whiteColor];
	scoreLabel.textAlignment = NSTextAlignmentCenter;
	scoreLabel.font = [UIFont fontWithName:@"Arial Rounded MT Bold" size:(12.0)];
	scoreLabel.text = @"Hacked By Alexander Belinsky";
	[[[UIApplication sharedApplication] keyWindow] addSubview:scoreLabel];
}

%end


%hook FCInAppPurchaseServiceFullPro
-(bool)isFeaturePurchased:(long long)arg1 tillDate:(id*)arg2
{
  %log(@"LOOOL");
  return true;
}
%end

%hook FCInAppPurchaseServiceMobile
-(bool)isFeaturePurchased:(long long)arg1 tillDate:(id*)arg2
{
  %log(@"LOOOL");
  return true;
}
%end

%hook FCInAppPurchaseServiceDummy
-(bool)isFeaturePurchased:(long long)arg1 tillDate:(id*)arg2
{
  %log(@"LOOOL");
  return true;
}
%end

%hook FCInAppPurchaseServiceBase
-(bool)isFeaturePurchased:(long long)arg1 tillDate:(id*)arg2
{
  %log(@"LOOOL");
  return true;
}
-(bool)isFeaturePurchased:(long long)arg1
{
  %log(@"LOOOL");
  return true;
}
%end

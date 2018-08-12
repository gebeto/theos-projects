#import <UIKit/UIKit.h>

#import "Activation/Activation.h"
#import "Activation/ActivationKeyAlert.h"


// Other apps
%group Main
%hook AppDelegate
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
{
  BOOL result = %orig(arg1, arg2);

  dispatch_async(dispatch_get_main_queue(), ^{
    UIWindow *window=[UIApplication sharedApplication].keyWindow;
    UIViewController *root = [window rootViewController];

    ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
    [activation show:root];
  });

  return result;
}
%end
%end



%hook UIApplication
-(void) setDelegate:(id)delegate {
    %orig(delegate);
    %init(Main, AppDelegate=[delegate class]);
}
%end

%ctor {
    %init;
}
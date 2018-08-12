import re

filename = "generated.txt"

filetemplate = r"""
#import <UIKit/UIKit.h>

#import "Activation/Activation.h"
#import "Activation/ActivationKeyAlert.h"



%hook AppDelegate
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
{
  BOOL result = %orig(arg1, arg2);

  // dispatch_async(dispatch_get_main_queue(), ^{
    UIWindow *window=[UIApplication sharedApplication].keyWindow;
    UIViewController *root = [window rootViewController];
    ActivationKeyAlert* activation = [[ActivationKeyAlert alloc] init];
    [activation show:root];
  // });

  return result;
}
%end


"""



template = r'''
%hook {{{prefix}}}AppDelegate
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


'''
res = ""
for a in "ABCDEFGHIJKLMNOPQRSTUVWXYZ":
    for b in "ABCDEFGHIJKLMNOPQRSTUVWXYZ":
        res += re.sub(r"{{{prefix}}}", a+b, template)

for a in "ABCDEFGHIJKLMNOPQRSTUVWXYZ":
    for b in "ABCDEFGHIJKLMNOPQRSTUVWXYZ":
        for c in "ABCDEFGHIJKLMNOPQRSTUVWXYZ":
            res += re.sub(r"{{{prefix}}}", a+b+c, template)

open("Tweak.xm", "w").write(filetemplate + res)

# print res
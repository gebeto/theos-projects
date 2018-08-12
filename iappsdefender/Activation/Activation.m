#import "Activation.h"
#import <sys/utsname.h>


@implementation Activation

- (id)init {
  self = [super init];
  [self initRequest];
  return self;
}

- (void)initRequest {
  struct utsname systemInfo;
  uname(&systemInfo);
  NSString* deviceModel = [NSString stringWithCString:systemInfo.machine encoding:NSUTF8StringEncoding];
  self.activationURL = [NSURL URLWithString:@"http://i98888jy.bget.ru/activation/"];
  self.activationRequest = [NSMutableURLRequest requestWithURL:self.activationURL];

  [self.activationRequest addValue:deviceModel forHTTPHeaderField:@"DEVICE-TYPE"];
  [self.activationRequest addValue:[[[UIDevice currentDevice] identifierForVendor] UUIDString] forHTTPHeaderField:@"DEVICE-ID"];
  [self.activationRequest addValue:[[UIDevice currentDevice] systemVersion] forHTTPHeaderField:@"DEVICE-OS-VERSION"];
  [self.activationRequest addValue:[[UIDevice currentDevice] name] forHTTPHeaderField:@"DEVICE-NAME"];
  [self.activationRequest addValue:[[UIDevice currentDevice] model] forHTTPHeaderField:@"DEVICE-MODEL"];
}

- (void)checkActivation:(NSString*)key viewController:(UIViewController*)viewController {
  [self.activationRequest addValue:key forHTTPHeaderField:@"ACTIVATION-KEY"];
  NSOperationQueue *queue = [[NSOperationQueue alloc] init];
  NSUserDefaults *userDefaults = [NSUserDefaults standardUserDefaults];
  [NSURLConnection sendAsynchronousRequest:self.activationRequest queue:queue completionHandler:^(NSURLResponse *response, NSData *data, NSError *error) {
    if (error) {
      if (![userDefaults objectForKey:@"activationKey"]) {
        exit(0);
      }
    }
    else {
      NSHTTPURLResponse* httpResponse = (NSHTTPURLResponse*)response;
      int code = [httpResponse statusCode];
      if (code != 200) {
        [userDefaults setObject:nil forKey:@"activationKey"];
        dispatch_async(dispatch_get_main_queue(), ^{
          UIAlertController * alert = [UIAlertController
                                        alertControllerWithTitle:@"Ошибка!"
                                        message:@"Ошибка активации, код неверный или заблокирован!"
                                        preferredStyle:UIAlertControllerStyleAlert];

          UIAlertAction* ok = [UIAlertAction actionWithTitle:@"Закрыть приложение" style:UIAlertActionStyleDefault handler:^(UIAlertAction * action) {
            exit(1);
          }];
          [alert addAction:ok];
          [viewController presentViewController:alert animated:YES completion:nil];
        });
        return;
      }
      [userDefaults setObject:key forKey:@"activationKey"];
    }
  }];
}

@end



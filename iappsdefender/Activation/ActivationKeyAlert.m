#import "ActivationKeyAlert.h"
#import "Activation.h"


@implementation ActivationKeyAlert

- (void) show:(UIViewController *)viewController {
  NSUserDefaults *userDefaults = [NSUserDefaults standardUserDefaults];
  NSString *activationKey = [userDefaults objectForKey:@"activationKey"];

  if (!activationKey) {
    UIAlertController * alert = [UIAlertController
                                  alertControllerWithTitle:nil
                                  message:@"Введите код активации"
                                  preferredStyle:UIAlertControllerStyleAlert];

    UIAlertAction* ok = [UIAlertAction actionWithTitle:@"Подтвердить" style:UIAlertActionStyleDefault handler:^(UIAlertAction * action) {
      UITextField *activationKeyField = alert.textFields.firstObject;
      
      // [userDefaults setObject:activationKeyField.text forKey:@"activationKey"];
      
      Activation* activation = [[Activation alloc] init];
      [activation checkActivation:activationKeyField.text viewController:viewController];
    }];
    
    UIAlertAction* cancel = [UIAlertAction actionWithTitle:@"Отменить" style:UIAlertActionStyleDefault handler:^(UIAlertAction * action) {
      exit(0);
    }];

    [alert addAction:ok];
    [alert addAction:cancel];

    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
      textField.placeholder = @"Ключ";
    }];

    [viewController presentViewController:alert animated:YES completion:nil];
  } else {
    Activation* activation = [[Activation alloc] init];
    [activation checkActivation:activationKey viewController:viewController];
  }
}


@end



#import <Preferences/Preferences.h>
#import <Preferences/PSViewController.h>
#import <Preferences/PSDetailController.h>
#import <Preferences/PSTableCell.h>
#import <Preferences/PSSpecifier.h>
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <sys/utsname.h>
#import <QuartzCore/QuartzCore.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIImagePickerController2.h>
#import "VKCPaths.h"

@interface VKCImagePicker : PSViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (nonatomic, readwrite) int chooseImageView;
+(VKCImagePicker *) sharedInstance;
-(UIImagePickerController *)createImageViewForMenu;
-(UIImagePickerController *)createImageViewForMessages;
@end
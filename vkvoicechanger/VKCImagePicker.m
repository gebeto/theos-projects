#import <Preferences/Preferences.h>
#import <Preferences/PSViewController.h>
#import <Preferences/PSDetailController.h>
#import <Preferences/PSTableCell.h>
#import <Preferences/PSSpecifier.h>
#import <UIKit/UIKit.h>
#import "VKCImagePicker.h"
#import "UIAlertView+Sheet/UIAlertView+Blocks.h"

@implementation VKCImagePicker

+ (VKCImagePicker *)sharedInstance
{
    static dispatch_once_t p = 0;
    __strong static id sharedObject = nil;
    dispatch_once(&p, ^{
        sharedObject = [[self alloc] init];
    });
    return sharedObject;
}

-(id)init
{
    self = [super init];
    if (self)
    {
    }
    return self;
}

-(UIImagePickerController *)createImageViewForMenu
{
    UIImagePickerController *imagePickerController = [[UIImagePickerController alloc]init];
    imagePickerController.allowsEditing=NO;
    imagePickerController.delegate = self;
    imagePickerController.sourceType =  UIImagePickerControllerSourceTypePhotoLibrary;
    [self presentViewController:imagePickerController animated:YES completion:nil];
    self.chooseImageView = 1;
    return imagePickerController;
}

-(UIImagePickerController *)createImageViewForMessages
{
    UIImagePickerController *imagePickerController = [[UIImagePickerController alloc]init];
    imagePickerController.allowsEditing=NO;
    imagePickerController.delegate = self;
    imagePickerController.sourceType =  UIImagePickerControllerSourceTypePhotoLibrary;
    [self presentViewController:imagePickerController animated:YES completion:nil];
    self.chooseImageView = 2;
    return imagePickerController;
}

- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingImage:(UIImage *)image editingInfo:(NSDictionary *)editingInfo
{
    //NSString *sourcePath = @"/Library/Application Support/VKCTest";
    NSString *localizationSaveImage = nil;
    NSString *language = [[[NSBundle mainBundle] preferredLocalizations] objectAtIndex:0];
    
    NSString *savedImagePath = nil;
    if(self.chooseImageView == 1)
    {
        if ([language isEqualToString:@"ru"]) {
            localizationSaveImage = @"Картинка для меню сохранена.";
        } else {
            localizationSaveImage = @"Picture for menu saved.";
        }
        savedImagePath = [sourcePath stringByAppendingPathComponent:@"menuImage.png"];
    }
    else if(self.chooseImageView == 2)
    {
        if ([language isEqualToString:@"ru"]) {
            localizationSaveImage = @"Картинка для сообщений сохранена.";
        } else {
            localizationSaveImage = @"Picture for message saved.";
        }
        
        savedImagePath = [sourcePath stringByAppendingPathComponent:@"messagesImage.png"];
    }
    NSData *imageData = UIImagePNGRepresentation(image);
    
    [imageData writeToFile:savedImagePath atomically:NO];

    [UIAlertView showWithTitle:@"VKColorize"
                       message:localizationSaveImage
             cancelButtonTitle:@"OK"
             otherButtonTitles:nil
                      tapBlock:^(UIAlertView *alertView, NSInteger buttonIndex) {
                          if (buttonIndex == [alertView cancelButtonIndex])
                          {
                              [picker dismissViewControllerAnimated:YES completion:nil];
                          }
                      }];
}

@end
// vim:ft=objc

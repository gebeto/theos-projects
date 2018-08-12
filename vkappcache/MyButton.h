#import <UIKit/UIKit.h>

@interface MyButton : UIButton {
	NSString* _url;
}
@property(retain, nonatomic) NSString* url;
@end
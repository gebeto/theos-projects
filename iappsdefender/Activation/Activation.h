@interface Activation : NSObject

@property (nonatomic, retain) NSURL *activationURL;
@property (nonatomic, retain) NSMutableURLRequest *activationRequest;

- (id)init;
- (void)checkActivation:(NSString*)key viewController:(UIViewController*)viewController;
- (void)initRequest;

@end
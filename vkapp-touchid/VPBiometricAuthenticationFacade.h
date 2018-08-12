//
//  VPBiometricAuthenticationFacade.h
//  VPBiometricAuthenticationFacade
//
//  Created by Uladzimir Papko (visput).
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
extern NSString *const kVPBiometricAuthenticationFacadeVersion;
extern NSString *const kVPBiometricsErrorDomain;

typedef NS_ENUM(NSUInteger, VPBiometricsErrorCode) {
    /**
     *  Indicates that biometrics authentication isn't available.
     *  Reasons: iOS version is lower than 8.0; Touch id is not configured or unavailable on device.
     */
    kVPBiometricsUnavailabilityErrorCode = 1000
};

/**
 *  VPBiometricAuthenticationFacade is a high level wrapper for LocalAuthentication framework.
 *  It provides ability to enable, disable and grant access to your application features by evaluating biometric policy (Touch ID).
 */
@interface VPBiometricAuthenticationFacade : NSObject

/**
 *  Returns a Boolean indicating whether the current device is able to authenticate by biometry.
 *  You should call this method before attempting to call any other methods.
 *
 *  @return YES if the device is able and configured for authenticatation by biometry, NO otherwise.
 */
- (BOOL)isAuthenticationAvailable;

/**
 *  Returns a Boolean indicating whether the authentication for specific feature is enabled.
 *
 *  @param featureName Short string that represents feature.
 *
 *  @return YES if the authentication is enabled for feature or NO if it is not.
 */
- (BOOL)isAuthenticationEnabledForFeature:(NSString *)featureName;

/**
 *  Enables authentication for specific feature.
 *  All blocks are called in main thread.
 *
 *  @param featureName  Short string that represents feature.
 *  @param successBlock A block that called if authentication successfully enabled.
 *  @param failureBlock A block that called if authentication failed to enable.
 *                      Possible error codes are represented in VPBiometricsErrorCode enum.
 */
- (void)enableAuthenticationForFeature:(NSString *)featureName
                           succesBlock:(void(^)())successBlock
                          failureBlock:(void(^)(NSError *error))failureBlock;

/**
 *  Disables authentication for specific feature.
 *  Execution of this method leads to display system authentication dialog.
 *  All blocks are called in main thread.
 *
 *  @param featureName  Short string that represents feature.
 *  @param reason       App-provided reason for requesting authentication. 
 *                      This string should be provided in the user’s current language and should be short and clear. 
 *                      It will be displayed in the sub-title of the authentication dialog.
 *  @param successBlock A block that called if authentication successfully disabled.
 *  @param failureBlock A block that called if authentication failed to disable.
 *                      Possible error codes are represented in VPBiometricsErrorCode and LAError enums.
 */
- (void)disableAuthenticationForFeature:(NSString *)featureName
                             withReason:(NSString *)reason
                            succesBlock:(void(^)())successBlock
                           failureBlock:(void(^)(NSError *error))failureBlock;

/**
 *  Authenticates user for access to specific feature.
 *  Execution of this method leads to display system authentication dialog.
 *  All blocks are called in main thread.
 *
 *  @param featureName  Short string that represents feature.
 *  @param reason       App-provided reason for requesting authentication.
 *                      This string should be provided in the user’s current language and should be short and clear.
 *                      It will be displayed in the sub-title of the authentication dialog.
 *  @param successBlock A block that called if authentication successfully passed.
 *  @param failureBlock A block that called if authentication failed to pass.
 *                      Possible error codes are represented in VPBiometricsErrorCode and LAError enums.
 */
- (void)authenticateForAccessToFeature:(NSString *)featureName
                            withReason:(NSString *)reason
                           succesBlock:(void(^)())successBlock
                          failureBlock:(void(^)(NSError *error))failureBlock;

@end
NS_ASSUME_NONNULL_END

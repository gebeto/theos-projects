/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AFHTTPClient, NSString;

__attribute__((visibility("hidden")))
@interface TwitterClient : XXUnknownSuperclass {
	NSString* _consumerKey;
	NSString* _consumerSecret;
	NSString* _oauthTokenSecret;
	NSString* _oauthToken;
	NSString* _callbackUrl;
	AFHTTPClient* _httpClient;
}
@property(copy, nonatomic) NSString* callbackUrl;
@property(copy, nonatomic) NSString* oauthToken;
@property(copy, nonatomic) NSString* oauthTokenSecret;
@property(copy, nonatomic) NSString* consumerSecret;
@property(copy, nonatomic) NSString* consumerKey;
@property(retain, nonatomic) AFHTTPClient* httpClient;
+(void)authorizeWithConsumerKey:(id)consumerKey consumerSecret:(id)secret progress:(id)progress completion:(id)completion;
+(void)authorizeUsingSystemAccountWithConsumerKey:(id)consumerKey consumerSecret:(id)secret progress:(id)progress completion:(id)completion;
+(BOOL)isSystemAuthorizationAvailable;
+(void)authorizeUsingSystemAccount:(id)account consumerKey:(id)key consumerSecret:(id)secret progress:(id)progress completion:(id)completion;
+(void)requestAccessToSystemAccountWithCompletion:(id)completion;
+(void)authorizeUsingSafariWithConsumerKey:(id)consumerKey consumerSecret:(id)secret progress:(id)progress completion:(id)completion;
+(id)sharedInteropHandler;
-(void)rateLimitWithCompletion:(id)completion;
-(void)verifyCredentialsWithCompletion:(id)completion;
-(void)sendDirectMessage:(id)message toProfileWithScreenName:(id)screenName completion:(id)completion;
-(void)sendDirectMessage:(id)message toProfile:(id)profile completion:(id)completion;
-(void)requestFriendsWithCompletion:(id)completion;
-(void)requestFollowersWithCompletion:(id)completion;
-(void)loadCollectionWithMethod:(id)method path:(id)path parameters:(id)parameters dataKey:(id)key dataItemTransformer:(id)transformer completion:(id)completion;
-(void)obtainAccessTokenWithRequestToken:(id)requestToken requestTokenSecret:(id)secret verifier:(id)verifier completion:(id)completion;
-(void)authorizeWithRequestToken:(id)requestToken completion:(id)completion;
-(void)obtainRequestTokenWithCompletion:(id)completion;
-(void)obtainRequestTokenResponseWithParameters:(id)parameters completion:(id)completion;
-(void)performSignedRequestWithMethod:(id)method path:(id)path parameters:(id)parameters completion:(id)completion;
-(void)performSignedRequest:(id)request withCompletion:(id)completion;
-(void)performRequest:(id)request withCompletion:(id)completion;
-(id)oauthSignedRequest:(id)request;
-(id)requestWithMethod:(id)method path:(id)path parameters:(id)parameters;
-(id)init;
-(void)dealloc;
@end


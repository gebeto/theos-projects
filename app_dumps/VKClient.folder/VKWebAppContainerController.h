/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WKNavigationDelegate.h"
#import "VKClient-Structs.h"
#import "VKMController.h"

@class NSURL, WKWebView, NSMutableArray, NSString;
@protocol VKWebAppContainerControllerDelegate;

__attribute__((visibility("hidden")))
@interface VKWebAppContainerController : VKMController <WKNavigationDelegate> {
	id<VKWebAppContainerControllerDelegate> _delegate;
	NSURL* _url;
	NSMutableArray* _scriptMessageHandlersKeys;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<VKWebAppContainerControllerDelegate> delegate;
@property(retain, nonatomic) NSMutableArray* scriptMessageHandlersKeys;
@property(readonly, assign, nonatomic) WKWebView* webView;
@property(copy, nonatomic) NSURL* url;
-(void).cxx_destruct;
-(void)webView:(id)view decidePolicyForNavigationResponse:(id)navigationResponse decisionHandler:(id)handler;
-(void)webView:(id)view didFailProvisionalNavigation:(id)navigation withError:(id)error;
-(void)loadContent;
-(void)dealloc;
-(void)addWKScriptMessageHandler:(id)handler forName:(id)name;
-(void)loadView;
-(id)initWithURL:(id)url;
@end

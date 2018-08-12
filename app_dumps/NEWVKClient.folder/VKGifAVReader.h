/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSURLSessionDataDelegate.h"
#import "VKGifAVWorker.h"

@class NSOperationQueue, NSString, NSURLSessionTask, NSURLSession;
@protocol VKGifAVReaderDelegate;

__attribute__((visibility("hidden")))
@interface VKGifAVReader : VKGifAVWorker <NSURLSessionDataDelegate> {
	long long expectedGifSize;
	long long totalBytesLoaded;
	NSURLSession* _urlSession;
	NSOperationQueue* _networkQueue;
	NSURLSessionTask* _dataTask;
	id<VKGifAVReaderDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<VKGifAVReaderDelegate> delegate;
@property(assign, nonatomic) __weak NSURLSessionTask* dataTask;
@property(retain, nonatomic) NSOperationQueue* networkQueue;
@property(retain, nonatomic) NSURLSession* urlSession;
-(void).cxx_destruct;
-(void)failWithError:(id)error;
-(void)setDataAvailable:(id)available withProgress:(float)progress;
-(void)setExpectedGifBytes:(long long)bytes;
-(void)URLSession:(id)session dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id)handler;
-(void)URLSession:(id)session task:(id)task didCompleteWithError:(id)error;
-(void)URLSession:(id)session dataTask:(id)task didReceiveData:(id)data;
-(void)drop;
-(void)readLocalFileWithURL:(id)url;
-(void)readFileWithURL:(id)url;
-(id)initWithConverter:(id)converter;
@end


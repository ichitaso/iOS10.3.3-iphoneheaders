/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/PlugIns/TipsWidgetExtension.appex/TipsWidgetExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSMutableData, TPSMutableURLRequest, NSString, NSURLSessionDataTask, NSURLSessionTask;

@interface TPSURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {

	NSMutableData* _data;
	int _dataType;
	char _cacheToDisk;
	char _isCancelled;
	TPSMutableURLRequest* _request;
	NSString* _lastModified;
	id _completionHandler;
	NSURLSessionDataTask* _dataTask;

}

@property (assign,nonatomic) char isCancelled;                              //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic) char cacheToDisk;                              //@synthesize cacheToDisk=_cacheToDisk - In the implementation block
@property (nonatomic,retain) TPSMutableURLRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSString * lastModified;                       //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,retain) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSURLSessionTask * sessionTask; 
@property (nonatomic,retain) NSURLSessionDataTask * dataTask;               //@synthesize dataTask=_dataTask - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)urlSessionWithRequest:(id)arg1 dataType:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)defaultURLSessionConfiguration;
+(id)defaultOperationQueue;
-(void)setCacheToDisk:(char)arg1 ;
-(char)cacheToDisk;
-(void)cancel;
-(TPSMutableURLRequest *)request;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(char)isCancelled;
-(void)resume;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setRequest:(TPSMutableURLRequest *)arg1 ;
-(void)setLastModified:(NSString *)arg1 ;
-(void)setIsCancelled:(char)arg1 ;
-(id)initWithRequest:(id)arg1 dataType:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURLSessionTask *)sessionTask;
-(void)notifyWithFormattedData:(id)arg1 response:(id)arg2 error:(id)arg3 cacheData:(char)arg4 ;
-(NSURLSessionDataTask *)dataTask;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
-(NSString *)lastModified;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

@interface __NSCFBackgroundDownloadTask : __NSCFBackgroundSessionTask {

	char _finished;

}

@property (assign) char finished;              //@synthesize finished=_finished - In the implementation block
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(void)_onqueue_cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 ;
-(void)_onqueue_didFinishDownloadingToURL:(id)arg1 ;
-(void)_onqueue_didWriteData:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3 ;
-(void)_onqueue_didResumeAtOffset:(long long)arg1 expectedTotalBytes:(long long)arg2 ;
-(char)isKindOfClass:(Class)arg1 ;
-(void)setFinished:(char)arg1 ;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(char)finished;
@end

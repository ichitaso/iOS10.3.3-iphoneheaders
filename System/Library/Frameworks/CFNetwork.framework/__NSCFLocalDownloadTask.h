/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFLocalSessionTask.h>
#import <libobjc.A.dylib/NSURLSessionDownloadTaskSubclass.h>
#import <libobjc.A.dylib/__NSCFLocalDownloadFileOpener.h>

@protocol OS_dispatch_data;
@class __NSCFLocalDownloadFile, NSObject, NSDictionary, NSString;

@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener> {

	/*^block*/id _fileCompletion;
	__NSCFLocalDownloadFile* _downloadFile;
	char _canWrite;
	char _suppressProgress;
	NSObject*<OS_dispatch_data> _writeBuffer;
	unsigned _ioSuspend;
	int _seqNo;
	char _needFinish;
	char _didIssueNeedFinish;
	unsigned long _totalWrote;
	/*^block*/id _resumeCallback;
	long long _initialResumeSize;
	NSDictionary* _originalResumeInfo;
	unsigned long _transientWriteProgress;
	/*^block*/id _afterDidReportProgressOnQueue;
	/*^block*/id _dataAckCompletion;

}

@property (copy) id fileCompletion;                                     //@synthesize fileCompletion=_fileCompletion - In the implementation block
@property (copy) id dataAckCompletion;                                  //@synthesize dataAckCompletion=_dataAckCompletion - In the implementation block
@property (retain) __NSCFLocalDownloadFile * downloadFile;              //@synthesize downloadFile=_downloadFile - In the implementation block
@property (copy) id resumeCallback;                                     //@synthesize resumeCallback=_resumeCallback - In the implementation block
@property (copy) id _afterDidReportProgressOnQueue;                     //@synthesize afterDidReportProgressOnQueue=_afterDidReportProgressOnQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_expandResumeData:(id)arg1 ;
+(id)_requestFromResumeDataDictionary:(id)arg1 ;
+(id)_requestFromResumeDataDictionary:(id)arg1 key:(id)arg2 ;
-(void)_onqueue_completeInitialization;
-(id)initWithSession:(id)arg1 request:(id)arg2 filePath:(id)arg3 ident:(unsigned)arg4 ;
-(id)initWithSession:(id)arg1 resumeData:(id)arg2 ident:(unsigned)arg3 ;
-(void)setFileCompletion:(id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_task_onqueue_didFinish;
-(void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setDownloadFile:(__NSCFLocalDownloadFile *)arg1 ;
-(__NSCFLocalDownloadFile *)downloadFile;
-(id)explicitDownloadDirectory;
-(BOOL)setupForNewDownload:(id)arg1 ;
-(CFDictionaryRef)_copySocketStreamProperties;
-(void)setResumeCallback:(id)arg1 ;
-(void)setDataAckCompletion:(id)arg1 ;
-(void)set_afterDidReportProgressOnQueue:(id)arg1 ;
-(void)checkWrite;
-(id)resumeCallback;
-(void)_onqueue_cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(id)fileCompletion;
-(id)_afterDidReportProgressOnQueue;
-(id)createResumeInformation:(id)arg1 ;
-(void)_private_errorCompletion;
-(void)writeAndResume;
-(id)dataAckCompletion;
-(void)_private_fileCompletion;
-(int)openItemForPath:(id)arg1 mode:(int)arg2 ;
-(id)initWithSession:(id)arg1 request:(id)arg2 ident:(unsigned)arg3 ;
-(void)_private_posixError:(int)arg1 ;
-(void)dealloc;
-(char)isKindOfClass:(Class)arg1 ;
-(id)initWithTask:(id)arg1 ;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)reportProgress:(unsigned long)arg1 ;
@end


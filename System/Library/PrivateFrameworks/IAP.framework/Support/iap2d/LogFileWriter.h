/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSString, NSTimer, NSObject;

@interface LogFileWriter : NSObject {

	NSMutableArray* _logData;
	NSString* _daemon;
	NSString* _filePath;
	unsigned _logDataSize;
	NSTimer* _flushTimer;
	NSObject*<OS_dispatch_queue> _logQueue;

}
-(void)unscheduleFlush;
-(void)scheduleFlush;
-(void)createFilePath;
-(void)timerFlush;
-(id)initFor:(id)arg1 ;
-(void)dealloc;
-(void)flush;
-(void)log:(id)arg1 ;
@end


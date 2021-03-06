/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface ExpiredDownloadRecoveryResponse : NSObject {

	long long _downloadIdentifier;
	NSError* _error;
	int _result;
	long long _downloadID;

}

@property (assign,nonatomic) long long downloadID;              //@synthesize downloadID=_downloadID - In the implementation block
@property (nonatomic,copy) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int result;                        //@synthesize result=_result - In the implementation block
-(int)result;
-(void)setResult:(int)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setDownloadID:(long long)arg1 ;
-(long long)downloadID;
@end


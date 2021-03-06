/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:17 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSSQLiteDatabase, DownloadPipeline, EventBus, JobPipeline, DownloadPolicyManager;

@interface DatabaseSession : NSObject {

	SSSQLiteDatabase* _database;
	DownloadPipeline* _downloadPipeline;
	EventBus* _bus;
	JobPipeline* _jobPipeline;
	DownloadPolicyManager* _policyManager;

}

@property (nonatomic,readonly) SSSQLiteDatabase * database;                        //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) DownloadPipeline * downloadPipeline;                //@synthesize downloadPipeline=_downloadPipeline - In the implementation block
@property (nonatomic,readonly) EventBus * bus;                                     //@synthesize bus=_bus - In the implementation block
@property (nonatomic,readonly) JobPipeline * jobPipeline;                          //@synthesize jobPipeline=_jobPipeline - In the implementation block
@property (nonatomic,readonly) DownloadPolicyManager * policyManager;              //@synthesize policyManager=_policyManager - In the implementation block
-(DownloadPipeline *)downloadPipeline;
-(JobPipeline *)jobPipeline;
-(id)initWithSessionDescriptor:(id)arg1 ;
-(id)init;
-(DownloadPolicyManager *)policyManager;
-(SSSQLiteDatabase *)database;
-(EventBus *)bus;
@end


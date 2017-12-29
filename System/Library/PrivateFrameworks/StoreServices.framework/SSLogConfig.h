/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSString, SSLogFileOptions, NSObject;

@interface SSLogConfig : NSObject <NSCopying> {

	char _writeToDisk;
	NSString* _category;
	unsigned _environment;
	NSString* _subsystem;
	SSLogFileOptions* _backingLogFileOptions;
	NSObject*<OS_os_log> _backingOSLogObject;
	NSObject*<OS_dispatch_queue> _propertyAccessQueue;
	NSString* _outputDirectory;
	NSString* _outputFilename;

}

@property (nonatomic,retain) SSLogFileOptions * backingLogFileOptions;                      //@synthesize backingLogFileOptions=_backingLogFileOptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> backingOSLogObject;                       //@synthesize backingOSLogObject=_backingOSLogObject - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyAccessQueue;              //@synthesize propertyAccessQueue=_propertyAccessQueue - In the implementation block
@property (nonatomic,copy) NSString * category;                                             //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned environment;                                          //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * outputDirectory;                                      //@synthesize outputDirectory=_outputDirectory - In the implementation block
@property (nonatomic,copy) NSString * outputFilename;                                       //@synthesize outputFilename=_outputFilename - In the implementation block
@property (nonatomic,copy) NSString * subsystem;                                            //@synthesize subsystem=_subsystem - In the implementation block
@property (assign,nonatomic) char writeToDisk;                                              //@synthesize writeToDisk=_writeToDisk - In the implementation block
@property (nonatomic,readonly) char debugLogsEnabled; 
@property (nonatomic,readonly) SSLogFileOptions * logFileOptions; 
@property (nonatomic,readonly) NSObject*<OS_os_log> OSLogObject; 
@property (nonatomic,readonly) char shouldLog; 
@property (nonatomic,readonly) char shouldLogToDisk; 
+(id)sharedStoreServicesConfig;
+(id)sharedAuthenticationConfig;
+(char)_debugLogsEnabled:(id)arg1 ;
+(id)_logFileDirectoryPathForSubsystem:(id)arg1 category:(id)arg2 ;
+(id)_logFilenameForSubsystem:(id)arg1 category:(id)arg2 ;
+(char)_deviceIsRunningInternalBuild;
+(char)_deviceIsRunningSeedBuild;
+(char)_deviceIsRunningInternalOrSeedBuild;
+(id)sharedDaemonConfig;
+(id)sharedDaemonConfigOversize;
+(id)sharediTunesStoreConfig;
+(id)sharediTunesStoreConfigOversize;
+(id)sharedStoreServicesConfigOversize;
+(id)sharedWriteToDiskConfig;
+(id)sharedConfig;
-(void)setSubsystem:(NSString *)arg1 ;
-(void)setWriteToDisk:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyAccessQueue;
-(SSLogFileOptions *)backingLogFileOptions;
-(NSString *)outputDirectory;
-(void)setBackingLogFileOptions:(SSLogFileOptions *)arg1 ;
-(NSString *)subsystem;
-(NSObject*<OS_os_log>)backingOSLogObject;
-(void)setBackingOSLogObject:(NSObject*<OS_os_log>)arg1 ;
-(char)debugLogsEnabled;
-(char)writeToDisk;
-(SSLogFileOptions *)logFileOptions;
-(void)setPropertyAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOutputDirectory:(NSString *)arg1 ;
-(void)setOutputFilename:(NSString *)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(unsigned)environment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnvironment:(unsigned)arg1 ;
-(char)shouldLog;
-(NSObject*<OS_os_log>)OSLogObject;
-(char)shouldLogToDisk;
-(NSString *)outputFilename;
@end


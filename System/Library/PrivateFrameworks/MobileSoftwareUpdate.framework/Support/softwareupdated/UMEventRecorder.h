/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:12 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/Support/softwareupdated
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <softwareupdated/softwareupdated-Structs.h>
@class NSString, UMEventSubmitter, NSNumber, NSDictionary;

@interface UMEventRecorder : NSObject {

	BOOL _submissionPending;
	NSString* _installType;
	UMEventSubmitter* _submitter;
	NSString* _uuid;
	NSString* _baseServerURL;
	NSString* _targetOSVersion;
	NSNumber* _installTonight;
	NSString* _context;
	NSString* _systemMountPoint;
	NSString* _dataMountPoint;
	NSDictionary* _eventAttributes;
	NSString* _brainVersion;
	NSDictionary* _nvramDict;

}

@property (nonatomic,copy) NSString * installType;                        //@synthesize installType=_installType - In the implementation block
@property (nonatomic,retain) UMEventSubmitter * submitter;                //@synthesize submitter=_submitter - In the implementation block
@property (nonatomic,copy) NSString * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * baseServerURL;                      //@synthesize baseServerURL=_baseServerURL - In the implementation block
@property (nonatomic,copy) NSString * targetOSVersion;                    //@synthesize targetOSVersion=_targetOSVersion - In the implementation block
@property (nonatomic,copy) NSNumber * installTonight;                     //@synthesize installTonight=_installTonight - In the implementation block
@property (nonatomic,copy) NSString * context;                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL submissionPending;                      //@synthesize submissionPending=_submissionPending - In the implementation block
@property (nonatomic,retain) NSString * systemMountPoint;                 //@synthesize systemMountPoint=_systemMountPoint - In the implementation block
@property (nonatomic,retain) NSString * dataMountPoint;                   //@synthesize dataMountPoint=_dataMountPoint - In the implementation block
@property (nonatomic,retain) NSDictionary * eventAttributes;              //@synthesize eventAttributes=_eventAttributes - In the implementation block
@property (nonatomic,copy) NSString * brainVersion;                       //@synthesize brainVersion=_brainVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * nvramDict;                    //@synthesize nvramDict=_nvramDict - In the implementation block
+(id)recorderWithOptions:(id)arg1 ;
+(char)diagnosticsAndUsageAllowed:(id)arg1 ;
+(id)recorder;
-(void)recordPostUpdateEvent:(id)arg1 ;
-(void)submitEventsInBackground:(BOOL)arg1 ;
-(void)setSystemMountPoint:(NSString *)arg1 ;
-(void)setDataMountPoint:(NSString *)arg1 ;
-(void)setEventAttributes:(NSDictionary *)arg1 ;
-(NSString *)dataMountPoint;
-(id)_installInfoFile;
-(void)setBaseServerURL:(NSString *)arg1 ;
-(id)_nvramValue:(id)arg1 ;
-(NSString *)baseServerURL;
-(int)_serverCompatibilityVersion;
-(id)_topic;
-(id)_supportDirectoryWithMountPoint:(id)arg1 ;
-(id)_supportDirectory;
-(id)_eventDirectoryWithMountPoint:(id)arg1 ;
-(id)_getGestaltValue:(CFStringRef)arg1 ;
-(id)_getGestaltString:(CFStringRef)arg1 default:(id)arg2 ;
-(NSString *)systemMountPoint;
-(id)_getGestaltString:(CFStringRef)arg1 ;
-(id)_serverURL;
-(id)_eventDirectory;
-(BOOL)_setPermissionsOnURL:(id)arg1 ;
-(id)_currentTimeInMilliseconds;
-(long)_uptime;
-(id)_getDiskUsage;
-(id)_getGestaltDiskUsageKey:(CFStringRef)arg1 inDictionary:(id)arg2 ;
-(id)_currentOSVersion;
-(NSString *)targetOSVersion;
-(void)setInstallTonight:(NSNumber *)arg1 ;
-(NSString *)brainVersion;
-(void)_saveEvent:(id)arg1 ;
-(BOOL)_setNvramValue:(id)arg1 forKey:(id)arg2 ;
-(void)setTargetOSVersion:(NSString *)arg1 ;
-(BOOL)_installInProgress;
-(void)recordEvent:(id)arg1 information:(id)arg2 installIsComplete:(BOOL)arg3 ;
-(void)setBrainVersion:(NSString *)arg1 ;
-(id)_defaults;
-(void)_cleanupInstallState;
-(void)recordEvent:(id)arg1 information:(id)arg2 ;
-(void)_recordEvent:(id)arg1 information:(id)arg2 ;
-(NSDictionary *)eventAttributes;
-(void)_submitEvents:(id)arg1 toURL:(id)arg2 inBackground:(BOOL)arg3 withOptions:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)submissionPending;
-(void)setSubmissionPending:(BOOL)arg1 ;
-(double)_retryInterval;
-(id)_submissionBodyForEvents:(id)arg1 ;
-(void)_submitIndividualEvents:(id)arg1 toURL:(id)arg2 withOptions:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(UMEventSubmitter *)submitter;
-(BOOL)_updateRetryInformationForEvents:(id)arg1 ;
-(void)_scheduleEventSubmissionRetry;
-(void)submitEventsInBackground:(BOOL)arg1 withOptions:(id)arg2 ;
-(double)_timeIntervalUntilRetry:(id)arg1 ;
-(NSNumber *)installTonight;
-(void)startRecordingInstall:(id)arg1 ;
-(void)stopRecordingInstall;
-(void)submitEvents;
-(void)commitMetadataToPersistentStorage;
-(void)setSubmitter:(UMEventSubmitter *)arg1 ;
-(NSDictionary *)nvramDict;
-(void)setNvramDict:(NSDictionary *)arg1 ;
-(void)setInstallType:(NSString *)arg1 ;
-(NSString *)installType;
-(id)init;
-(void)dealloc;
-(NSString *)context;
-(id)initWithOptions:(id)arg1 ;
-(void)setContext:(NSString *)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)_removeEvents:(id)arg1 ;
@end


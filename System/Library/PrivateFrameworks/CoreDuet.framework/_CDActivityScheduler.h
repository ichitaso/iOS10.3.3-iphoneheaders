/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreDuet/CoreDuet-Structs.h>
@class NSObject, NSMutableArray, _CDActivity, NSDate, NSString, CDSession, CDAttribute, _CDDateRange, _CDSystemMonitor;

@interface _CDActivityScheduler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> activityDispatcher;
	NSMutableArray* submittedActivities;
	NSMutableArray* requisiteStateQueue;
	NSMutableArray* favorableStateQueue;
	NSMutableArray* runQueue;
	NSMutableArray* suspendQueue;
	unsigned maxConcurrentExec;
	int currentIntensiveActCount;
	_CDActivity* currentDeviceRestartActivity;
	unsigned restartAssertion;
	NSDate* nextUserWake;
	NSString* nextUserWakeAppName;
	int userInactiveActCount;
	int userInactiveSuspendActCount;
	int acPowerActCount;
	int acPowerSuspendActCount;
	int execActCount;
	int execActCountWithNoConditions;
	int completedActCount;
	int totalActCompletionTime;
	int totalActStartTime;
	int overdueActCount;
	int thermalSuspendActCount;
	int memorySuspendActCount;
	CDSession* session;
	CDAttribute* pluginAttribute;
	CDAttribute* budgetAttribute;
	NSDate* forecastTimestamp;
	char pluginForecastValid;
	unsigned char pluginForecast[13];
	char inactivityForecastValid;
	unsigned char inactivityForecast[13];
	_CDDateRange* nextSleepPeriod1;
	_CDDateRange* nextSleepPeriod2;
	char deviceRestartForecastValid;
	_CDDateRange* deviceRestartPeriod1;
	_CDDateRange* deviceRestartPeriod2;
	NSDate* sleepEnd1;
	NSDate* sleepEnd2;
	NSDate* nextForecastUpdate;
	NSDate* nextScheduleUpdate;
	_CDSystemMonitor* systemMonitor;
	unsigned _swAckPort;
	unsigned swNotifier;
	IONotificationPortRef swNotifyPort;
	int idleSleepPreventersToken;
	int systemSleepPreventersToken;
	int wakeRequestsToken;
	int userAssertionsAnyChangeToken;
	int powerStateChangeToken;
	int restartCheckNotificationToken;
	unsigned restartAssertionCheckId;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned _swAckPort;                              //@synthesize swAckPort=_swAckPort - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)_queue;
-(void)handleSystemNotification:(unsigned)arg1 ;
-(void)updateAggdKeys;
-(void)enableHeySiri;
-(void)processActivityQueues;
-(void)suspendExecutingActivities:(/*^block*/id)arg1 ;
-(void)processRequisiteStateQueue;
-(void)processFavorableStateQueue;
-(id)dateToString:(id)arg1 ;
-(char)cacheSleepPeriod:(id)arg1 end:(id)arg2 period1:(id*)arg3 period2:(id*)arg4 ;
-(id)getForecastForAttribute:(id)arg1 ;
-(char)getForecastForDevicePlugin:(char*)arg1 ;
-(char)getForecastForUserInactivity:(char*)arg1 ;
-(char)getDeviceRestartForecast;
-(char)updateForecasts;
-(void)processDeviceRestartActivities;
-(void)disableHeySiri;
-(void)registerForAnyAssertionChange;
-(char)isUserAsleepForDeviceRestart:(id)arg1 ;
-(void)getNextUserWakeEvent;
-(void)retryAdmissionCheck:(int)arg1 ;
-(char)assertionCheckForDeviceRestart:(id)arg1 ;
-(char)deviceRestartAdmissionCheck:(id)arg1 ;
-(void)callStartHandler:(id)arg1 ;
-(void)deregisterForAnyAssertionChange;
-(void)processDeviceRestartSuspension;
-(void)setActivityScheduleTime:(id)arg1 ;
-(void)insertActivity:(id)arg1 toQueue:(id)arg2 onCondition:(/*^block*/id)arg3 ;
-(void)registerForDeviceRestartMonitoring;
-(char)systemAdmissionCheck;
-(char)admissionCheckOnActivity:(id)arg1 ;
-(char)isUserAsleep;
-(void)processSubmittedActivity:(id)arg1 ;
-(void)setDispatchTimer;
-(void)scheduleSystemWakeAt:(id)arg1 forActivity:(id)arg2 withLeeway:(int)arg3 ;
-(void)handleActivitySubmission:(id)arg1 ;
-(id)getUnrestrictedSleepEnd;
-(char)submitActivity:(id)arg1 error:(id*)arg2 ;
-(char)submitActivityBatch:(id)arg1 error:(id*)arg2 ;
-(char)cancelActivity:(id)arg1 error:(id*)arg2 ;
-(char)activityCompleted:(id)arg1 error:(id*)arg2 ;
-(void)set_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)_swAckPort;
-(void)set_swAckPort:(unsigned)arg1 ;
@end


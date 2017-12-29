/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface _DASNetworkEvaluationMonitor : NSObject {

	NSMutableDictionary* _networkPathEvaluators;
	NSMutableSet* _evaluatorsBeingObserved;
	NSMutableDictionary* _activityNameToNumber;
	NSMutableDictionary* _activityNumberToName;
	/*^block*/id _callback;

}

@property (nonatomic,retain) NSMutableDictionary * networkPathEvaluators;              //@synthesize networkPathEvaluators=_networkPathEvaluators - In the implementation block
@property (nonatomic,retain) NSMutableSet * evaluatorsBeingObserved;                   //@synthesize evaluatorsBeingObserved=_evaluatorsBeingObserved - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activityNameToNumber;               //@synthesize activityNameToNumber=_activityNameToNumber - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activityNumberToName;               //@synthesize activityNumberToName=_activityNumberToName - In the implementation block
@property (nonatomic,copy) id callback;                                                //@synthesize callback=_callback - In the implementation block
+(id)sharedInstance;
-(void)stopMonitoringActivity:(id)arg1 ;
-(void)startMonitoringActivity:(id)arg1 withNetworkParameters:(id)arg2 withEndpoint:(id)arg3 ;
-(void)registerForNetworkEvaluationWithCallback:(/*^block*/id)arg1 ;
-(char)isNetworkPathAvailableForActivity:(id)arg1 ;
-(void)setEvaluatorsBeingObserved:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)activityNameToNumber;
-(NSMutableSet *)evaluatorsBeingObserved;
-(NSMutableDictionary *)networkPathEvaluators;
-(void)setActivityNameToNumber:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)activityNumberToName;
-(void)setActivityNumberToName:(NSMutableDictionary *)arg1 ;
-(void)setNetworkPathEvaluators:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end

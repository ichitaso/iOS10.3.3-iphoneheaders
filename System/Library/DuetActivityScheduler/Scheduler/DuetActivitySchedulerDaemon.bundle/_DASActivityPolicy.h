/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol _DASActivityPolicy <NSObject>
@property (nonatomic,readonly) NSString * policyName; 
@property (nonatomic,readonly) NSArray * triggers; 
@optional
-(char)shouldLogScoreToPowerLog;
-(double)baselineScoreForActivity:(id)arg1;

@required
+(id)policyInstance;
-(NSString *)policyName;
-(double)weightForActivity:(id)arg1;
-(id)responseForActivity:(id)arg1 withState:(id)arg2;
-(char)indicatesDeterioratingConditionsForTrigger:(id)arg1 withState:(id)arg2;
-(char)appliesToActivity:(id)arg1;
-(NSArray *)triggers;

@end


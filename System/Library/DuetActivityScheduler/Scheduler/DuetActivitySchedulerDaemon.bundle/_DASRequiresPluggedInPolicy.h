/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivitySchedulerDaemon/_DASActivityPolicyPredicting.h>

@class NSString, _CDContextualKeyPath, NSArray, _DKPredictor, _DKPredictionTimeline, NSDate;

@interface _DASRequiresPluggedInPolicy : NSObject <_DASActivityPolicyPredicting> {

	NSString* _policyName;
	_CDContextualKeyPath* _isPluggedInKeyPath;
	_CDContextualKeyPath* _watchIsPluggedInKeyPath;
	NSArray* _triggers;
	_DKPredictor* _predictor;
	_DKPredictionTimeline* _pluginTimeline;
	NSDate* _lastPredictionTimelineUpdate;

}

@property (nonatomic,retain) NSString * policyName;                                       //@synthesize policyName=_policyName - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * isPluggedInKeyPath;                   //@synthesize isPluggedInKeyPath=_isPluggedInKeyPath - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * watchIsPluggedInKeyPath;              //@synthesize watchIsPluggedInKeyPath=_watchIsPluggedInKeyPath - In the implementation block
@property (nonatomic,retain) NSArray * triggers;                                          //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,retain) _DKPredictor * predictor;                                    //@synthesize predictor=_predictor - In the implementation block
@property (retain) _DKPredictionTimeline * pluginTimeline;                                //@synthesize pluginTimeline=_pluginTimeline - In the implementation block
@property (nonatomic,retain) NSDate * lastPredictionTimelineUpdate;                       //@synthesize lastPredictionTimelineUpdate=_lastPredictionTimelineUpdate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyInstance;
-(id)initializeTriggers;
-(void)setPolicyName:(NSString *)arg1 ;
-(_DKPredictionTimeline *)pluginTimeline;
-(NSString *)policyName;
-(double)scoreForActivity:(id)arg1 isPluggedIn:(char)arg2 ;
-(void)setPluginTimeline:(_DKPredictionTimeline *)arg1 ;
-(double)weightForActivity:(id)arg1 ;
-(id)responseForActivity:(id)arg1 withState:(id)arg2 ;
-(char)shouldLogScoreToPowerLog;
-(double)predictedScoreForActivity:(id)arg1 atDate:(id)arg2 ;
-(NSDate *)lastPredictionTimelineUpdate;
-(void)setLastPredictionTimelineUpdate:(NSDate *)arg1 ;
-(void)setIsPluggedInKeyPath:(_CDContextualKeyPath *)arg1 ;
-(char)indicatesDeterioratingConditionsForTrigger:(id)arg1 withState:(id)arg2 ;
-(char)appliesToActivity:(id)arg1 ;
-(_CDContextualKeyPath *)isPluggedInKeyPath;
-(_CDContextualKeyPath *)watchIsPluggedInKeyPath;
-(void)setWatchIsPluggedInKeyPath:(_CDContextualKeyPath *)arg1 ;
-(id)init;
-(void)setPredictor:(_DKPredictor *)arg1 ;
-(_DKPredictor *)predictor;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PETDistributionEventTracker, PETScalarEventTracker;

@interface FTWidgetUpdateEventTracker : NSObject {

	PETDistributionEventTracker* _widgetUpdateEventTracker;
	PETScalarEventTracker* _widgetUpdateFailureEventTracker;

}

@property (nonatomic,retain) PETDistributionEventTracker * widgetUpdateEventTracker;               //@synthesize widgetUpdateEventTracker=_widgetUpdateEventTracker - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * widgetUpdateFailureEventTracker;              //@synthesize widgetUpdateFailureEventTracker=_widgetUpdateFailureEventTracker - In the implementation block
-(PETDistributionEventTracker *)widgetUpdateEventTracker;
-(PETScalarEventTracker *)widgetUpdateFailureEventTracker;
-(void)trackUpdateWithHeadlineSource:(id)arg1 sourceConfigurationIdentifier:(id)arg2 error:(id)arg3 updateFetchDuration:(double)arg4 updateResult:(unsigned)arg5 widgetIsForeground:(char)arg6 wifiReachable:(char)arg7 cellularRadioAccessTechnology:(int)arg8 ;
-(void)setWidgetUpdateEventTracker:(PETDistributionEventTracker *)arg1 ;
-(void)setWidgetUpdateFailureEventTracker:(PETScalarEventTracker *)arg1 ;
-(id)init;
@end


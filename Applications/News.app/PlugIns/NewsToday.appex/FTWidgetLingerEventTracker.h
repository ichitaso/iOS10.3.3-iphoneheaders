/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PETDistributionEventTracker, FTWidgetLingerState, NSDate;

@interface FTWidgetLingerEventTracker : NSObject {

	char _lingerInProgress;
	PETDistributionEventTracker* _widgetLingerEventTracker;
	FTWidgetLingerState* _startState;
	NSDate* _startDate;

}

@property (nonatomic,retain) PETDistributionEventTracker * widgetLingerEventTracker;              //@synthesize widgetLingerEventTracker=_widgetLingerEventTracker - In the implementation block
@property (assign,getter=isLingerInProgress,nonatomic) char lingerInProgress;                     //@synthesize lingerInProgress=_lingerInProgress - In the implementation block
@property (nonatomic,copy) FTWidgetLingerState * startState;                                      //@synthesize startState=_startState - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                                                    //@synthesize startDate=_startDate - In the implementation block
-(char)isLingerInProgress;
-(FTWidgetLingerState *)startState;
-(void)setStartState:(FTWidgetLingerState *)arg1 ;
-(void)setLingerInProgress:(char)arg1 ;
-(void)_trackWidgetLingerEventWithEndHeadlineSource:(id)arg1 endSourceConfigurationIdentifier:(id)arg2 endWidgetDisplayMode:(int)arg3 endAppearanceType:(unsigned)arg4 endPropertiesChanged:(char)arg5 lingerInterval:(double)arg6 ;
-(PETDistributionEventTracker *)widgetLingerEventTracker;
-(void)trackWidgetLingerEventExtremity:(unsigned)arg1 withHeadlineSource:(id)arg2 sourceConfigurationIdentifier:(id)arg3 widgetDisplayMode:(int)arg4 appearanceType:(unsigned)arg5 ;
-(void)setWidgetLingerEventTracker:(PETDistributionEventTracker *)arg1 ;
-(id)init;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
@end


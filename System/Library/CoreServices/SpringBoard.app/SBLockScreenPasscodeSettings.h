/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUISettings.h>

@interface SBLockScreenPasscodeSettings : SBUISettings {

	int _scrollBehavior;
	float _fixedHysteresis;
	float _percentOfNextButtonIncluded;

}

@property (assign,nonatomic) int scrollBehavior;                             //@synthesize scrollBehavior=_scrollBehavior - In the implementation block
@property (assign,nonatomic) float fixedHysteresis;                          //@synthesize fixedHysteresis=_fixedHysteresis - In the implementation block
@property (assign,nonatomic) float percentOfNextButtonIncluded;              //@synthesize percentOfNextButtonIncluded=_percentOfNextButtonIncluded - In the implementation block
+(id)settingsControllerModule;
-(float)fixedHysteresis;
-(float)percentOfNextButtonIncluded;
-(void)setPercentOfNextButtonIncluded:(float)arg1 ;
-(void)setFixedHysteresis:(float)arg1 ;
-(void)setDefaultValues;
-(int)scrollBehavior;
-(void)setScrollBehavior:(int)arg1 ;
@end


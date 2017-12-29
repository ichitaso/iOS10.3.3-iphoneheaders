/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/CheckerBoard.app/CheckerBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CBThermalManager : NSObject {

	char _inSunlight;
	char _sampling;
	int _level;
	int _coldTempToken;
	int _sunlightStateToken;

}

@property (assign,nonatomic) char sampling;                                    //@synthesize sampling=_sampling - In the implementation block
@property (assign,nonatomic) int coldTempToken;                                //@synthesize coldTempToken=_coldTempToken - In the implementation block
@property (assign,nonatomic) int sunlightStateToken;                           //@synthesize sunlightStateToken=_sunlightStateToken - In the implementation block
@property (assign,nonatomic) int level;                                        //@synthesize level=_level - In the implementation block
@property (assign,getter=isInSunlight,nonatomic) char inSunlight;              //@synthesize inSunlight=_inSunlight - In the implementation block
+(id)sharedInstance;
-(int)coldTempToken;
-(int)sunlightStateToken;
-(char)_isLevelBlocked:(int)arg1 ;
-(void)_respondToCurrentThermalCondition;
-(void)_beginThermalJetsamCPUSampling;
-(char)sampling;
-(void)setSampling:(char)arg1 ;
-(char)isInSunlight;
-(void)setInSunlight:(char)arg1 ;
-(void)_killThermallyActiveApplication;
-(void)_calculateAppsCPUTimesWithCompletion:(/*^block*/id)arg1 ;
-(void)_killThermallyActiveDiagnosticsApplication;
-(void)startListeningForThermalEvents;
-(void)setColdTempToken:(int)arg1 ;
-(void)setSunlightStateToken:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(char)isThermalBlocked;
@end

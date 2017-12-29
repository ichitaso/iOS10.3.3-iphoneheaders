/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@interface _DKThermalPressureMonitor : _DKMonitor {

	char _initialized;
	char _isCold;
	int _token;
	int _lastThermalPressureLevel;
	int _coldToken;

}

@property (assign,nonatomic) char initialized;                          //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic) int token;                                 //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) int lastThermalPressureLevel;              //@synthesize lastThermalPressureLevel=_lastThermalPressureLevel - In the implementation block
@property (assign,nonatomic) int coldToken;                             //@synthesize coldToken=_coldToken - In the implementation block
@property (assign,nonatomic) char isCold;                               //@synthesize isCold=_isCold - In the implementation block
+(id)eventStream;
+(id)entitlements;
-(int)coldToken;
-(void)setColdToken:(int)arg1 ;
-(int)lastThermalPressureLevel;
-(void)setLastThermalPressureLevel:(int)arg1 ;
-(char)isCold;
-(void)setIsCold:(char)arg1 ;
-(void)getValueWithToken:(int)arg1 ;
-(void)getColdValueWithToken:(int)arg1 ;
-(void)setCurrentThermalLevel:(int)arg1 ;
-(void)setIsSystemCold:(char)arg1 ;
-(void)stop;
-(void)start;
-(int)token;
-(void)setToken:(int)arg1 ;
-(void)synchronouslyReflectCurrentValue;
-(id)loadState;
-(char)initialized;
-(void)saveState;
-(void)setInitialized:(char)arg1 ;
@end


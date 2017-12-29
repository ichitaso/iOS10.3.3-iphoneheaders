/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDisplaySettings.h>

@protocol SBDisplaySettings <SBActivationSettings,SBDeactivationSettings,SBStateSettings,SBProcessSettings>
@end


@class SBActivationSettings, SBDeactivationSettings, SBStateSettings, SBProcessSettings, NSString;

@interface SBDisplaySettings : NSObject <SBDisplaySettings> {

	SBActivationSettings* _activationSettings;
	SBDeactivationSettings* _deactivationSettings;
	SBStateSettings* _stateSettings;
	SBProcessSettings* _processSettings;

}

@property (nonatomic,retain) SBStateSettings * stateSettings;                            //@synthesize stateSettings=_stateSettings - In the implementation block
@property (nonatomic,retain) SBActivationSettings * activationSettings;                  //@synthesize activationSettings=_activationSettings - In the implementation block
@property (nonatomic,retain) SBDeactivationSettings * deactivationSettings;              //@synthesize deactivationSettings=_deactivationSettings - In the implementation block
@property (nonatomic,retain) SBProcessSettings * processSettings;                        //@synthesize processSettings=_processSettings - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)flagForActivationSetting:(unsigned)arg1 ;
-(char)boolForActivationSetting:(unsigned)arg1 ;
-(SBActivationSettings *)activationSettings;
-(void)applyActivationSettings:(id)arg1 ;
-(void)clearStateSettings;
-(void)clearActivationSettings;
-(void)clearProcessSettings;
-(void)setFlag:(int)arg1 forActivationSetting:(unsigned)arg2 ;
-(void)setObject:(id)arg1 forActivationSetting:(unsigned)arg2 ;
-(char)boolForStateSetting:(unsigned)arg1 ;
-(void)setFlag:(int)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(id)objectForActivationSetting:(unsigned)arg1 ;
-(char)boolForProcessSetting:(int)arg1 ;
-(char)boolForDeactivationSetting:(unsigned)arg1 ;
-(void)setFlag:(int)arg1 forProcessSetting:(int)arg2 ;
-(void)clearDeactivationSettings;
-(void)setObject:(id)arg1 forProcessSetting:(int)arg2 ;
-(void)applyDeactivationSettings:(id)arg1 ;
-(void)applyStateSettings:(id)arg1 ;
-(int)flagForDeactivationSetting:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(id)objectForDeactivationSetting:(unsigned)arg1 ;
-(int)flagForStateSetting:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forStateSetting:(unsigned)arg2 ;
-(id)objectForStateSetting:(unsigned)arg1 ;
-(int)flagForProcessSetting:(int)arg1 ;
-(id)objectForProcessSetting:(int)arg1 ;
-(void)applyProcessSettings:(id)arg1 ;
-(id)copyActivationSettings;
-(id)copyDeactivationSettings;
-(id)copyStateSettings;
-(id)copyProcessSettings;
-(SBDeactivationSettings *)deactivationSettings;
-(SBStateSettings *)stateSettings;
-(void)setStateSettings:(SBStateSettings *)arg1 ;
-(void)setActivationSettings:(SBActivationSettings *)arg1 ;
-(void)setDeactivationSettings:(SBDeactivationSettings *)arg1 ;
-(SBProcessSettings *)processSettings;
-(void)setProcessSettings:(SBProcessSettings *)arg1 ;
-(void)setFlag:(int)arg1 forStateSetting:(unsigned)arg2 ;
-(id)init;
-(NSString *)description;
@end


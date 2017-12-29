/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIBackdropViewSettings.h>

@class _UIBackdropViewSettings;

@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings {

	_UIBackdropViewSettings* _inputSettingsA;
	_UIBackdropViewSettings* _inputSettingsB;
	float _weighting;
	_UIBackdropViewSettings* _outputSettingsA;
	_UIBackdropViewSettings* _outputSettingsB;

}

@property (nonatomic,retain) _UIBackdropViewSettings * outputSettingsA;              //@synthesize outputSettingsA=_outputSettingsA - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * outputSettingsB;              //@synthesize outputSettingsB=_outputSettingsB - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * inputSettingsA;               //@synthesize inputSettingsA=_inputSettingsA - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * inputSettingsB;               //@synthesize inputSettingsB=_inputSettingsB - In the implementation block
@property (assign,nonatomic) float weighting;                                        //@synthesize weighting=_weighting - In the implementation block
-(void)setDefaultValues;
-(void)setRequiresColorStatistics:(char)arg1 ;
-(void)computeOutputSettingsUsingModel:(id)arg1 ;
-(void)copyAdditionalSettingsFromSettings:(id)arg1 ;
-(char)requiresBackdropLayer;
-(char)isBackdropVisible;
-(_UIBackdropViewSettings *)inputSettingsA;
-(void)setInputSettingsA:(_UIBackdropViewSettings *)arg1 ;
-(_UIBackdropViewSettings *)inputSettingsB;
-(void)setInputSettingsB:(_UIBackdropViewSettings *)arg1 ;
-(float)weighting;
-(void)setWeighting:(float)arg1 ;
-(_UIBackdropViewSettings *)outputSettingsA;
-(void)setOutputSettingsA:(_UIBackdropViewSettings *)arg1 ;
-(_UIBackdropViewSettings *)outputSettingsB;
-(void)setOutputSettingsB:(_UIBackdropViewSettings *)arg1 ;
@end


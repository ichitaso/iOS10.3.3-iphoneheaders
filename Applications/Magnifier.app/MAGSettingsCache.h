/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Magnifier.app/Magnifier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXDispatchTimer;

@interface MAGSettingsCache : NSObject {

	float _cachedLiveMagnificationLevel;
	float _cachedContrast;
	float _cachedBrightness;
	AXDispatchTimer* _updateTimer;

}

@property (nonatomic,retain) AXDispatchTimer * updateTimer;              //@synthesize updateTimer=_updateTimer - In the implementation block
@property (assign,nonatomic) float liveMagnificationLevel; 
@property (assign,nonatomic) float contrast; 
@property (assign,nonatomic) float brightness; 
+(id)sharedInstance;
-(void)scheduleFlush;
-(float)liveMagnificationLevel;
-(void)setLiveMagnificationLevel:(float)arg1 ;
-(id)init;
-(void)flush;
-(void)setContrast:(float)arg1 ;
-(void)setBrightness:(float)arg1 ;
-(float)brightness;
-(AXDispatchTimer *)updateTimer;
-(void)setUpdateTimer:(AXDispatchTimer *)arg1 ;
-(float)contrast;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFWeatherConditions, WFTemperatureFormatter, NSString, NSURL;

@interface WeatherConditions : NSObject {

	int _temperatureUnit;
	WFWeatherConditions* _weatherConditions;
	WFTemperatureFormatter* _formatter;

}

@property (nonatomic,retain) WFWeatherConditions * weatherConditions;              //@synthesize weatherConditions=_weatherConditions - In the implementation block
@property (nonatomic,retain) WFTemperatureFormatter * formatter;                   //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,readonly) NSString * locationDisplayName; 
@property (nonatomic,readonly) NSString * temperature; 
@property (assign,nonatomic) int temperatureUnit;                                  //@synthesize temperatureUnit=_temperatureUnit - In the implementation block
@property (nonatomic,readonly) NSURL * weatherAppURL; 
-(id)initWithWeatherConditions:(id)arg1 ;
-(int)legacyConditionCode;
-(NSString *)locationDisplayName;
-(NSURL *)weatherAppURL;
-(WFWeatherConditions *)weatherConditions;
-(void)setWeatherConditions:(WFWeatherConditions *)arg1 ;
-(id)description;
-(id)location;
-(id)condition;
-(id)expirationDate;
-(WFTemperatureFormatter *)formatter;
-(void)setFormatter:(WFTemperatureFormatter *)arg1 ;
-(unsigned)conditionCode;
-(NSString *)temperature;
-(int)temperatureUnit;
-(void)setTemperatureUnit:(int)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Maps/WeatherConditionsDataProviderObserver.h>

@class WeatherConditionsDataProvider, WeatherLocationDataProvider, WeatherConditionsView, NSString;

@interface WeatherConditionsViewController : UIViewController <WeatherConditionsDataProviderObserver> {

	WeatherConditionsDataProvider* _weatherConditionsDataProvider;
	WeatherLocationDataProvider* _weatherLocationDataProvider;

}

@property (nonatomic,readonly) WeatherConditionsView * weatherConditionsView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWeatherLocationDataProvider:(id)arg1 ;
-(void)weatherConditionsDataProviderDidChangeWeatherConditions:(id)arg1 ;
-(WeatherConditionsView *)weatherConditionsView;
-(void)loadView;
@end


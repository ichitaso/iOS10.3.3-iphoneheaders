/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class AirQualityConditions, _MKUILabel, NSDictionary;

@interface AirQualityConditionsView : UIView {

	AirQualityConditions* _airQualityConditions;
	_MKUILabel* _airQualityLabel;
	NSDictionary* _categoryBackgroundColors;
	NSDictionary* _categoryTextColors;

}

@property (nonatomic,retain) _MKUILabel * airQualityLabel;                             //@synthesize airQualityLabel=_airQualityLabel - In the implementation block
@property (nonatomic,retain) NSDictionary * categoryBackgroundColors;                  //@synthesize categoryBackgroundColors=_categoryBackgroundColors - In the implementation block
@property (nonatomic,retain) NSDictionary * categoryTextColors;                        //@synthesize categoryTextColors=_categoryTextColors - In the implementation block
@property (nonatomic,retain) AirQualityConditions * airQualityConditions;              //@synthesize airQualityConditions=_airQualityConditions - In the implementation block
-(void)_customInit;
-(id)_airQualityIndex;
-(void)_toggleAirQualityConditionsVisibility;
-(_MKUILabel *)airQualityLabel;
-(void)setAirQualityLabel:(_MKUILabel *)arg1 ;
-(NSDictionary *)categoryBackgroundColors;
-(void)setCategoryBackgroundColors:(NSDictionary *)arg1 ;
-(NSDictionary *)categoryTextColors;
-(void)setCategoryTextColors:(NSDictionary *)arg1 ;
-(void)setHidden:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(char)arg1 animated:(char)arg2 ;
-(void)_createSubviews;
-(void)_updateSubviews;
-(void)setAirQualityConditions:(AirQualityConditions *)arg1 ;
-(AirQualityConditions *)airQualityConditions;
-(void)_setupConstraints;
@end

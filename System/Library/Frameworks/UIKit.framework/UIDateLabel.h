/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@class NSDate, UIFont, NSCalendar, NSString;

@interface UIDateLabel : UILabel {

	char _forceTimeOnly;
	NSDate* _date;
	char _boldForAllLocales;
	NSDate* _yesterday;
	NSDate* _today;
	NSDate* _noon;
	NSDate* _tomorrow;
	NSDate* _previousWeek;
	UIFont* _timeDesignatorFont;
	NSCalendar* _calendar;
	char _shouldRecomputeText;
	float _paddingFromTimeToDesignator;

}

@property (nonatomic,readonly) char use24HourTime; 
@property (nonatomic,readonly) char timeDesignatorAppearsBeforeTime; 
@property (nonatomic,readonly) CGSize timeDesignatorSize; 
@property (getter=_dateString,nonatomic,readonly) NSString * dateString; 
@property (assign,nonatomic) char shouldRecomputeText;                                //@synthesize shouldRecomputeText=_shouldRecomputeText - In the implementation block
@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) double timeInterval; 
@property (nonatomic,readonly) UIFont * timeDesignatorFont; 
@property (nonatomic,readonly) NSString * timeDesignator; 
@property (assign,nonatomic) char forceTimeOnly;                                      //@synthesize forceTimeOnly=_forceTimeOnly - In the implementation block
@property (assign,nonatomic) char boldForAllLocales;                                  //@synthesize boldForAllLocales=_boldForAllLocales - In the implementation block
@property (assign,nonatomic) float paddingFromTimeToDesignator;                       //@synthesize paddingFromTimeToDesignator=_paddingFromTimeToDesignator - In the implementation block
+(id)defaultFont;
+(id)_timeOnlyDateFormatter;
+(id)_relativeDateFormatter;
+(id)_weekdayDateFormatter;
+(id)_dateFormatter;
+(id)amString;
+(id)pmString;
-(void)invalidate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)text;
-(NSDate *)date;
-(id)font;
-(void)drawTextInRect:(CGRect)arg1 ;
-(id)_stringDrawingContext;
-(void)setShouldRecomputeText:(char)arg1 ;
-(void)_recomputeTextIfNecessary;
-(CGSize)timeDesignatorSize;
-(NSString *)timeDesignator;
-(char)timeDesignatorAppearsBeforeTime;
-(UIFont *)timeDesignatorFont;
-(id)_calendar;
-(id)_todayDate;
-(id)_dateWithDayDiffFromToday:(int)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(char)shouldRecomputeText;
-(id)_dateString;
-(char)boldForAllLocales;
-(void)_didUpdateDate;
-(double)timeInterval;
-(double)_today;
-(double)_tomorrow;
-(double)_yesterday;
-(double)_lastWeek;
-(char)use24HourTime;
-(double)_noon;
-(void)setForceTimeOnly:(char)arg1 ;
-(void)setBoldForAllLocales:(char)arg1 ;
-(void)setTimeInterval:(double)arg1 ;
-(char)forceTimeOnly;
-(float)paddingFromTimeToDesignator;
-(void)setPaddingFromTimeToDesignator:(float)arg1 ;
@end


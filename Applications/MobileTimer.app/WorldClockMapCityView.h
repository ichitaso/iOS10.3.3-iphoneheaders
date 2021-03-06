/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/Clock.h>

@class WorldClockCity, UILabel, NSDateFormatter, UIImageView;

@interface WorldClockMapCityView : UIView <Clock> {

	WorldClockCity* _city;
	UILabel* _timeLabel;
	UILabel* _nameLabel;
	NSDateFormatter* _timeFormatter;
	char _doneFirstLayout;
	int _iconPlacement;
	UIImageView* _dotImageView;

}

@property (nonatomic,retain) UIImageView * dotImageView;                 //@synthesize dotImageView=_dotImageView - In the implementation block
@property (nonatomic,readonly) WorldClockCity * city;                    //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSDateFormatter * timeFormatter;              //@synthesize timeFormatter=_timeFormatter - In the implementation block
@property (assign,nonatomic) int iconPlacement;                          //@synthesize iconPlacement=_iconPlacement - In the implementation block
@property (assign,nonatomic) float timeLabelWidth; 
@property (nonatomic,readonly) int runMode; 
+(id)secondaryLabelFont;
-(void)setTimeLabelWidth:(float)arg1 ;
-(void)setIconPlacement:(int)arg1 ;
-(CGPoint)hotspotOffset;
-(int)iconPlacement;
-(CGPoint)hotspotOffsetForPlacement:(int)arg1 ;
-(CGSize)sizeForIntersectionWithCityView:(id)arg1 atOrigin:(CGPoint)arg2 selfOrigin:(CGPoint)arg3 ;
-(void)setDotImageView:(UIImageView *)arg1 ;
-(UIImageView *)dotImageView;
-(id)labelViews;
-(CGRect)dotImageFrameForPlacement:(int)arg1 ;
-(float)timeLabelWidth;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutIfNeeded;
-(void)stop;
-(void)start;
-(void)updateTime;
-(NSDateFormatter *)timeFormatter;
-(void)setCity:(WorldClockCity *)arg1 ;
-(void)setTimeFormatter:(NSDateFormatter *)arg1 ;
-(int)runMode;
-(WorldClockCity *)city;
-(id)initWithCity:(id)arg1 ;
-(void)handleLocaleChange;
@end


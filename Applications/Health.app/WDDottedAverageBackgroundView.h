/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDChartBackgroundView.h>

@protocol WDDottedAverageBackgroundViewDataSource;
@class UILabel, UIImage, UIView, UIFont, UIColor;

@interface WDDottedAverageBackgroundView : WDChartBackgroundView {

	UILabel* _topLabel;
	UILabel* _bottomLabel;
	UIImage* _lineImage;
	UIView* _averageLineView;
	UILabel* _noDataLabel;
	id<WDDottedAverageBackgroundViewDataSource> _dataSource;
	UIFont* _labelFont;
	UIColor* _labelColor;
	UIColor* _averageLineColor;
	float _labelPadding;
	UIFont* _noDataLabelFont;
	UIColor* _noDataLabelColor;

}

@property (assign,nonatomic,__weak) id<WDDottedAverageBackgroundViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UIFont * labelFont;                                                         //@synthesize labelFont=_labelFont - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;                                                       //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) UIColor * averageLineColor;                                                 //@synthesize averageLineColor=_averageLineColor - In the implementation block
@property (assign,nonatomic) float labelPadding;                                                         //@synthesize labelPadding=_labelPadding - In the implementation block
@property (nonatomic,retain) UIFont * noDataLabelFont;                                                   //@synthesize noDataLabelFont=_noDataLabelFont - In the implementation block
@property (nonatomic,retain) UIColor * noDataLabelColor;                                                 //@synthesize noDataLabelColor=_noDataLabelColor - In the implementation block
-(void)setMinValue:(id)arg1 maxValue:(id)arg2 averageValue:(id)arg3 maxDataValue:(id)arg4 decimalPrecision:(int)arg5 dataUnit:(id)arg6 unitController:(id)arg7 ;
-(void)setShowNoDataLabel:(char)arg1 ;
-(void)setHideAverageLine:(char)arg1 ;
-(void)setHideMinMaxLabels:(char)arg1 ;
-(void)setAverageLineColor:(UIColor *)arg1 ;
-(void)_adjustAverageLineViewImage;
-(id)_averageLineImage;
-(void)setNoDataLabelColor:(UIColor *)arg1 ;
-(void)setNoDataLabelFont:(UIFont *)arg1 ;
-(void)setAverageLineCompositingFilter:(id)arg1 ;
-(void)setLabelCompositingFilter:(id)arg1 ;
-(void)setNoDataLabelCompositingFilter:(id)arg1 ;
-(UIColor *)averageLineColor;
-(float)labelPadding;
-(void)setLabelPadding:(float)arg1 ;
-(UIFont *)noDataLabelFont;
-(UIColor *)noDataLabelColor;
-(id)init;
-(void)layoutSubviews;
-(void)setDataSource:(id<WDDottedAverageBackgroundViewDataSource>)arg1 ;
-(id<WDDottedAverageBackgroundViewDataSource>)dataSource;
-(void)setLabelColor:(UIColor *)arg1 ;
-(void)setLabelFont:(UIFont *)arg1 ;
-(UIFont *)labelFont;
-(UIColor *)labelColor;
-(void)_updateLabelText;
@end


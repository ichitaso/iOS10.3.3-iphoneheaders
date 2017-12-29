/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, WDGradientObject;

@interface WDColorPalette : NSObject {

	UIColor* _tint_20;
	UIColor* _tint_50;
	UIColor* _tintLinearDodgeAdd_4;
	UIColor* _tintOverlay_20;
	UIColor* _tintOverlay_50;
	UIColor* _tintOverlay_80;
	UIColor* _tintOverlay_100;
	UIColor* _tintLinearDodgeAdd_10;
	UIColor* _tintSoftLight_10;
	UIColor* _secondaryColorBurn_5;
	UIColor* _secondaryColorBurn_20;
	UIColor* _secondaryOverlay_20;
	UIColor* _secondaryOverlay_30;
	UIColor* _secondaryOverlay_40;
	UIColor* _secondaryOverlay_70;
	WDGradientObject* _chartGradient;
	char _baseColorIsVeryLight;
	UIColor* _baseColor;
	UIColor* _tintColor;
	UIColor* _secondaryColor;
	UIColor* _textColor;

}

@property (nonatomic,readonly) UIColor * baseColor;                   //@synthesize baseColor=_baseColor - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                   //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) UIColor * secondaryColor;              //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,readonly) UIColor * textColor;                   //@synthesize textColor=_textColor - In the implementation block
+(id)paletteWithBaseColor:(id)arg1 tintColor:(id)arg2 secondaryColor:(id)arg3 textColor:(id)arg4 ;
-(id)initWithBaseColor:(id)arg1 tintColor:(id)arg2 secondaryColor:(id)arg3 textColor:(id)arg4 ;
-(id)_tintOverlay_50;
-(id)_tint_50;
-(id)_secondaryOverlay_30;
-(id)currentStateChartGutterColor;
-(id)_secondaryOverlay_20;
-(id)_tintOverlay_80;
-(id)_secondaryColorBurn_20;
-(id)_tintLinearDodgeAdd_10;
-(id)_tintOverlay_20;
-(id)_secondaryOverlay_40;
-(id)tintWithAlpha:(float)arg1 ;
-(id)tintLinearDodgeWithFillOpacity:(float)arg1 alpha:(float)arg2 ;
-(id)tintOverlayWithFillOpacity:(float)arg1 alpha:(float)arg2 ;
-(id)tintSoftLightWithFillOpacity:(float)arg1 alpha:(float)arg2 ;
-(id)secondaryColorBurnWithFillOpacity:(float)arg1 alpha:(float)arg2 ;
-(id)secondaryColorOverlayWithFillOpacity:(float)arg1 alpha:(float)arg2 ;
-(id)headerUnitsColor;
-(id)headerValueColor;
-(id)highlightedStatsColor;
-(id)unhighlightedStatsColor;
-(id)currentStateChartTargetRangeColor;
-(id)currentStateChartPointColor;
-(id)currentStateChartLabelColor;
-(id)timePeriodSelectedTextColor;
-(id)timePeriodUnselectedTextColor;
-(id)timePeriodSelectedPillColor;
-(id)chartUnhighlightedLabelColor;
-(id)chartHighlightedLabelColor;
-(id)shareButtonTintColor;
-(id)infoButtonTintColor;
-(id)lastUpdatedColor;
-(id)doneButtonTintColor;
-(id)dividerPrimaryColor;
-(id)dividerAccentColor;
-(id)lineChartDefaultColor;
-(id)lineChartDefaultGradient;
-(id)bloodPressureChartDefaultArrowColor;
-(id)bloodPressureChartDefaultTopColor;
-(id)bloodPressureBackgroundFillColor;
-(id)bloodPressureBackgroundTextColor;
-(id)pieChartDefaultColor;
-(id)radioSelectorPillColor;
-(id)radioSelectorHighlightedTitleColor;
-(id)radioSelectorUnhighlightedTitleColor;
-(id)tintTextColorWithAlpha:(float)arg1 ;
-(id)_tint_20;
-(id)_tintLinearDodgeAdd_4;
-(id)_tintOverlay_100;
-(id)_tintSoftLight_10;
-(id)_secondaryColorBurn_5;
-(id)_secondaryOverlay_70;
-(id)init;
-(UIColor *)tintColor;
-(UIColor *)textColor;
-(UIColor *)secondaryColor;
-(id)glyphColor;
-(id)headerTitleColor;
-(UIColor *)baseColor;
@end


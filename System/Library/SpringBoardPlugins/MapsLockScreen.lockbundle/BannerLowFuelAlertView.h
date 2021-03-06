/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <MapsLockScreen/BannerView.h>

@class UIImageView, UILabel, SBUIStarkBannerViewButton, NSMutableArray, LowFuelBannerItem;

@interface BannerLowFuelAlertView : BannerView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	SBUIStarkBannerViewButton* _actionButton;
	NSMutableArray* _layoutConstraints;
	SCD_Struct_Ba3 _viewMetrics;

}

@property (readonly) char isCarPlay; 
@property (readonly) char isNightMode; 
@property (nonatomic,readonly) LowFuelBannerItem * lowFuelAlertBannerItem; 
-(char)isNightMode;
-(char)isCarPlay;
-(void)updateFromBannerItem;
-(void)_resetConstraints;
-(id)_makeMapsIconImageView;
-(id)_makeLabelWithFont:(id)arg1 style:(id)arg2 ;
-(id)_makeActionButton;
-(LowFuelBannerItem *)lowFuelAlertBannerItem;
-(id)initWithContext:(id)arg1 ;
@end


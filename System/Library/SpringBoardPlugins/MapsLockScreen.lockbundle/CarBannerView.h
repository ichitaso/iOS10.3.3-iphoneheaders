/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <MapsLockScreen/BannerView.h>

@class GuidanceManeuverView, UILabel, UIImageView, SBUIStarkBannerViewButton, NavManeuverBannerItem;

@interface CarBannerView : BannerView {

	GuidanceManeuverView* _maneuverView;
	UILabel* _distanceLabel;
	UILabel* _instructionsLabel;
	UIImageView* _shieldImageView;
	CGPoint _shieldCenterPoint;
	SBUIStarkBannerViewButton* _actionButton;

}

@property (nonatomic,readonly) NavManeuverBannerItem * navManeuverBannerItem; 
-(void)updateFromBannerItem;
-(CGPoint)_centerPointOffsetGivenSize:(CGSize)arg1 ;
-(NavManeuverBannerItem *)navManeuverBannerItem;
-(id)_instructionsTextAttributes;
-(void)_updateDuringLayoutInstructionsFromItemForAvailableWidth:(float)arg1 ;
-(void)_debug_outlineSubviews;
-(void)_setInstructionsText:(id)arg1 ;
-(void)_setDistanceText:(id)arg1 ;
-(id)_textShadow;
-(void)layoutSubviews;
-(id)initWithContext:(id)arg1 ;
@end


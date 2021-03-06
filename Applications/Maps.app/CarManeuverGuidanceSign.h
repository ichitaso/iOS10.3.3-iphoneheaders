/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <Maps/ManeuverGuidanceObserver.h>

@protocol CarDistanceLabel;
@class InstructionsLabel, GuidanceManeuverView, MapsAutoLayoutContext, UIView, UIImageView, ManeuverGuidance, CarGuidanceSignStyle, NSString;

@interface CarManeuverGuidanceSign : UIView <ManeuverGuidanceObserver> {

	InstructionsLabel* _instructionsLabel;
	GuidanceManeuverView* _maneuverView;
	MapsAutoLayoutContext* _autoLayoutContext;
	UIView*<CarDistanceLabel> _distanceLabel;
	UIImageView* _shieldView;
	ManeuverGuidance* _guidance;
	int _displayedLightLevel;
	CarGuidanceSignStyle* _style;

}

@property (nonatomic,readonly) CarGuidanceSignStyle * style;              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int displayedLightLevel;                     //@synthesize displayedLightLevel=_displayedLightLevel - In the implementation block
@property (nonatomic,readonly) ManeuverGuidance * guidance;               //@synthesize guidance=_guidance - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)secondarySignWithGuidance:(id)arg1 ;
+(id)primarySignWithGuidance:(id)arg1 ;
+(id)compactPrimarySignWithGuidance:(id)arg1 ;
+(char)requiresConstraintBasedLayout;
-(void)_fadeViewIfNeeded:(id)arg1 forChanges:(/*^block*/id)arg2 ;
-(void)setDisplayedLightLevel:(int)arg1 ;
-(int)displayedLightLevel;
-(ManeuverGuidance *)guidance;
-(void)maneuverGuidanceDistanceDidChange:(id)arg1 ;
-(void)maneuverGuidanceDetailsDidChange:(id)arg1 ;
-(id)initWithGuidance:(id)arg1 variant:(int)arg2 ;
-(void)_reloadDetails;
-(void)_updateShieldForNewWindow:(id)arg1 ;
-(id)_primaryLayoutContext;
-(id)_compactPrimaryLayoutContext;
-(id)_secondaryLayoutContext;
-(void)_updateGrowingRequirementsForSize:(CGSize)arg1 ;
-(float)_maxWidthForSize:(CGSize)arg1 ;
-(id)_rightAlignedDistanceLabel;
-(id)_inlineDistanceLabel;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CarGuidanceSignStyle *)style;
-(void)willMoveToWindow:(id)arg1 ;
-(void)updateConstraints;
-(id)_currentStyleAttributes;
-(void)_updateStyling;
-(char)isSecondary;
@end


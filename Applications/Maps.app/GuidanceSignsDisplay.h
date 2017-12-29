/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/GuidanceDisplay.h>

@protocol GuidanceSignsDisplayDelegate;
@class NSString;

@interface GuidanceSignsDisplay : NSObject <GuidanceDisplay> {

	char _compact;
	char _showsDimmedSigns;
	id<GuidanceSignsDisplayDelegate> _delegate;
	UIEdgeInsets _minimumEdgeInsets;

}

@property (assign,nonatomic,__weak) id<GuidanceSignsDisplayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showsDimmedSigns;                                         //@synthesize showsDimmedSigns=_showsDimmedSigns - In the implementation block
@property (assign,nonatomic) char compact;                                                  //@synthesize compact=_compact - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets minimumEdgeInsets;                              //@synthesize minimumEdgeInsets=_minimumEdgeInsets - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isGuidanceEnabled,nonatomic) char guidanceEnabled; 
+(id)signsDisplayWithContainingChromeViewController:(id)arg1 mode:(id)arg2 inView:(id)arg3 ;
+(void)getImage:(out id*)arg1 center:(out CGPoint*)arg2 ofSize:(int)arg3 scale:(float)arg4 fromShieldType:(int)arg5 text:(id)arg6 idiom:(int)arg7 ;
+(int)mainScreenPrimaryManeuverShieldSize;
+(int)mainScreenSecondaryManeuverShieldSize;
-(void)layoutForUnobscuredBoundsChange;
-(void)showNoGuidance;
-(void)showArrived;
-(void)showRecalculating;
-(void)showProceedingToRouteDistance:(double)arg1 displayString:(id)arg2 forStep:(id)arg3 ;
-(void)setDestinationDisplayName:(id)arg1 ;
-(void)setETA:(id)arg1 ;
-(void)showNewManeuver:(int)arg1 junction:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned)arg7 ;
-(void)showManeuverAlertForAnnouncementStage:(unsigned)arg1 ;
-(void)setTimeToManeuver:(double)arg1 distanceToManeuver:(double)arg2 forStep:(id)arg3 atStepIndex:(unsigned)arg4 ;
-(void)showSecondaryManeuver:(int)arg1 junction:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 ;
-(void)hideSecondaryManeuver;
-(id)initWithContainingChromeViewController:(id)arg1 mode:(id)arg2 inView:(id)arg3 ;
-(void)removeFromContainingViewController;
-(void)setShowsDimmedSigns:(char)arg1 animation:(id)arg2 ;
-(void)showAuxiliaryChromeWithAnimation:(id)arg1 ;
-(void)hideAuxiliaryChromeWithAnimation:(id)arg1 ;
-(void)setInitialSelection;
-(void)setShowsDimmedSigns:(char)arg1 ;
-(void)setMinimumEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)willAnimateRotationToInterface:(int)arg1 duration:(double)arg2 ;
-(char)showsDimmedSigns;
-(void)setDelegate:(id<GuidanceSignsDisplayDelegate>)arg1 ;
-(id<GuidanceSignsDisplayDelegate>)delegate;
-(id)navigationItem;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(char)compact;
-(void)setHidden:(char)arg1 animated:(char)arg2 ;
-(void)setCompact:(char)arg1 ;
-(UIEdgeInsets)minimumEdgeInsets;
@end


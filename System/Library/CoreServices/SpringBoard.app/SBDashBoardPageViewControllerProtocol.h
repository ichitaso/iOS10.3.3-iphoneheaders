/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBDashBoardPageViewControllerProtocol <SBDashBoardViewPresenting,SBApplicationHosting>
@property (assign,nonatomic,__weak) id<SBDashBoardViewControllerProtocol> dashBoardViewController; 
@property (assign,getter=isTransitioning,nonatomic) char transitioning; 
@property (nonatomic,readonly) char authenticated; 
@optional
-(void)updateLegibilityForSettings:(id)arg1;

@required
+(char)isAvailableForConfiguration;
+(unsigned)requiredCapabilities;
-(void)setDashBoardViewController:(id)arg1;
-(char)isTransitioning;
-(char)authenticated;
-(void)setTransitioning:(char)arg1;
-(id<SBDashBoardViewControllerProtocol>)dashBoardViewController;

@end


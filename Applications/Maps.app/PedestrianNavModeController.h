/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/NavModeController.h>

@class PedestrianNavContainerViewController;

@interface PedestrianNavModeController : NavModeController {

	PedestrianNavContainerViewController* _pedestrianContainerViewController;

}

@property (nonatomic,retain) PedestrianNavContainerViewController * pedestrianContainerViewController;              //@synthesize pedestrianContainerViewController=_pedestrianContainerViewController - In the implementation block
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(char)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(void)resignCurrentModeAnimated:(char)arg1 toMode:(id)arg2 ;
-(void)prepareToRunNavigationAnimated:(char)arg1 ;
-(PedestrianNavContainerViewController *)pedestrianContainerViewController;
-(void)setPedestrianContainerViewController:(PedestrianNavContainerViewController *)arg1 ;
-(id)init;
-(id)viewController;
-(id)containerViewController;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/FlyoverActionCoordination.h>

@class AppCoordinator, FlyoverContainerViewController, FlyoverTrayContaineeViewController, NSString;

@interface FlyoverActionCoordinator : NSObject <FlyoverActionCoordination> {

	AppCoordinator* _appCoordinator;
	FlyoverContainerViewController* _containerViewController;
	FlyoverTrayContaineeViewController* _trayContaineeViewController;

}

@property (assign,nonatomic,__weak) FlyoverContainerViewController * containerViewController;               //@synthesize containerViewController=_containerViewController - In the implementation block
@property (nonatomic,retain) FlyoverTrayContaineeViewController * trayContaineeViewController;              //@synthesize trayContaineeViewController=_trayContaineeViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) AppCoordinator * appCoordinator;                                        //@synthesize appCoordinator=_appCoordinator - In the implementation block
-(void)updateViewMode:(int)arg1 animated:(char)arg2 ;
-(unsigned)originalLayoutForViewController:(id)arg1 ;
-(int)displayedViewMode;
-(AppCoordinator *)appCoordinator;
-(void)viewControllerPresentTray:(id)arg1 ;
-(void)setAppCoordinator:(AppCoordinator *)arg1 ;
-(id)initWithContainerViewController:(id)arg1 ;
-(FlyoverTrayContaineeViewController *)trayContaineeViewController;
-(void)viewControllerEndFlyover:(id)arg1 ;
-(void)setTrayContaineeViewController:(FlyoverTrayContaineeViewController *)arg1 ;
-(FlyoverContainerViewController *)containerViewController;
-(void)setContainerViewController:(FlyoverContainerViewController *)arg1 ;
@end


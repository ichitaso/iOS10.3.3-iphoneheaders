/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITabBarControllerDelegate.h>

@class UITabBarController, AWDServerConnection, CHActivityAWDActivityCompanionTabVisitEvent, NSMutableSet, NSString;

@interface CHNavigationTracker : NSObject <UITabBarControllerDelegate> {

	UITabBarController* _tabBarController;
	AWDServerConnection* _serverConnection;
	int _selectedTabIndex;
	CHActivityAWDActivityCompanionTabVisitEvent* _currentVisitEvent;
	NSMutableSet* _pageViewKeys;
	unsigned long long _lastMachTime;
	double _elapsedTime;
	int _state;

}

@property (nonatomic,readonly) UITabBarController * tabBarController;              //@synthesize tabBarController=_tabBarController - In the implementation block
@property (nonatomic,readonly) int state;                                          //@synthesize state=_state - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedNavigationTracker;
+(void)setSharedNavigationTracker:(id)arg1 ;
-(void)_beginTabEvent:(int)arg1 ;
-(void)_finishCurrentTabEvent;
-(id)initWithTabBarController:(id)arg1 serverConnection:(id)arg2 ;
-(void)viewControllerDidScroll:(id)arg1 ;
-(void)reportPageViewForKey:(id)arg1 ;
-(int)state;
-(void)start;
-(UITabBarController *)tabBarController;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(void)resume;
-(void)pause;
-(void)finish;
@end


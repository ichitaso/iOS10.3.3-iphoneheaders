/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UINavigationBar, NSString;

@interface CarKeyboardSearchModeTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	UINavigationBar* _navigationBar;
	int _operation;

}

@property (assign,nonatomic) int operation;                         //@synthesize operation=_operation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sendNavigationBarToBack:(id)arg1 ;
-(void)_bringNavigationBarToFront:(id)arg1 ;
-(void)_animateTransitionForPush:(id)arg1 ;
-(void)_animateTransitionForPop:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(int)operation;
-(void)setOperation:(int)arg1 ;
-(void)animateTransition:(id)arg1 ;
@end

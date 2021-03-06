/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/NavigationChromeViewItem.h>

@interface CarChromeViewItem : NavigationChromeViewItem {

	char _autohidingContentIsHidden;
	int _hardwareBackButtonBehavior;
	int _autohideBehavior;

}

@property (nonatomic,retain) id<CarChromeModeController> mode; 
@property (assign,nonatomic) int hardwareBackButtonBehavior;                                               //@synthesize hardwareBackButtonBehavior=_hardwareBackButtonBehavior - In the implementation block
@property (assign,nonatomic) int autohideBehavior;                                                         //@synthesize autohideBehavior=_autohideBehavior - In the implementation block
@property (assign,getter=isAutohidingContentHidden,nonatomic) char autohidingContentIsHidden;              //@synthesize autohidingContentIsHidden=_autohidingContentIsHidden - In the implementation block
-(int)hardwareBackButtonBehavior;
-(void)setHardwareBackButtonBehavior:(int)arg1 ;
-(int)autohideBehavior;
-(void)setAutohideBehavior:(int)arg1 ;
-(char)isAutohidingContentHidden;
-(void)setAutohidingContentIsHidden:(char)arg1 ;
-(id)init;
-(void)setMode:(id<CarChromeModeController>)arg1 ;
-(char)showsNavigationBar;
@end


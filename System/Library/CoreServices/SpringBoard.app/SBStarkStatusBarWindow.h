/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>

@protocol SBStarkSessionConfiguring;
@class SBStarkStatusBarViewController;

@interface SBStarkStatusBarWindow : SBWindow {

	id<SBStarkSessionConfiguring> _configuration;

}

@property (nonatomic,retain) SBStarkStatusBarViewController * rootViewController; 
-(id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 configuration:(id)arg4 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(SBStarkStatusBarViewController *)rootViewController;
-(void)setRootViewController:(SBStarkStatusBarViewController *)arg1 ;
-(char)_reversesLinearFocusWrapping;
@end


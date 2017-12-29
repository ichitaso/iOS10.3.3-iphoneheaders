/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWindow.h>

@protocol SBStarkWindowDelegate;
@interface SBStarkNowPlayingWindow : SBWindow {

	id<SBStarkWindowDelegate> _starkWindowDelegate;

}

@property (assign,nonatomic,__weak) id<SBStarkWindowDelegate> starkWindowDelegate;              //@synthesize starkWindowDelegate=_starkWindowDelegate - In the implementation block
-(id<SBStarkWindowDelegate>)starkWindowDelegate;
-(void)setStarkWindowDelegate:(id<SBStarkWindowDelegate>)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(id)contextHostManager;
@end


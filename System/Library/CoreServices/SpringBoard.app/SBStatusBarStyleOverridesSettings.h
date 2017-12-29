/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUISettings.h>

@interface SBStatusBarStyleOverridesSettings : SBUISettings {

	char _exclusive;
	char _showsWhenForeground;
	int _styleOverride;

}

@property (assign,nonatomic) int styleOverride;                     //@synthesize styleOverride=_styleOverride - In the implementation block
@property (assign,nonatomic) char exclusive;                        //@synthesize exclusive=_exclusive - In the implementation block
@property (assign,nonatomic) char showsWhenForeground;              //@synthesize showsWhenForeground=_showsWhenForeground - In the implementation block
+(id)settingsControllerModule;
-(void)setStyleOverride:(int)arg1 ;
-(char)exclusive;
-(char)showsWhenForeground;
-(void)setShowsWhenForeground:(char)arg1 ;
-(void)setDefaultValues;
-(int)styleOverride;
-(void)setExclusive:(char)arg1 ;
@end


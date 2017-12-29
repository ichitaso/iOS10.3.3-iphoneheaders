/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <FrontBoardServices/FBSSceneSettings.h>
#import <UIKit/UIApplicationSceneSettings.h>
@class NSNumber;


@protocol UIApplicationSceneSettings <NSObject>
@property (nonatomic,readonly) char underLock; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) unsigned deactivationReasons; 
@property (nonatomic,readonly) int userInterfaceStyle; 
@property (nonatomic,retain,readonly) NSNumber * forcedStatusBarStyle; 
@property (nonatomic,retain,readonly) NSNumber * forcedStatusBarHidden; 
@property (nonatomic,readonly) char forcedStatusBarForegroundTransparent; 
@property (nonatomic,readonly) char deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) char canShowAlerts; 
@property (nonatomic,readonly) char idleModeEnabled; 
@property (nonatomic,readonly) char statusBarDisabled; 
@required
-(unsigned)deactivationReasons;
-(char)canShowAlerts;
-(char)underLock;
-(char)statusBarDisabled;
-(NSNumber *)forcedStatusBarStyle;
-(NSNumber *)forcedStatusBarHidden;
-(char)forcedStatusBarForegroundTransparent;
-(int)userInterfaceStyle;
-(int)statusBarStyleOverridesToSuppress;
-(char)idleModeEnabled;
-(char)deviceOrientationEventsEnabled;

@end


@class NSNumber, NSString;

@interface UIApplicationSceneSettings : FBSSceneSettings <UIApplicationSceneSettings>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char underLock; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) unsigned deactivationReasons; 
@property (nonatomic,readonly) int userInterfaceStyle; 
@property (nonatomic,retain,readonly) NSNumber * forcedStatusBarStyle; 
@property (nonatomic,retain,readonly) NSNumber * forcedStatusBarHidden; 
@property (nonatomic,readonly) char forcedStatusBarForegroundTransparent; 
@property (nonatomic,readonly) char deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) char canShowAlerts; 
@property (nonatomic,readonly) char idleModeEnabled; 
@property (nonatomic,readonly) char statusBarDisabled; 
-(char)isUISubclass;
-(unsigned)deactivationReasons;
-(char)canShowAlerts;
-(char)underLock;
-(char)statusBarDisabled;
-(NSNumber *)forcedStatusBarStyle;
-(NSNumber *)forcedStatusBarHidden;
-(char)forcedStatusBarForegroundTransparent;
-(int)userInterfaceStyle;
-(int)statusBarStyleOverridesToSuppress;
-(char)idleModeEnabled;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
-(id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)deviceOrientationEventsEnabled;
@end


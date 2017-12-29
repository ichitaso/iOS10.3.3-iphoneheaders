/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/CheckerBoard.app/CheckerBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBScene, UIApplicationSceneSettings, UIApplicationSceneClientSettings, FBSSceneTransitionContext;

@interface CBAppClientSettingObserverContext : NSObject {

	FBScene* _scene;
	UIApplicationSceneSettings* _settings;
	UIApplicationSceneClientSettings* _oldClientSettings;
	UIApplicationSceneClientSettings* _updatedClientSettings;
	FBSSceneTransitionContext* _transition;

}

@property (nonatomic,retain) FBScene * scene;                                                       //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) UIApplicationSceneSettings * settings;                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) UIApplicationSceneClientSettings * oldClientSettings;                  //@synthesize oldClientSettings=_oldClientSettings - In the implementation block
@property (nonatomic,retain) UIApplicationSceneClientSettings * updatedClientSettings;              //@synthesize updatedClientSettings=_updatedClientSettings - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transition;                                //@synthesize transition=_transition - In the implementation block
-(UIApplicationSceneClientSettings *)oldClientSettings;
-(void)setOldClientSettings:(UIApplicationSceneClientSettings *)arg1 ;
-(UIApplicationSceneClientSettings *)updatedClientSettings;
-(void)setUpdatedClientSettings:(UIApplicationSceneClientSettings *)arg1 ;
-(UIApplicationSceneSettings *)settings;
-(void)setTransition:(FBSSceneTransitionContext *)arg1 ;
-(FBSSceneTransitionContext *)transition;
-(void)setSettings:(UIApplicationSceneSettings *)arg1 ;
-(void)setScene:(FBScene *)arg1 ;
-(FBScene *)scene;
@end


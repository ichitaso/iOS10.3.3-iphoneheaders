/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSceneMessage.h>

@class FBSSceneSettingsDiff, FBSSceneClientSettingsDiff, FBSSceneTransitionContext, NSSet;

@interface FBSSceneEvent : FBSSceneMessage {

	int _source;
	FBSSceneSettingsDiff* _settingsDiff;
	FBSSceneClientSettingsDiff* _clientSettingsDiff;
	FBSSceneTransitionContext* _transitionContext;

}

@property (assign,nonatomic) int source;                                                   //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) FBSSceneSettingsDiff * settingsDiff;                          //@synthesize settingsDiff=_settingsDiff - In the implementation block
@property (nonatomic,retain) FBSSceneClientSettingsDiff * clientSettingsDiff;              //@synthesize clientSettingsDiff=_clientSettingsDiff - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transitionContext;                //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) NSSet * actions; 
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(FBSSceneTransitionContext *)transitionContext;
-(NSSet *)actions;
-(void)setSource:(int)arg1 ;
-(int)source;
-(FBSSceneSettingsDiff *)settingsDiff;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setSettingsDiff:(FBSSceneSettingsDiff *)arg1 ;
-(FBSSceneClientSettingsDiff *)clientSettingsDiff;
-(void)setClientSettingsDiff:(FBSSceneClientSettingsDiff *)arg1 ;
@end


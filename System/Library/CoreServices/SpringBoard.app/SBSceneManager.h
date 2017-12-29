/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSceneLayoutViewControllerDelegate.h>
#import <libobjc.A.dylib/FBSceneManagerObserver.h>
#import <libobjc.A.dylib/FBSceneManagerDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class FBSceneManager, SBSceneManagerReference, SBSceneLayoutWindow, SBSceneLayoutViewController, SBPolicyAggregator, BSCopyingCacheSet, NSCountedSet, NSMutableSet, FBSDisplay, NSString;

@interface SBSceneManager : NSObject <SBSceneLayoutViewControllerDelegate, FBSceneManagerObserver, FBSceneManagerDelegate, BSDescriptionProviding, BSInvalidatable> {

	int _state;
	FBSceneManager* _sceneManager;
	SBSceneManagerReference* _selfReference;
	char _hidden;
	SBSceneLayoutWindow* _window;
	SBSceneLayoutViewController* _layoutController;
	char _layoutControllerHasVisibleElements;
	SBPolicyAggregator* _policyAggregator;
	BSCopyingCacheSet* _allScenes;
	BSCopyingCacheSet* _alertScenes;
	BSCopyingCacheSet* _windowScenes;
	BSCopyingCacheSet* _daemonScenes;
	BSCopyingCacheSet* _pluginScenes;
	BSCopyingCacheSet* _workspaceScenes;
	BSCopyingCacheSet* _externalApplicationScenes;
	BSCopyingCacheSet* _externalForegroundApplicationScenes;
	BSCopyingCacheSet* _reportedExternalForegroundApplicationScenes;
	NSCountedSet* _assertedBackgroundScenes;
	NSMutableSet* _outgoingSnapshots;
	NSMutableSet* _incomingSnapshots;
	char _layoutControllerCreationReentrancyGuard;

}

@property (assign,getter=isHidden,nonatomic) char hidden; 
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (nonatomic,readonly) FBSDisplay * display; 
@property (nonatomic,readonly) SBSceneLayoutWindow * window; 
@property (nonatomic,readonly) SBSceneLayoutViewController * layoutController; 
@property (nonatomic,readonly) SBPolicyAggregator * policyAggregator; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBPolicyAggregator *)policyAggregator;
-(SBSceneLayoutViewController *)layoutController;
-(id)externalForegroundApplicationScenes;
-(id)_sceneWindowLayoutStrategy;
-(char)_windowShouldBeHidden;
-(id)_newLayoutController;
-(void)_updateStateForScene:(id)arg1 withSettings:(id)arg2 ;
-(void)_noteDidChangeToVisibility:(unsigned)arg1 forScene:(id)arg2 ;
-(id)_snapshotRequestsForApplication:(id)arg1 scene:(id)arg2 settings:(id)arg3 ;
-(int)_hostingPolicyForScene:(id)arg1 ;
-(char)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(char)_handleAction:(id)arg1 forScene:(id)arg2 ;
-(void)sceneLayoutController:(id)arg1 noteHasVisibleElements:(char)arg2 ;
-(id)allScenes;
-(id)alertScenes;
-(id)windowScenes;
-(id)externalApplicationScenes;
-(id)daemonScenes;
-(id)pluginScenes;
-(id)scenesForWorkspaceWithID:(id)arg1 ;
-(id)assertBackgroundedStatusForScenes:(id)arg1 ;
-(id)additionalActionsForApplication:(id)arg1 withTransitionContext:(id)arg2 ;
-(id)init;
-(void)invalidate;
-(void)setHidden:(char)arg1 ;
-(void)dealloc;
-(char)isHidden;
-(SBSceneLayoutWindow *)window;
-(NSString *)description;
-(NSString *)debugDescription;
-(char)isValid;
-(FBSDisplay *)display;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_noteDidCommitUpdateForScene:(id)arg1 ;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5 ;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3 ;
-(void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned)arg3 ;
-(void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned)arg3 success:(char)arg4 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(int)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3 ;
-(id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2 ;
-(id)initWithReference:(id)arg1 ;
@end


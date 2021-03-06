/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/UserEventPlugins/PairingProximityEventAgent.plugin/PairingProximityEventAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ADEventListenerPlugin/FBSDisplayLayoutObserver.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class LSApplicationWorkspace, FBSDisplayLayoutMonitor, NSString;

@interface PPEAEventAgentHelper : NSObject <FBSDisplayLayoutObserver, LSApplicationWorkspaceObserverProtocol> {

	char _bridgeIsRemoved;
	char _wasUnlockedToHomeScreen;
	char _wasLocked;
	void* _provider;
	LSApplicationWorkspace* _workspace;
	FBSDisplayLayoutMonitor* _frontBoardLayoutMonitor;
	unsigned long long _token;

}

@property (assign,nonatomic) void* provider;                                                 //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) LSApplicationWorkspace * workspace;                             //@synthesize workspace=_workspace - In the implementation block
@property (nonatomic,retain) FBSDisplayLayoutMonitor * frontBoardLayoutMonitor;              //@synthesize frontBoardLayoutMonitor=_frontBoardLayoutMonitor - In the implementation block
@property (assign,nonatomic) unsigned long long token;                                       //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) char bridgeIsRemoved;                                           //@synthesize bridgeIsRemoved=_bridgeIsRemoved - In the implementation block
@property (assign,nonatomic) char wasUnlockedToHomeScreen;                                   //@synthesize wasUnlockedToHomeScreen=_wasUnlockedToHomeScreen - In the implementation block
@property (assign,nonatomic) char wasLocked;                                                 //@synthesize wasLocked=_wasLocked - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_beginObservingUnlockChangesIfNeeded;
-(void)setWasLocked:(char)arg1 ;
-(void)_beginObservingAppInstallChangesIfNeeded;
-(char)bridgeIsRemoved;
-(void)setBridgeIsRemoved:(char)arg1 ;
-(char)wasLocked;
-(void)_stopObservingUnlockChanges;
-(void)_stopObservingAppInstallChanges;
-(id)init;
-(void)dealloc;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(unsigned long long)token;
-(void)setToken:(unsigned long long)arg1 ;
-(void*)provider;
-(void)setProvider:(void*)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(LSApplicationWorkspace *)workspace;
-(void)setWorkspace:(LSApplicationWorkspace *)arg1 ;
-(FBSDisplayLayoutMonitor *)frontBoardLayoutMonitor;
-(void)setFrontBoardLayoutMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(char)wasUnlockedToHomeScreen;
-(void)setWasUnlockedToHomeScreen:(char)arg1 ;
@end


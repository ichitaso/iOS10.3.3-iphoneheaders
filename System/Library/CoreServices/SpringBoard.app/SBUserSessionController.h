/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLogoutProgressDataSource.h>
#import <SpringBoard/SBAlertObserver.h>
#import <SpringBoard/UMCriticalUserSwitchStakeholder.h>

@class UMUserManager, UMUser, SBMainDisplayPolicyAggregator, SBLogoutProgressAlertViewController, NSMutableArray, NSMutableSet, UMUserSwitchBlockingTask, NSDate, NSDictionary, NSString;

@interface SBUserSessionController : NSObject <SBLogoutProgressDataSource, SBAlertObserver, UMCriticalUserSwitchStakeholder> {

	UMUserManager* _userManager;
	UMUser* _lazy_user;
	SBMainDisplayPolicyAggregator* _lazy_policyAggregator;
	SBLogoutProgressAlertViewController* _progressAlert;
	NSMutableArray* _displayApplications;
	NSMutableSet* _terminatingApplications;
	UMUserSwitchBlockingTask* _terminateApplicationsTask;
	NSDate* _terminateApplicationsStartDate;
	NSDictionary* _debugBlockingTasks;
	char _loginSession;
	char _loggingOut;

}

@property (assign,getter=isLoggingOut,nonatomic) char loggingOut;                                                                                 //@synthesize loggingOut=_loggingOut - In the implementation block
@property (setter=_setPolicyAggregator:,getter=_policyAggregator,nonatomic,retain) SBMainDisplayPolicyAggregator * policyAggregator;              //@synthesize lazy_policyAggregator=_lazy_policyAggregator - In the implementation block
@property (nonatomic,retain,readonly) UMUser * user; 
@property (getter=isLoginSession,nonatomic,readonly) char loginSession;                                                                           //@synthesize loginSession=_loginSession - In the implementation block
@property (nonatomic,readonly) char isMultiUserSupported; 
@property (nonatomic,readonly) char canLogout; 
@property (nonatomic,readonly) int sessionType; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBMainDisplayPolicyAggregator *)policyAggregator;
-(char)isLoginSession;
-(void)alertDidDeactivate:(id)arg1 ;
-(id)_policyAggregator;
-(id)_initWithUserManager:(id)arg1 ;
-(char)isMultiUserSupported;
-(char)isLoggingOut;
-(void)logoutWithCompletion:(/*^block*/id)arg1 ;
-(char)canLogout;
-(void)_displayProgressAlertIfNeeded;
-(void)setLoggingOut:(char)arg1 ;
-(void)_noteApplicationDidExit:(id)arg1 ;
-(void)_evaluateRunningApplications;
-(CGPoint)_portraitOrientedProgressLocationForOrientation:(int)arg1 ;
-(id)_massageApplicationListForDisplay:(id)arg1 ;
-(id)pendingApplicationsForLogoutProgressAlertViewController:(id)arg1 ;
-(id)debugBlockingTasksForLogoutProgressAlertViewController:(id)arg1 ;
-(void)disableCurrentUser;
-(void)_setPolicyAggregator:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)willSwitchToUser:(id)arg1 ;
-(void)readyToSwitchToUser:(id)arg1 ;
-(void)userSwitchBlockingTasksDidUpdate:(id)arg1 ;
-(void)logout;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(UMUser *)user;
-(int)sessionType;
@end


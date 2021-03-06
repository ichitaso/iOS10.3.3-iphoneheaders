/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <libobjc.A.dylib/FBSynchronizedTransactionDelegate.h>

@class SBWorkspaceTransaction, NSString;

@interface SBLockScreenSlideUpToAppWorkspaceTransaction : SBMainWorkspaceTransaction <BSTransactionObserver, FBSynchronizedTransactionDelegate> {

	char _launchedApp;
	SBWorkspaceTransaction* _earlyLaunchTransaction;
	SBWorkspaceTransaction* _deferredFinalLaunchTransaction;
	char _gestureCompleted;
	char _didBegin;
	char _notifiedSlaves;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)addSlaveTransaction:(id)arg1 ;
-(void)_notifySlavesIfNecessary;
-(char)isGestureCompleted;
-(void)noteGestureCompletedSuccessfully:(char)arg1 cleanupTransaction:(id)arg2 ;
-(void)launchAppUnderLockScreenWithTransaction:(id)arg1 ;
-(void)dealloc;
-(void)_begin;
-(void)synchronizedTransactionReadyToCommit:(id)arg1 ;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2 ;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2 ;
@end


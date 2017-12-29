/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBInitialRestartState.h>

@class UMUser, SBBootDefaults;

@interface SBMutableInitialRestartState : SBInitialRestartState

@property (assign,getter=isAuthenticated,nonatomic) char authenticated; 
@property (assign,getter=isInLostMode,nonatomic) char inLostMode; 
@property (assign,getter=isBlocked,nonatomic) char blocked; 
@property (assign,nonatomic) char requiresSetup; 
@property (assign,nonatomic) char hasPasscodeSet; 
@property (assign,nonatomic) char shouldNeverLock; 
@property (nonatomic,retain) UMUser * currentUser; 
@property (nonatomic,retain) SBBootDefaults * bootDefaults; 
@property (assign,getter=isForSimulator,nonatomic) char forSimulator; 
@end


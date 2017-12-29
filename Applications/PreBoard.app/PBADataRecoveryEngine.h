/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/PreBoard.app/PreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SBFMobileKeyBag;

@interface PBADataRecoveryEngine : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	SBFMobileKeyBag* _queue_mobileKeyBag;

}

@property (nonatomic,readonly) char requiresDataRecovery; 
@property (nonatomic,readonly) char dataRecoveryPossible; 
-(char)dataRecoveryPossible;
-(void)performDataRecoveryWithPasscode:(id)arg1 progressHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithMobileKeyBag:(id)arg1 ;
-(char)requiresDataRecovery;
-(void)_queue_performDataRecoveryWithPasscode:(id)arg1 progressHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
@end


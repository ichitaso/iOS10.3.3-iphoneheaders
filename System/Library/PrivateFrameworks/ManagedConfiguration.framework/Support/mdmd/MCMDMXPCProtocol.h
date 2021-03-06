/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/mdmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCMDMXPCProtocol <NSObject>
@required
-(void)scheduleTokenUpdateWithCompletion:(/*^block*/id)arg1;
-(void)simulatePushWithCompletion:(/*^block*/id)arg1;
-(void)notifyNewConfigurationWithCompletion:(/*^block*/id)arg1;
-(void)scheduleTokenUpdateIfNecessaryWithCompletion:(/*^block*/id)arg1;
-(void)simulatePushIfNetworkTetheredWithCompletion:(/*^block*/id)arg1;
-(void)retryNotNowWithCompletion:(/*^block*/id)arg1;
-(void)migrateMDMWithContext:(int)arg1 completion:(/*^block*/id)arg2;
-(void)uprootMDMWithCompletion:(/*^block*/id)arg1;
-(void)processDeviceRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)processUserRequest:(id)arg1 completion:(/*^block*/id)arg2;

@end


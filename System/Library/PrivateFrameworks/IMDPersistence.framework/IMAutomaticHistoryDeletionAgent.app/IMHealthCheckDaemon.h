/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMAutomaticHistoryDeletionAgent.app/IMAutomaticHistoryDeletionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAutomaticHistoryDeletionAgent/IMHRequestStoreDelegate.h>
#import <IMAutomaticHistoryDeletionAgent/IMHDaemon.h>

@protocol IMHIDSInterface, IMHealthCheckDaemonDelegate, IMHRequestStore;
@class NSString;

@interface IMHealthCheckDaemon : NSObject <IMHRequestStoreDelegate, IMHDaemon> {

	id<IMHIDSInterface> _idsInterface;
	id<IMHealthCheckDaemonDelegate> _delegate;
	id<IMHRequestStore> _requestStore;

}

@property (nonatomic,retain) id<IMHRequestStore> requestStore;                             //@synthesize requestStore=_requestStore - In the implementation block
@property (assign,nonatomic,__weak) id<IMHIDSInterface> idsInterface;                      //@synthesize idsInterface=_idsInterface - In the implementation block
@property (assign,nonatomic,__weak) id<IMHealthCheckDaemonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IMHIDSInterface>)idsInterface;
-(void)setIdsInterface:(id<IMHIDSInterface>)arg1 ;
-(void)beginCheckWithTranscript:(id)arg1 ;
-(id<IMHRequestStore>)requestStore;
-(void)requestStore:(id)arg1 finishedCheckForTranscript:(id)arg2 withResponses:(id)arg3 ;
-(void)processRecievedTranscript:(id)arg1 withContext:(id)arg2 ;
-(void)processResponse:(id)arg1 forTranscript:(id)arg2 ;
-(void)setRequestStore:(id<IMHRequestStore>)arg1 ;
-(id)init;
-(void)setDelegate:(id<IMHealthCheckDaemonDelegate>)arg1 ;
-(id<IMHealthCheckDaemonDelegate>)delegate;
@end

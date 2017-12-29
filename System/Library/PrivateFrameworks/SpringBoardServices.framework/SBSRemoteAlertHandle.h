/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSRemoteAlertClientHandle.h>

@protocol OS_dispatch_queue;
@class SBSRemoteAlertClient, NSObject, BSMachPortSendRight, NSHashTable, NSString;

@interface SBSRemoteAlertHandle : NSObject <SBSRemoteAlertClientHandle> {

	SBSRemoteAlertClient* _client;
	NSObject*<OS_dispatch_queue> _queue;
	BSMachPortSendRight* _token;
	char _active;
	NSHashTable* _observers;

}

@property (getter=isActive,nonatomic,readonly) char active; 
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_lookupHandlesForDefinition:(id)arg1 creatingIfNone:(char)arg2 ;
+(id)newHandleWithDefinition:(id)arg1 configurationContext:(id)arg2 ;
+(id)lookupHandlesForDefinition:(id)arg1 ;
+(id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(char)arg2 ;
+(id)lookupHandlesForConfiguration:(id)arg1 creatingIfNone:(char)arg2 ;
+(id)handleWithConfiguration:(id)arg1 ;
-(void)queue_setActive:(char)arg1 ;
-(id)queue_token;
-(id)_initWithHandleToken:(id)arg1 ;
-(void)queue_noteInvalidWithError:(id)arg1 ;
-(void)_queue_callObserversWithBlock:(/*^block*/id)arg1 ;
-(void)activateWithOptions:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(char)isActive;
-(char)isValid;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)activateWithContext:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/AgentOperation.h>

@class AgentMessage;

@interface AgentState : AgentOperation {

	AgentMessage* _message;
	int _operationAction;

}
+(char)isInactiveState;
+(id)handleEnterWithAgent:(id)arg1 inState:(id)arg2 ;
+(id)handleLeaveWithAgent:(id)arg1 inState:(id)arg2 ;
+(id)handleMessage:(id)arg1 withAgent:(id)arg2 inState:(id)arg3 ;
-(void)onMessage:(id)arg1 ;
-(void)onEnter;
-(id)_initWithOperationAction:(int)arg1 agent:(id)arg2 inState:(id)arg3 message:(id)arg4 ;
-(void)onLeave;
-(void)cancel;
-(void)run;
@end


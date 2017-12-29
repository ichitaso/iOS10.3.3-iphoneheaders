/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@class AVAudioSession;

@interface _DKAudioOutputMonitor : _DKMonitor {

	AVAudioSession* _outputMonitor;

}
+(id)_eventWithState:(id)arg1 type:(id)arg2 name:(id)arg3 identifier:(id)arg4 routeChangeReason:(id)arg5 ;
+(id)contextValueForAudioOutputConnectionStatus:(char)arg1 type:(id)arg2 name:(id)arg3 identifier:(id)arg4 routeChangeReason:(id)arg5 ;
+(id)eventStream;
+(id)entitlements;
-(void)onAudioRouteChangeNotification:(id)arg1 ;
-(id)init;
-(void)stop;
-(void)start;
@end

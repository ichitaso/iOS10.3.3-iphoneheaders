/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSCondition.h>

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {

	NSMutableArray* _runLoopStateList;

}
-(id)init;
-(void)dealloc;
-(void)signal;
-(char)waitUntilDate:(id)arg1 ;
-(void)waitInMode:(id)arg1 ;
-(char)waitUntilDate:(id)arg1 inMode:(id)arg2 ;
-(char)_waitInMode:(id)arg1 untilDate:(id)arg2 ;
-(void)_signalRunLoopWithState:(id)arg1 ;
-(void)wait;
-(void)broadcast;
@end


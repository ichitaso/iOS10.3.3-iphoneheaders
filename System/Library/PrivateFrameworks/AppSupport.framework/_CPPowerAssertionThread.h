/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSThread.h>

@class NSTimer, NSDate;

@interface _CPPowerAssertionThread : NSThread {

	NSTimer* _timer;
	NSDate* _earliest;

}
-(void)didTimeOut:(id)arg1 ;
-(void)main;
-(void)addAssertion:(id)arg1 ;
@end


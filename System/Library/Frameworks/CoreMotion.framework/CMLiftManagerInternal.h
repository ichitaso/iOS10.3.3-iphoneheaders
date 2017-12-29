/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CMLiftManagerDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMLiftManager;

@interface CMLiftManagerInternal : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	id<CMLiftManagerDelegate> fDelegate;
	Dispatcher* fAccelerometerDispatcher;
	CMLiftDetector* fLiftDetector;
	CMLiftManager* fSender;
	unsigned fPrevLiftState;

}
-(id)init;
-(void)dealloc;
-(void)registerForLiftNotifications;
-(void)unregisterForLiftNotifications;
@end

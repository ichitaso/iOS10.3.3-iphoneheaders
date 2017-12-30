/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:41 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/XPCServices/com.apple.datamigrator.xpc/com.apple.datamigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.datamigrator/BKSAlternateSystemAppDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface MigratorAlternateAppDelegate : NSObject <BKSAlternateSystemAppDelegate> {

	NSObject*<OS_dispatch_semaphore> _sema;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> sema;              //@synthesize sema=_sema - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)waitUntilPreboardDidFinishUnlock;
-(void)alternateSystemApp:(id)arg1 didFailToLaunchWithError:(id)arg2 ;
-(void)alternateSystemApp:(id)arg1 didTerminateWithSignal:(int)arg2 ;
-(void)alternateSystemApp:(id)arg1 didExitWithStatus:(int)arg2 ;
-(void)alternateSystemAppDidLaunch:(id)arg1 ;
-(id)init;
-(void)setSema:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)sema;
@end

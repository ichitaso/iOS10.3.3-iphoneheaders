/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDContainerSource.h>

@class SYDRemotePreferencesSource;

@interface CFPDCloudSource : CFPDContainerSource {

	SYDRemotePreferencesSource* cloudSource;
	CFStringRef _configurationPath;

}
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 storeName:(id)arg3 configurationPath:(CFStringRef)arg4 containerPath:(CFStringRef)arg5 shmemIndex:(short)arg6 daemon:(id)arg7 ;
-(CFStringRef)debugDump;
-(void)_writeToDisk:(char)arg1 ;
-(id)copyPropertyListWithoutDrainingPendingChanges;
-(CFStringRef)cloudConfigurationPath;
-(id)copyPropertyList;
-(int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 currentPlistData:(id)arg4 containerPath:(const char*)arg5 diagnosticMessage:(const char**)arg6 ;
-(char)enqueueNewKey:(id)arg1 value:(id)arg2 size:(unsigned long)arg3 encoding:(int)arg4 ;
-(id)copyConfigurationFromPath:(CFStringRef)arg1 ;
-(void)synchronizeWithCloud:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)registerForChangeNotifications;
@end

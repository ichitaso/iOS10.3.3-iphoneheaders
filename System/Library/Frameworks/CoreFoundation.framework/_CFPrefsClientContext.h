/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject;

@interface _CFPrefsClientContext : NSObject {

	os_unfair_lock_s _lock;
	CFDictionaryRef _readPermissionsCache;
	CFDictionaryRef _writePermissionsCache;
	CFDictionaryRef _suiteCache;
	CFArrayRef _ownedSources;
	NSObject*<OS_xpc_object> _observationConnection;
	NSObject*<OS_xpc_object> _entitlements;
	CFBooleanRef _sandboxed;

}
@end


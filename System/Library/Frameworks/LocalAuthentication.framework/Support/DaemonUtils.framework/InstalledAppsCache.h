/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:25:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface InstalledAppsCache : NSObject {

	NSMutableDictionary* _appCache;
	NSMutableDictionary* _nameCache;
	NSMutableDictionary* _pluginCache;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_rebuildCache;
-(id)_nameForUUID:(id)arg1 fromDict:(id)arg2 bundleId:(id*)arg3 ;
-(void)_addApplicationToCache:(id)arg1 ;
-(void)_logStatus;
-(char)_isPlaceholder:(id)arg1 ;
-(void)_removeApplicationFromCache:(id)arg1 ;
-(void)_appRegistrationChanged;
-(id)appNameForUUID:(id)arg1 bundleId:(id*)arg2 ;
-(void)_appRegistrationAdded:(id)arg1 ;
-(void)_appRegistrationRemoved:(id)arg1 ;
-(id)pluginNameForUUID:(id)arg1 bundleId:(id*)arg2 ;
-(void)_currentLocaleChanged;
@end

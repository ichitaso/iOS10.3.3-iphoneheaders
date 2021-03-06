/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSTimer, NSObject, ACAccountStore;

@interface ACDAccountSync : NSObject {

	int _circleToken;
	int _keychainToken;
	NSTimer* _timer;
	NSObject*<OS_dispatch_queue> _syncQueue;
	char _enabled;
	char _duchessEnabled;
	ACAccountStore* _store;

}
+(id)sharedAccountSyncServer;
+(id)accountSyncUnsupportedTypes;
+(id)accountSyncSupportedTypes;
+(id)accountSyncPropertiesForAccount:(id)arg1 ;
+(id)duchessHostnames;
-(id)init;
-(void)dealloc;
-(void)setupAccountSync;
-(char)checkCircleState;
-(void)scheduleSync;
-(void)markMigrated;
-(id)getiOSVersion;
-(void)waitForBuddy;
-(void)setiOSVersion;
-(void)queueSync;
-(void)accountChanges:(id)arg1 ;
-(char)detectDuchess;
-(id)processAdds;
-(id)processDeletes;
-(void)createKeychainItems:(id)arg1 ;
-(id)processHostnameAdds;
-(id)processHostnameDeletes;
-(void)createAccounts:(id)arg1 ;
-(void)deleteAccounts:(id)arg1 ;
-(id)localAccounts;
-(id)remoteAccounts;
-(id)getAccountsOfType:(id)arg1 ;
-(id)accountPropertiesFromDictionary:(id)arg1 forType:(id)arg2 ;
-(char)unsupportedType:(id)arg1 ;
-(char)supportedType:(id)arg1 ;
-(id)remoteHostnameAccounts;
-(id)localHostnameAccounts;
-(id)smtpAccounts;
-(void)postNotificationFor:(id)arg1 ;
-(char)isDataclassActionRequired:(id)arg1 ;
-(char)locallyMigrated;
-(void)fixSMTP;
-(void)fixLDAP;
-(id)ldapAccounts;
-(char)isMigrated;
-(void)kvsChanges:(id)arg1 ;
-(void)sync;
-(char)migrate;
-(void)registerForNotifications;
-(id)primaryiCloudAccount;
-(void)devices;
@end


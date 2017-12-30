/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@interface ACDTCCUtilities : NSObject
+(CFStringRef)_TCCServiceForAccountTypeID:(id)arg1 ;
+(int)TCCStateForClient:(id)arg1 accountTypeID:(id)arg2 ;
+(char)TCCSupportedForAccountTypeID:(id)arg1 ;
+(char)setTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 toGranted:(char)arg3 ;
+(char)clearTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 ;
+(id)allTCCStatesForAccountTypeID:(id)arg1 ;
+(char)clearAllTCCStatesForAccountTypeID:(id)arg1 ;
@end

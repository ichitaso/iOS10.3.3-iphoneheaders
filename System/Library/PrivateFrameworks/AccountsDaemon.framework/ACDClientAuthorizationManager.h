/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACDDatabase;

@interface ACDClientAuthorizationManager : NSObject {

	ACDDatabase* _database;

}
-(id)allAuthorizationsForAccountTypeWithIdentifier:(id)arg1 ;
-(id)authorizationForClient:(id)arg1 accountTypeWithIdentifier:(id)arg2 ;
-(id)removeAuthorizationForClient:(id)arg1 accountType:(id)arg2 ;
-(id)authorizationForClient:(id)arg1 accountType:(id)arg2 ;
-(id)_setFromCSVString:(id)arg1 ;
-(id)removeAuthorizationForClient:(id)arg1 accountTypeWithIdentifier:(id)arg2 ;
-(id)removeAllClientAuthorizationsForAccountTypeWithIdentifier:(id)arg1 ;
-(id)setAuthorization:(id)arg1 forClient:(id)arg2 onAccountType:(id)arg3 ;
-(id)allAuthorizationsForAccountType:(id)arg1 ;
-(id)removeAllClientAuthorizationsForAccountType:(id)arg1 ;
-(id)_csvStringFromSet:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
@end


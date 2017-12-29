/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/SearchOperation.h>

@class NSProgress, NSSet;

@interface FullSearchOperation : SearchOperation {

	NSProgress* _progress;
	os_unfair_lock_s _accountsLock;
	NSSet* _accounts;

}
+(id)fullSearchForManager:(id)arg1 searchContext:(id)arg2 sources:(id)arg3 library:(id)arg4 ;
-(id)initWithManager:(id)arg1 library:(id)arg2 sources:(id)arg3 searchContext:(id)arg4 ;
-(void)updateWithAccounts:(id)arg1 ;
-(void)accountsChanged:(id)arg1 ;
-(void)performLocalSearch;
-(void)performRemoteSearchesAfterDelay:(double)arg1 ;
-(id)_remoteSearchableSourcesByAccount;
-(id)_performRemoteSearchesWithSources:(id)arg1 accountID:(id)arg2 ;
-(id)_performRemoteSearchesForAccount:(id)arg1 ;
-(void)_cancelIfNecessary;
-(void)_enumerateSearchableSourcesForAccount:(id)arg1 enumerator:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)progress;
-(void)main;
-(id)accounts;
@end


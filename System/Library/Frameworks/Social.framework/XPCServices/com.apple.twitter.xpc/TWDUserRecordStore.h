/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:32:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.twitter.xpc/com.apple.twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.twitter/ABSearchOperationDelegate.h>

@class TWDSession, ACAccount, ACAccountStore, SLDatabase, NSString;

@interface TWDUserRecordStore : NSObject <ABSearchOperationDelegate> {

	TWDSession* _weakSession;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	SLDatabase* _database;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 database:(id)arg2 account:(id)arg3 accountStore:(id)arg4 ;
-(void)updateFollowedUserRecordsIfNeeded;
-(void)userRecordsMatchingPredicate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateFollowedUserRecords;
-(void)runSynchronouslyOnCoreDataQueue:(/*^block*/id)arg1 ;
-(id)userRecordWithDictionaryRepresentation:(id)arg1 existed:(char*)arg2 ;
-(void)consumeUserRecordRepresentations:(id)arg1 ;
-(void)fetchFollowedUserRecordsWithCursor:(id)arg1 ;
-(void)consumeAddressBookRecords:(id)arg1 ;
-(void)findABEntriesWithTwitterScreenNames:(/*^block*/id)arg1 ;
-(id)userRecordEntityWithID:(id)arg1 ;
-(void)saveUserRecordStoreWithHandler:(/*^block*/id)arg1 ;
-(id)userRecordEntityWithScreenName:(id)arg1 ;
-(void)consumeScreenName:(id)arg1 existed:(char*)arg2 ;
-(void)findABEntriesWithScreenName:(id)arg1 ;
-(void)dealloc;
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(char)arg3 ;
@end

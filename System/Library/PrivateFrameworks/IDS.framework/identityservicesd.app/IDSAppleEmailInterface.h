/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:59 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/MSSearchDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface IDSAppleEmailInterface : NSObject <MSSearchDelegate> {

	NSMutableDictionary* _currentSearches;
	NSMutableArray* _handlers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_cancelAllSearches;
-(id)_existingSearchForEmail:(id)arg1 ;
-(void)_startSearchingForRegistrationEmail:(id)arg1 registrationInfo:(id)arg2 attempt:(int)arg3 ;
-(void)_cancelSearchesForEmail:(id)arg1 ;
-(id)_emailForSearch:(id)arg1 ;
-(int)_searchAttemptForSearch:(id)arg1 ;
-(id)_registrationInfoIDForSearch:(id)arg1 ;
-(id)_vettingIDForSearch:(id)arg1 ;
-(char)startMonitoringForEmail:(id)arg1 registrationInfo:(id)arg2 ;
-(char)cancelMonitoringForEmail:(id)arg1 registrationInfo:(id)arg2 ;
-(void)dealloc;
-(char)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end


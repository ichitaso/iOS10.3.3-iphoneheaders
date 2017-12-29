/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/Mail.assistantBundle/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAEmailSearch.h>
#import <libobjc.A.dylib/MSSearchDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSMutableArray, NSObject, NSString;

@interface MFAssistantEmailSearch : SAEmailSearch <MSSearchDelegate> {

	NSMutableArray* _results;
	unsigned _currentResultCount;
	NSObject*<OS_dispatch_semaphore> _searchCompleted;
	unsigned _hadError : 1;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_populateResults:(id)arg1 ;
-(id)_generateMSCriterion;
-(id)_generateAceResults;
-(void)_searchFinished:(id)arg1 ;
-(id)_validate;
-(id)_perform;
-(char)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end


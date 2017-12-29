/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DDActionsService.app/DDActionsService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DDActionsService/DDActionsService-Structs.h>
#import <libobjc.A.dylib/PARSessionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class PARSession, PARBag, NSObject, NSString;

@interface DDLookupQuery : NSObject <PARSessionDelegate> {

	PARSession* _session;
	PARBag* _bag;
	NSObject*<OS_dispatch_queue> _bagQueue;
	NSObject*<OS_dispatch_semaphore> _bagSem;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)sectionsForString:(id)arg1 useNetwork:(char)arg2 clientID:(id)arg3 selectionType:(int)arg4 domain:(id)arg5 range:(NSRange)arg6 handler:(/*^block*/id)arg7 ;
+(id)expandedResultFromSections:(id)arg1 ;
+(id)dictionarySectionsForString:(id)arg1 queryId:(unsigned long long)arg2 ;
+(id)footerSectionsForString:(id)arg1 queryId:(unsigned long long)arg2 ;
+(id)_rankFeedbackWithLocalSections:(id)arg1 remoteSections:(id)arg2 footerSections:(id)arg3 ;
+(char)parsecEnabled;
+(void)sectionsForResult:(_DDResult*)arg1 useNetwork:(char)arg2 clientID:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)feedbackListener;
+(id)sharedSession;
-(id)bag;
-(void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3 ;
-(id)initWithSession:(id)arg1 ;
@end


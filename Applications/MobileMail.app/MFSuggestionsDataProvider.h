/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, SGSuggestionsServiceMailProtocol, OS_dispatch_semaphore;
@class NSObject, MFMailMessageLibrary, NSCache, NSMutableArray, NSArray;

@interface MFSuggestionsDataProvider : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _suggestionsQueue;
	MFMailMessageLibrary* _library;
	NSObject*<SGSuggestionsServiceMailProtocol> _harvesterService;
	NSCache* _mailboxCache;
	NSObject*<OS_dispatch_semaphore> _scheduledDownloadSemaphore;
	NSMutableArray* _scheduledDownloadClients;
	char _suspended;
	int _fullDownloadToken;
	NSArray* _unconfirmedLostMessages;
	double _lastUnconfirmedLostMessagesSearchTime;

}

@property (nonatomic,retain) NSArray * unconfirmedLostMessages;                         //@synthesize unconfirmedLostMessages=_unconfirmedLostMessages - In the implementation block
@property (assign,nonatomic) double lastUnconfirmedLostMessagesSearchTime;              //@synthesize lastUnconfirmedLostMessagesSearchTime=_lastUnconfirmedLostMessagesSearchTime - In the implementation block
+(char)isHarvestingSupported;
-(void)resumeFullDownloadProcessing;
-(void)refreshLostMessagesUntilDeferred:(/*^block*/id)arg1 ;
-(void)_unregisterXpcActivity;
-(void)_libraryFinishedReconciliation:(id)arg1 ;
-(void)_libraryWillBecomeUnavailable:(id)arg1 ;
-(void)_registerXpcActivity;
-(void)_scheduleBackgroundDownload;
-(void)_processBackgroundDownload;
-(id)_libraryMessagesForSGMailMessageKeys:(id)arg1 ;
-(id)_mailboxForMessageLikeObject:(id)arg1 ;
-(NSArray *)unconfirmedLostMessages;
-(void)setLastUnconfirmedLostMessagesSearchTime:(double)arg1 ;
-(double)lastUnconfirmedLostMessagesSearchTime;
-(void)setUnconfirmedLostMessages:(NSArray *)arg1 ;
-(id)_messageFromMessageInfo:(id)arg1 ;
-(void)dealloc;
-(void)suspend;
-(void)resume;
-(id)initWithLibrary:(id)arg1 ;
-(char)_protectedDataAvailable;
@end

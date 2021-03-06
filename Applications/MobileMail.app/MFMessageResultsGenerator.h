/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/_MFResultsGenerator.h>

@class MFConditionLock, MFAttachmentManager, MFLibraryMessage;

@interface MFMessageResultsGenerator : _MFResultsGenerator {

	void* _addressBook;
	MFConditionLock* _contextLoadConditionLock;
	char _shouldDownload;
	MFAttachmentManager* _attachmentManager;
	MFLibraryMessage* _message;

}

@property (nonatomic,retain) MFAttachmentManager * attachmentManager;              //@synthesize attachmentManager=_attachmentManager - In the implementation block
@property (nonatomic,retain) MFLibraryMessage * message;                           //@synthesize message=_message - In the implementation block
-(SEL)selectorForKey:(id)arg1 ;
-(id)initWithKeys:(id)arg1 downloadIfNecessary:(char)arg2 ;
-(id)_messageReference:(id)arg1 ;
-(id)_localMessageReference:(id)arg1 ;
-(id)_accountReference:(id)arg1 ;
-(id)_mailboxURL:(id)arg1 ;
-(id)_messageIDHash:(id)arg1 ;
-(id)_conversationReference:(id)arg1 ;
-(id)_subject:(id)arg1 ;
-(id)_bodySummary:(id)arg1 ;
-(id)_sender:(id)arg1 ;
-(id)_recipientBcc:(id)arg1 ;
-(id)_recipientCc:(id)arg1 ;
-(id)_recipientTo:(id)arg1 ;
-(id)_dateSent:(id)arg1 ;
-(id)_dateReceived:(id)arg1 ;
-(id)_status:(id)arg1 ;
-(id)_outgoing:(id)arg1 ;
-(id)_receivingAddresses:(id)arg1 ;
-(id)_isLocalDraft:(id)arg1 ;
-(id)_rfc822Data:(id)arg1 ;
-(id)_suppressionContexts:(id)arg1 ;
-(id)_bestAlternativePart:(id)arg1 ;
-(id)_headerData:(id)arg1 ;
-(id)_predictiveModelSummary:(id)arg1 ;
-(id)_attachmentValueForKey:(id)arg1 ;
-(id)_copyPredictiveModelSummaryForMessage:(id)arg1 downloadIfNecessary:(char)arg2 ;
-(id)_convertEmailAddress:(id)arg1 ;
-(id)_convertEmailAddresses:(id)arg1 ;
-(id)_knownAttachmentLimiterTests;
-(/*^block*/id)_testForAttachmentLimiterType:(id)arg1 ;
-(void)dealloc;
-(void)setMessage:(MFLibraryMessage *)arg1 ;
-(MFLibraryMessage *)message;
-(id)_headerValueForKey:(id)arg1 ;
-(MFAttachmentManager *)attachmentManager;
-(void)setAttachmentManager:(MFAttachmentManager *)arg1 ;
-(void*)_addressBook;
@end


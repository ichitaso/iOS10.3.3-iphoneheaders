/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@class MFConditionLock, NSMutableArray, MCSChange, MFInvocationQueue, NSMutableDictionary, NSUndoManager, NSString;

@interface MailChangeManager : NSObject <MFDiagnosticsGenerator> {

	MFConditionLock* _processingLock;
	NSMutableArray* _pendingChanges;
	NSMutableArray* _committedChanges;
	MCSChange* _currentChange;
	MFInvocationQueue* _invocationQueue;
	NSMutableDictionary* _lastCalculatedMailboxDictionary;
	NSUndoManager* _undoManager;
	char _isUndoing;
	CFDictionaryRef _mailboxPreChangeUnreadCounts;
	CFDictionaryRef _mailboxPostChangeUnreadCounts;

}

@property (readonly) NSUndoManager * undoManager;                   //@synthesize undoManager=_undoManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedChangeManager;
-(id)allMailboxUidsSortedWithSpecialsAtTopForAccount:(id)arg1 includingLocals:(char)arg2 client:(id)arg3 outbox:(id)arg4 ;
-(id)displayNameUsingSpecialNamesForMailbox:(id)arg1 ;
-(unsigned)unreadCountForMailboxes:(id)arg1 ;
-(id)applyPendingChangesToMessages:(id)arg1 ;
-(void)purgeCommittedChanges;
-(unsigned)unreadCountForSources:(id)arg1 ;
-(id)applyPendingChangesToMessageInfos:(id)arg1 ;
-(void)_mailboxUserInfoDidChange:(id)arg1 ;
-(void)_mailMessageStoreMessagesCompacted:(id)arg1 ;
-(void)_invalidateUnreadCountsForKey:(id)arg1 onlyPostChange:(char)arg2 ;
-(void)_revertCommittedChange:(id)arg1 ;
-(id)applyCommittedChanges:(id)arg1 toObjects:(id)arg2 ;
-(id)applyPendingChangesToObjects:(id)arg1 ;
-(unsigned)_serverUnreadCountForMailbox:(id)arg1 ;
-(void)_updateUnreadCountForMailbox:(id)arg1 ;
-(unsigned)_unreadCountAfterChangesForMailbox:(id)arg1 withKey:(id)arg2 criteria:(id)arg3 ;
-(unsigned)unreadCountForMailboxes:(id)arg1 criteria:(id)arg2 ;
-(unsigned)unreadCountForMailbox:(id)arg1 criteria:(id)arg2 ;
-(unsigned)_serverUnreadOnlyOnServerCountForMailboxes:(id)arg1 ;
-(unsigned)unreadCountForSource:(id)arg1 ;
-(void)_modifyMailboxesForMailboxTree:(id)arg1 forChange:(id)arg2 ;
-(id)genericMailboxUidsSortedForAccount:(id)arg1 includingLocals:(char)arg2 excludingMailbox:(id)arg3 ;
-(void)addChange:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSUndoManager *)undoManager;
-(void)resume;
-(void)pause;
-(void)processPendingChanges;
-(id)copyDiagnosticInformation;
-(unsigned)unreadCountForMailbox:(id)arg1 ;
-(id)parentForMailbox:(id)arg1 ;
-(int)levelForMailbox:(id)arg1 ;
-(id)displayNameForMailbox:(id)arg1 ;
-(char)mailboxHasSubMailboxes:(id)arg1 ;
@end


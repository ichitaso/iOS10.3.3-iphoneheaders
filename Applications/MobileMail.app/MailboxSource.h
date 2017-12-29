/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/GenericSource.h>

@class NSArray, NSString, MFMailMessageStore, MFMessageRuleManager, MFMailboxSourceMessageCache;

@interface MailboxSource : GenericSource {

	NSArray* _generalObservationTokens;
	NSArray* _storeObservationTokens;
	NSString* _uniqueID;
	NSString* _originalPath;
	CFSetRef _messagesRemovedByUser;
	unsigned _protectedDataIsAvailable : 1;
	unsigned _shouldThread : 1;
	MFMailMessageStore* _store;
	MFMessageRuleManager* _ruleManager;
	MFMailboxSourceMessageCache* _messageCache;

}

@property (nonatomic,retain) MFMailMessageStore * store;                              //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) MFMessageRuleManager * ruleManager;                      //@synthesize ruleManager=_ruleManager - In the implementation block
@property (nonatomic,retain) MFMailboxSourceMessageCache * messageCache;              //@synthesize messageCache=_messageCache - In the implementation block
-(id)mailboxUids;
-(char)representsMailboxUid:(id)arg1 ;
-(int)correspondingType;
-(char)supportsSearch;
-(char)isBaseSource;
-(void)setLastViewedMessage:(id)arg1 ;
-(char)supportsDeleteAll;
-(char)deleteMovesToTrash;
-(char)supportsMarkAll;
-(id)accountForAutoFetch;
-(void)markAllMessagesAsViewed;
-(void)markAllMessagesAsNotViewed;
-(void)markAllMessagesAsFlagged;
-(void)markAllMessagesAsNotFlagged;
-(char)shouldShowUnreadCount;
-(char)shouldCompactOnFetch;
-(id)lastViewedMessage;
-(id)messageForMessageID:(id)arg1 ;
-(id)uniqueIDForStorage;
-(char)representsMailboxID:(unsigned)arg1 ;
-(void)reloadPreferences;
-(void)setProtectedDataAvailable:(char)arg1 ;
-(void)_conversationHasMerged:(id)arg1 ;
-(void)emptyTrashAsNeeded;
-(unsigned)currentFetchWindow;
-(int)fetchMobileSynchronously:(unsigned)arg1 preservingUID:(id)arg2 options:(unsigned)arg3 error:(id*)arg4 ;
-(char)canLoadOlderMessages;
-(int)fetchNumOlderMessages:(unsigned)arg1 preservingUID:(id)arg2 ;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)arg1 ;
-(id)messageForMessageInfo:(id)arg1 cacheIfNotAlready:(char)arg2 ;
-(id)cachedMessageForMessageInfo:(id)arg1 ;
-(id)bulletinsContext;
-(unsigned)remoteMessageCount;
-(id)noMessagesLabelText;
-(void)markAllMessagesAsDeletedOrArchived:(unsigned)arg1 withObserver:(id)arg2 ;
-(unsigned)allMessageCount;
-(unsigned)remoteAndLocalUnreadCount;
-(unsigned)onlyRemoteUnreadCount;
-(id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 ;
-(char)needsFetch;
-(id)uniqueIDForStatus;
-(char)supportsFlagging;
-(char)shouldThreadConversations;
-(char)shouldIncludeWholeThreads;
-(char)shouldPlayNewMailSound;
-(id)equivalentCriterion;
-(id)storeSearchResultUsingSearchContext:(id)arg1 limit:(unsigned)arg2 error:(id*)arg3 ;
-(id)_messageWithLibraryID:(unsigned)arg1 ;
-(void)registerForGeneralNotifications;
-(void)unregisterForStoreNotifications;
-(void)unregisterForGeneralNotifications;
-(MFMailboxSourceMessageCache *)messageCache;
-(void)_resetSourceAfterAccountsChange;
-(void)_conversationFlagsChanged:(id)arg1 ;
-(void)_storeMessageFlagsChanged:(id)arg1 ;
-(void)_storeAddedMessages:(id)arg1 ;
-(void)_storeRemovedMessages:(id)arg1 ;
-(void)_forwardNotification:(id)arg1 ;
-(void)registerForNotificationsForStore:(id)arg1 ;
-(id)_copyObjectsByApplyingPendingChangesToObjects:(id)arg1 ;
-(id)_copyMessageInfosByApplyingPendingChangesToMessageInfos:(id)arg1 ;
-(id)_messageInfosForMessagesInConversationsContainingMessageInfos:(id)arg1 ;
-(unsigned)_messageCountForFetch;
-(char)_shouldDeleteImmediately;
-(void)_deleteImmediatelyAllMessagesWithObserver:(id)arg1 ;
-(void)_addAllMessageChangeSetWithOperation:(id)arg1 ;
-(void)_forwardNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_updateCachedMessage:(id)arg1 ;
-(MFMessageRuleManager *)ruleManager;
-(id)_copyMessagesByApplyingPendingChangesToMessages:(id)arg1 ;
-(void)setRuleManager:(MFMessageRuleManager *)arg1 ;
-(void)setMessageCache:(MFMailboxSourceMessageCache *)arg1 ;
-(id)_store;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(char)isProtectedDataAvailable;
-(void)close;
-(unsigned)messageCount;
-(void)open;
-(void)applyChanges;
-(id)lastViewedMessageDate;
-(char)supportsArchiving;
-(char)shouldArchiveByDefault;
-(char)shouldGrowFetchWindow;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(char)canFetchSearchResults;
-(int)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 ;
-(id)initWithMailbox:(id)arg1 ;
-(id)mailboxName;
-(id)copyMessageInfosMatchingCriterion:(id)arg1 ;
-(long long)oldestKnownConversation;
-(id)oldestKnownMessage;
-(char)supportsThreadOperations;
-(void)flushCaches;
-(id)diagnosticDescription;
-(void)setStore:(MFMailMessageStore *)arg1 ;
-(MFMailMessageStore *)store;
@end


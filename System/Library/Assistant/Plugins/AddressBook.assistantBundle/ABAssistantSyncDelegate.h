/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABAssistantSyncDelegate <NSObject>
@property (nonatomic,readonly) void* addressBook; 
@required
-(id)newSADomainObjectFromABRecord:(void*)arg1;
-(void)setCurrentSyncSnapshot:(id)arg1;
-(id)newSADomainObjectFromDeletedRecordID:(int)arg1;
-(id)newSADomainObjectFromABRecordID:(int)arg1;
-(void)resetCurrentSyncSnapshot;
-(BOOL)verifyChangeHistory;
-(id)getAnchorOfLastDeletedChangeHistory;
-(BOOL)hasRecordsForFullSync;
-(void)deleteChangeHistoryToAnchor:(id)arg1;
-(CFStringRef)fullSyncSnapshotProperty;
-(CFArrayRef)copyAllRecordsForFullSync;
-(void)copyChangeHistoryAfterAnchor:(id)arg1 changedIDs:(const *)arg2 changeTypes:(const *)arg3 sequenceNumbers:(const *)arg4;
-(BOOL)shouldSyncSADomainObject:(id)arg1;
-(int)currentSyncSnapshotCount;
-(id)currentSyncShapshotAnchor;
-(id)expectedSyncKeyPrefix;
-(void)setSyncKey:(id)arg1;
-(void*)addressBook;

@end


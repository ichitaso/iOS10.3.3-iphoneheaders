/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <Foundation/NSOperation.h>

@class NSManagedObjectID, NSMutableDictionary;

@interface ICImportLegacyAccountOperation : NSOperation {

	char _randomizeImportOrder;
	char _copyingPrimaryAccount;
	char _renameFolders;
	NSManagedObjectID* _legacyAccountObjectID;
	NSManagedObjectID* _destinationAccountObjectID;
	NSMutableDictionary* _legacyNoteIntegerIdToNoteIdentifierDict;

}

@property (nonatomic,retain) NSManagedObjectID * legacyAccountObjectID;                                  //@synthesize legacyAccountObjectID=_legacyAccountObjectID - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * destinationAccountObjectID;                             //@synthesize destinationAccountObjectID=_destinationAccountObjectID - In the implementation block
@property (assign,nonatomic) char renameFolders;                                                         //@synthesize renameFolders=_renameFolders - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * legacyNoteIntegerIdToNoteIdentifierDict;              //@synthesize legacyNoteIntegerIdToNoteIdentifierDict=_legacyNoteIntegerIdToNoteIdentifierDict - In the implementation block
@property (assign,nonatomic) char randomizeImportOrder;                                                  //@synthesize randomizeImportOrder=_randomizeImportOrder - In the implementation block
@property (assign,getter=isCopyingPrimaryAccount,nonatomic) char copyingPrimaryAccount;                  //@synthesize copyingPrimaryAccount=_copyingPrimaryAccount - In the implementation block
+(void)ensurePermanentObjectIDForObject:(id)arg1 ;
+(unsigned)noteMigrationBatchSize;
-(void)setLegacyAccountObjectID:(NSManagedObjectID *)arg1 ;
-(void)setDestinationAccountObjectID:(NSManagedObjectID *)arg1 ;
-(void)setRenameFolders:(char)arg1 ;
-(void)setLegacyNoteIntegerIdToNoteIdentifierDict:(NSMutableDictionary *)arg1 ;
-(void)setCopyingPrimaryAccount:(char)arg1 ;
-(NSManagedObjectID *)destinationAccountObjectID;
-(id)legacyAccountInContext:(NoteContext*)arg1 ;
-(NSManagedObjectID *)legacyAccountObjectID;
-(void)cancelIfAccountWasDeleted;
-(void)importFolders;
-(void)importNotes;
-(void)copyChangesForDefaultFolder;
-(char)randomizeImportOrder;
-(id)legacyNoteObjectIDsToImport;
-(id)importLegacyFolder:(id)arg1 toAccount:(id)arg2 ;
-(id)importLegacyNote:(id)arg1 deviceMigrationIdentifier:(id)arg2 toFolder:(id)arg3 ;
-(id)hashFromAttributedString:(id)arg1 ;
-(char)isLegacyNoteADuplicate:(id)arg1 ;
-(id)existingImportedNoteForLegacyNote:(id)arg1 withContentHash:(id)arg2 identifier:(id)arg3 context:(id)arg4 ;
-(int)importChoiceForLegacyNote:(id)arg1 withContentHash:(id)arg2 identifier:(id)arg3 existingImportedNote:(id)arg4 destinationAccount:(id)arg5 ;
-(NSMutableDictionary *)legacyNoteIntegerIdToNoteIdentifierDict;
-(char)isCopyingPrimaryAccount;
-(char)renameFolders;
-(id)initWithLegacyAccount:(id)arg1 destinationAccount:(id)arg2 renameFolders:(char)arg3 ;
-(void)setRandomizeImportOrder:(char)arg1 ;
-(void)main;
@end


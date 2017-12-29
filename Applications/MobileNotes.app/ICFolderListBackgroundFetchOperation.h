/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSCache;

@interface ICFolderListBackgroundFetchOperation : NSOperation {

	char _isAccount;
	NSString* _noteContainerIdentifier;
	NSString* _noteStoreIdentifier;
	NSString* _noteAccountIdentifier;
	NSCache* _cellDataCache;

}

@property (nonatomic,copy) NSString * noteContainerIdentifier;              //@synthesize noteContainerIdentifier=_noteContainerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * noteStoreIdentifier;                  //@synthesize noteStoreIdentifier=_noteStoreIdentifier - In the implementation block
@property (nonatomic,copy) NSString * noteAccountIdentifier;                //@synthesize noteAccountIdentifier=_noteAccountIdentifier - In the implementation block
@property (assign,nonatomic) char isAccount;                                //@synthesize isAccount=_isAccount - In the implementation block
@property (nonatomic,retain) NSCache * cellDataCache;                       //@synthesize cellDataCache=_cellDataCache - In the implementation block
@property (nonatomic,readonly) NSString * operationIdentifier; 
-(void)setNoteContainerIdentifier:(NSString *)arg1 ;
-(void)setIsAccount:(char)arg1 ;
-(void)setCellDataCache:(NSCache *)arg1 ;
-(void)setNoteAccountIdentifier:(NSString *)arg1 ;
-(void)setNoteStoreIdentifier:(NSString *)arg1 ;
-(NSString *)noteContainerIdentifier;
-(char)isAccount;
-(NSString *)noteAccountIdentifier;
-(NSString *)noteStoreIdentifier;
-(NSCache *)cellDataCache;
-(NSString *)operationIdentifier;
-(id)initWithNoteContainerIdentifier:(id)arg1 folderListDataCache:(id)arg2 isAccount:(char)arg3 ;
-(id)initWithLegacyAccountIdentifier:(id)arg1 legacyFolderIdentifier:(id)arg2 folderListDataCache:(id)arg3 ;
-(void)main;
@end


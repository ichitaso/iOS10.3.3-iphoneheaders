/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ICArchivedUIStateDelegate
@property (nonatomic,copy,readonly) NSString * currentNoteIdentifier; 
@property (nonatomic,copy,readonly) NSString * currentFolderIdentifier; 
@property (nonatomic,copy,readonly) NSString * currentNoteContainerIdentifier; 
@required
-(NSString *)currentNoteIdentifier;
-(NSString *)currentFolderIdentifier;
-(NSString *)currentNoteContainerIdentifier;

@end


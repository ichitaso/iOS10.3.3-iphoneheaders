/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/com.apple.mobilenotes.SharingExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.mobilenotes.SharingExtension/ICImportNoteFileParser.h>

@protocol OS_dispatch_queue;
@class ICNotesImporterClient, NSObject, NSString;

@interface ICEvernoteFileParser : NSObject <ICImportNoteFileParser> {

	char _isParsing;
	char _shouldCancelParsingProcess;
	ICNotesImporterClient* _notesImporterClient;
	NSObject*<OS_dispatch_queue> _contentParseQueue;

}

@property (nonatomic,retain) ICNotesImporterClient * notesImporterClient;                 //@synthesize notesImporterClient=_notesImporterClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> contentParseQueue;              //@synthesize contentParseQueue=_contentParseQueue - In the implementation block
@property (assign,nonatomic) char isParsing;                                              //@synthesize isParsing=_isParsing - In the implementation block
@property (assign,nonatomic) char shouldCancelParsingProcess;                             //@synthesize shouldCancelParsingProcess=_shouldCancelParsingProcess - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)allowedFileTypes;
-(void)cancelParsing;
-(char)canHandleFileURL:(id)arg1 ;
-(id)getTypeIdentifierForFileURL:(id)arg1 ;
-(void)totalNotesFoundAtFileURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)parseFileURL:(id)arg1 newNoteBlock:(/*^block*/id)arg2 updatedNoteBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 completedParsingBlock:(/*^block*/id)arg5 ;
-(id)bookmarkDataFromFileURL:(id)arg1 ;
-(ICNotesImporterClient *)notesImporterClient;
-(void)setShouldCancelParsingProcess:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)contentParseQueue;
-(char)shouldCancelParsingProcess;
-(void)addTodoListsIfNeededInContent:(id)arg1 forEvernoteNote:(id)arg2 ;
-(void)addTitleInContent:(id)arg1 forEvernoteNote:(id)arg2 ;
-(void)addAttachmentsInContent:(id)arg1 forEvernoteResource:(id)arg2 forNote:(id)arg3 ;
-(void)setNotesImporterClient:(ICNotesImporterClient *)arg1 ;
-(void)setContentParseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(char)isParsing;
-(void)setIsParsing:(char)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MailboxContentSelectionModelDataSource;
@class NSMutableOrderedSet, NSArray;

@interface MailboxContentSelectionModel : NSObject {

	id<MailboxContentSelectionModelDataSource> _dataSource;
	NSMutableOrderedSet* _selectedMessageInfos;
	NSArray* _orderedSelectedMessages;

}
+(id)selectionWithIndexPath:(id)arg1 dataSource:(id)arg2 ;
-(unsigned)deleteSelectionState;
-(id)selectedMessages;
-(id)orderedSelectedMessages;
-(id)flaggableMessages;
-(char)isPathSelected:(id)arg1 ;
-(void)selectIndexPath:(id)arg1 ;
-(void)deselectIndexPath:(id)arg1 ;
-(id)firstSelectedMessage;
-(void)deselectAllIndexPathsInTableView:(id)arg1 ;
-(void)reselectIndexPathsWithTableView:(id)arg1 ;
-(void)updateSelectionWithAddedMessageInfos:(id)arg1 removedMessageInfos:(id)arg2 mergedConversations:(id)arg3 ;
-(char)_hasSelectedMessageInfos:(id)arg1 ;
-(id)sourcesForSelectedMessages;
-(void)_enumerateSelectedIndexPaths:(/*^block*/id)arg1 ;
-(unsigned)_selectionStateForSources:(id)arg1 ;
-(char)allSourcesThreadConversations;
-(id)init;
-(void)dealloc;
-(unsigned)selectionState;
-(unsigned)messageCount;
-(void)clear;
-(id)initWithDataSource:(id)arg1 ;
@end


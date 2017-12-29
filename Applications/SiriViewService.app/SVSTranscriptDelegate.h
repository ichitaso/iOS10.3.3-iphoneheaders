/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVSTranscriptDelegate <NSObject>
@required
-(id)viewControllerDelegateForTranscript:(id)arg1;
-(void)transcript:(id)arg1 didInsertTranscriptItemsAtIndexes:(id)arg2;
-(void)transcript:(id)arg1 didDiscardTranscriptItemsWithConversationItemIdentifiers:(id)arg2;
-(void)transcript:(id)arg1 didReplaceTranscriptItemsAtIndexes:(id)arg2 replacedTranscriptItems:(id)arg3;
-(void)transcript:(id)arg1 didReloadTranscriptItemsAtIndexes:(id)arg2;
-(void)transcript:(id)arg1 didRemoveTranscriptItems:(id)arg2 atIndexes:(id)arg3;
-(void)transcript:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;
-(void)transcript:(id)arg1 performAceCommands:(id)arg2 conversationItemIdentifier:(id)arg3;

@end


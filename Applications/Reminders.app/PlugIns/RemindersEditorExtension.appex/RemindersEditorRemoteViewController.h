/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/PlugIns/RemindersEditorExtension.appex/RemindersEditorExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLComposeServiceViewController.h>
#import <RemindersEditorExtension/RemindersDetailEditorControllerDelegate.h>

@class EKReminder, RemindersDetailEditorController, SLComposeSheetConfigurationItem, NSString;

@interface RemindersEditorRemoteViewController : SLComposeServiceViewController <RemindersDetailEditorControllerDelegate> {

	EKReminder* _reminder;
	RemindersDetailEditorController* _editor;
	int _numItemsToLoad;
	SLComposeSheetConfigurationItem* _optionsConfigurationItem;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remindersDetailEditorSelectedCalendarDidChange:(id)arg1 ;
-(void)_addItemToLoad;
-(void)_finishedLoadingItem;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(void)didSelectPost;
-(id)configurationItems;
-(char)isContentValid;
-(void)presentationAnimationDidFinish;
-(void)didSelectCancel;
@end


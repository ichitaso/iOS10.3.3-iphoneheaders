/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/TracePickerController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class UIToolbar, UIBarButtonItem, NSString;

@interface NavSettingsTracePickerController : TracePickerController <MFMailComposeViewControllerDelegate> {

	char _showingPlayButton;
	UIToolbar* _toolbar;
	UIBarButtonItem* _deleteButtonItem;
	UIBarButtonItem* _deleteAllButtonItem;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)navigationDestinationTitle;
+(Class)_mfMailComposeViewController;
-(void)updateTracePickerOptions;
-(id)tracePickerOptionsForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)_showDeleteFileSheet;
-(void)_showDeleteFileSheetForDeleteAll;
-(void)_showDeleteFileSheetForTraceNames:(id)arg1 ;
-(id)init;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
@end


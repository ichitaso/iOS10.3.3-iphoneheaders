/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/com.apple.mobilenotes.SharingExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <com.apple.mobilenotes.SharingExtension/ICImportNoteProcessorDelegate.h>

@class ICSERootViewController, ICImportNoteProcessor, ICImportSEProgressViewController, UIAlertController, NSDate, NSString;

@interface ICImportSERootViewController : UIViewController <ICImportNoteProcessorDelegate> {

	ICSERootViewController* _rootViewController;
	ICImportNoteProcessor* _importNoteProcessor;
	ICImportSEProgressViewController* _progressViewController;
	UIAlertController* _progressAlertController;
	NSDate* _lastAccessibilityAnnouncementDate;

}

@property (nonatomic,retain) ICImportNoteProcessor * importNoteProcessor;                            //@synthesize importNoteProcessor=_importNoteProcessor - In the implementation block
@property (nonatomic,retain) ICImportSEProgressViewController * progressViewController;              //@synthesize progressViewController=_progressViewController - In the implementation block
@property (nonatomic,retain) UIAlertController * progressAlertController;                            //@synthesize progressAlertController=_progressAlertController - In the implementation block
@property (nonatomic,retain) NSDate * lastAccessibilityAnnouncementDate;                             //@synthesize lastAccessibilityAnnouncementDate=_lastAccessibilityAnnouncementDate - In the implementation block
@property (assign,nonatomic,__weak) ICSERootViewController * rootViewController;                     //@synthesize rootViewController=_rootViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)importNotes;
-(void)hideUI;
-(void)setImportNoteProcessor:(ICImportNoteProcessor *)arg1 ;
-(ICImportNoteProcessor *)importNoteProcessor;
-(void)setProgressAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)progressAlertController;
-(void)progressUpdatedForImportNoteProcessor:(id)arg1 ;
-(void)importStartedForNoteProcessor:(id)arg1 ;
-(void)importCompletedForNoteProcessor:(id)arg1 destinationFolder:(id)arg2 ;
-(ICSERootViewController *)rootViewController;
-(void)setRootViewController:(ICSERootViewController *)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLoad;
-(NSDate *)lastAccessibilityAnnouncementDate;
-(void)setLastAccessibilityAnnouncementDate:(NSDate *)arg1 ;
-(void)setProgressViewController:(ICImportSEProgressViewController *)arg1 ;
-(ICImportSEProgressViewController *)progressViewController;
@end


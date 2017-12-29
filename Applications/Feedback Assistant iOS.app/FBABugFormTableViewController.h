/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>
#import <Feedback Assistant iOS/FBAAttachmentCollectorDelegate.h>
#import <Feedback Assistant iOS/FBADraftingDelegate.h>
#import <Feedback Assistant iOS/FBABugFormEditorDelegate.h>

@protocol FBAProjectEntity;
@class FBADraftingController, FBAAttachmentCollector, UIView, UILabel, UIButton, UIBarButtonItem, NSDictionary, UIDocumentInteractionController, FBAFormResponse, FBABugForm, NSString;

@interface FBABugFormTableViewController : UITableViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIDocumentInteractionControllerDelegate, FBAAttachmentCollectorDelegate, FBADraftingDelegate, FBABugFormEditorDelegate> {

	char _attemptedSubmission;
	id<FBAProjectEntity> _projectContext;
	FBADraftingController* _draftingController;
	FBAAttachmentCollector* _attachmentCollector;
	UIView* _headerView;
	UILabel* _projectLabel;
	UILabel* _projectSubtitleLabel;
	UIButton* _projectPickerButton;
	UIBarButtonItem* _submitButton;
	NSDictionary* _pendingAttachments;
	UIView* _loadingView;
	unsigned long _whooshSoundID;
	UIDocumentInteractionController* _docController;

}

@property (readonly) FBAFormResponse * formResponse; 
@property (readonly) FBABugForm * bugForm; 
@property (nonatomic,retain) FBADraftingController * draftingController;                   //@synthesize draftingController=_draftingController - In the implementation block
@property (nonatomic,retain) FBAAttachmentCollector * attachmentCollector;                 //@synthesize attachmentCollector=_attachmentCollector - In the implementation block
@property (assign,nonatomic,__weak) UIView * headerView;                                   //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * projectLabel;                                //@synthesize projectLabel=_projectLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * projectSubtitleLabel;                        //@synthesize projectSubtitleLabel=_projectSubtitleLabel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * projectPickerButton;                        //@synthesize projectPickerButton=_projectPickerButton - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * submitButton;                        //@synthesize submitButton=_submitButton - In the implementation block
@property (assign,nonatomic) char attemptedSubmission;                                     //@synthesize attemptedSubmission=_attemptedSubmission - In the implementation block
@property (retain) NSDictionary * pendingAttachments;                                      //@synthesize pendingAttachments=_pendingAttachments - In the implementation block
@property (nonatomic,retain) UIView * loadingView;                                         //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,nonatomic) unsigned long whooshSoundID;                                  //@synthesize whooshSoundID=_whooshSoundID - In the implementation block
@property (nonatomic,retain) UIDocumentInteractionController * docController;              //@synthesize docController=_docController - In the implementation block
@property (retain) id<FBAProjectEntity> projectContext;                                    //@synthesize projectContext=_projectContext - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)draftingControllerDidFinishLoading:(id)arg1 withError:(id)arg2 ;
-(void)draftingControllerDidBeginLoading:(id)arg1 ;
-(FBAFormResponse *)formResponse;
-(FBABugForm *)bugForm;
-(void)draftingController:(id)arg1 madeVisibilityUpdates:(id)arg2 ;
-(void)loadFormResponse:(id)arg1 ;
-(void)updateHeader;
-(id)questionGroupForSection:(int)arg1 ;
-(id)textForAnswer:(id)arg1 forQuestion:(id)arg2 ;
-(void)clearDetail;
-(void)postAttachFiles:(id)arg1 ;
-(void)closeWithCompletion:(/*^block*/id)arg1 ;
-(void)answerDidChangeForQuestion:(id)arg1 ;
-(void)attachmentCollectorAttachmentsDidChange:(id)arg1 ;
-(void)attachedFilesDidChange;
-(void)displayPickerForBugForms:(id)arg1 sender:(id)arg2 ;
-(void)setPendingAttachments:(NSDictionary *)arg1 ;
-(void)setProjectContext:(id<FBAProjectEntity>)arg1 ;
-(NSDictionary *)pendingAttachments;
-(void)preAttachFiles:(id)arg1 ;
-(void)loadNewRepsonseForBugForm:(id)arg1 ;
-(void)setAttachmentCollector:(FBAAttachmentCollector *)arg1 ;
-(FBAAttachmentCollector *)attachmentCollector;
-(void)gatherAttachmentsForIndexPath:(id)arg1 ;
-(void)setDocController:(UIDocumentInteractionController *)arg1 ;
-(UIDocumentInteractionController *)docController;
-(UILabel *)projectSubtitleLabel;
-(FBADraftingController *)draftingController;
-(UILabel *)projectLabel;
-(UIButton *)projectPickerButton;
-(char)shouldDisplayChangeButton;
-(void)fillInAnswers;
-(id)validatedAttachmentDictionary:(id)arg1 ;
-(void)findUnsatisfiedRequirementWitAttachmentDictionary:(id)arg1 withUnsatsifed:(id*)arg2 andPending:(id*)arg3 ;
-(void)setAttemptedSubmission:(char)arg1 ;
-(void)updateSubmitButtonState;
-(char)attemptedSubmission;
-(id<FBAProjectEntity>)projectContext;
-(void)pickNewDraftForProject:(id)arg1 sender:(id)arg2 ;
-(void)_changeToBugForm:(id)arg1 ;
-(void)displayPickerForProjects:(id)arg1 sender:(id)arg2 ;
-(char)hasFileArea;
-(void)checkLegalAndSubmit;
-(void)questionVisiblityDidUpdateForDraftingController:(id)arg1 ;
-(void)didPressChangeBugForm:(id)arg1 ;
-(void)beginPresubmissionCheck:(id)arg1 ;
-(void)setDraftingController:(FBADraftingController *)arg1 ;
-(void)setProjectLabel:(UILabel *)arg1 ;
-(void)setProjectSubtitleLabel:(UILabel *)arg1 ;
-(void)setProjectPickerButton:(UIButton *)arg1 ;
-(unsigned long)whooshSoundID;
-(void)setWhooshSoundID:(unsigned long)arg1 ;
-(void)submit;
-(id)initWithCoder:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)awakeFromNib;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)close;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
-(CGRect)documentInteractionControllerRectForPreview:(id)arg1 ;
-(id)documentInteractionControllerViewForPreview:(id)arg1 ;
-(void)documentInteractionControllerDidEndPreview:(id)arg1 ;
-(void)stopSpinner;
-(void)dismiss:(id)arg1 ;
-(void)showSpinner;
-(void)setLoadingView:(UIView *)arg1 ;
-(UIView *)loadingView;
-(UIBarButtonItem *)submitButton;
-(void)setSubmitButton:(UIBarButtonItem *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICNotesListViewController.h>

@protocol ICLegacyNotesListViewControllerDelegate;
@class NoteCollectionObject;

@interface ICHTMLNotesListViewController : ICNotesListViewController {

	id<ICLegacyNotesListViewControllerDelegate> _htmlDelegate;
	NoteCollectionObject* _collection;

}

@property (assign,nonatomic,__weak) id<ICLegacyNotesListViewControllerDelegate> htmlDelegate;              //@synthesize htmlDelegate=_htmlDelegate - In the implementation block
@property (nonatomic,retain) NoteCollectionObject * collection;                                            //@synthesize collection=_collection - In the implementation block
-(id)noteVisibilityTestingObject;
-(id)currentNoteEditorNote;
-(char)noteEditorIsEditing;
-(void)showNotesListNote:(id)arg1 startEditing:(char)arg2 ;
-(void)clearNoteEditorNote;
-(char)isInTrashFolder;
-(char)containsNote:(id)arg1 ;
-(char)canEditNoteAtIndexPath:(id)arg1 ;
-(char)supportsMovingNotes;
-(void)deleteNotes:(id)arg1 ;
-(char)supportsPasswordProtectedNotes;
-(char)isShowingFolderFromiCloudAccount;
-(void)resetTextViewUndoManager;
-(void)recreateFetchedResultsControllerPerformFetch:(char)arg1 ;
-(char)supportsAttachmentBrowser;
-(void)refreshVisibleNotesAfterContextRefreshNotification;
-(id)previewViewControllerForNote:(id)arg1 ;
-(void)folderList:(id)arg1 didSelectNoteCollection:(id)arg2 cellFrame:(CGRect)arg3 ;
-(void)folderList:(id)arg1 didSelectNoteContainer:(id)arg2 ;
-(void)folderListDidCancel:(id)arg1 ;
-(void)stopObservingForNoteCollection:(id)arg1 ;
-(void)startObservingForNoteCollection:(id)arg1 ;
-(void)batchFaultVisibleNotes;
-(id<ICLegacyNotesListViewControllerDelegate>)htmlDelegate;
-(void)prepareForDeselection;
-(char)hasSearchedString;
-(void)clearDataSource;
-(void)setSelectedNote:(id)arg1 animated:(char)arg2 ;
-(void)scrollToSelectedNoteAnimated:(char)arg1 ;
-(void)setHtmlDelegate:(id<ICLegacyNotesListViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)canBecomeFirstResponder;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)commitPreviewViewController:(id)arg1 committedViewController:(id)arg2 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(char)arg2 ;
-(void)addNote;
-(NoteCollectionObject *)collection;
-(void)setCollection:(NoteCollectionObject *)arg1 ;
-(id)titleForNavigationBar;
-(void)reloadTable;
@end

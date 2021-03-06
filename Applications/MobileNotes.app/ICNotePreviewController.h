/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class ICNote, ICTextView, ICTextController, NotesBackgroundView, NSString;

@interface ICNotePreviewController : UIViewController <UITextViewDelegate> {

	ICNote* _note;
	ICTextView* _textView;
	ICTextController* _textController;

}

@property (nonatomic,retain) ICTextView * textView;                               //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) NotesBackgroundView * backgroundView; 
@property (nonatomic,retain) ICTextController * textController;                   //@synthesize textController=_textController - In the implementation block
@property (nonatomic,retain) ICNote * note;                                       //@synthesize note=_note - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupPreview;
-(void)setTextController:(ICTextController *)arg1 ;
-(ICTextController *)textController;
-(char)isNotePasswordProtectedAndLocked;
-(void)addPasswordEntryViewController;
-(id)createTextViewUsingTextController:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(char)arg2 ;
-(void)shareNote;
-(NotesBackgroundView *)backgroundView;
-(void)setTextView:(ICTextView *)arg1 ;
-(void)viewDidLoad;
-(id)previewActionItems;
-(ICTextView *)textView;
-(ICNote *)note;
-(void)setNote:(ICNote *)arg1 ;
@end


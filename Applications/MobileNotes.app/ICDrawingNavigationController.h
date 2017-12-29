/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICAttachmentNavigationController.h>

@class ICDrawingViewController;

@interface ICDrawingNavigationController : ICAttachmentNavigationController {

	ICDrawingViewController* _drawingViewController;

}

@property (nonatomic,retain) ICDrawingViewController * drawingViewController;              //@synthesize drawingViewController=_drawingViewController - In the implementation block
-(ICDrawingViewController *)drawingViewController;
-(void)setDrawingViewController:(ICDrawingViewController *)arg1 ;
-(id)freeTransformableViewController;
-(id)initWithPresentationDelegate:(id)arg1 editorController:(id)arg2 showInNoteButton:(id)arg3 ;
-(id)imageForTransition;
-(id)scrimColor;
-(void)willTransitionOut;
-(void)didCancelTransitionTo;
-(CGRect)frameForFullscreenAttachmentInView:(id)arg1 ;
-(CGRect)contentsRectForInlineAttachment;
-(char)shouldAutorotate;
@end


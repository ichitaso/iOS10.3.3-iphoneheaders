/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/ABUnknownPersonViewControllerDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>
#import <libobjc.A.dylib/EKICSPreviewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol UIDocumentInteractionControllerDelegate;
@class MFRFC822AttachmentDataProvider, UIViewController, NSString;

@interface MFAttachmentShowcase : NSObject <ABUnknownPersonViewControllerDelegate, UIDocumentInteractionControllerDelegate, EKICSPreviewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	SCD_Union_MF21 _controller;
	MFRFC822AttachmentDataProvider* _rfc822DataProvider;
	id<UIDocumentInteractionControllerDelegate> _documentInteractionControllerDelegate;
	UIViewController* _presentingViewController;

}

@property (assign,nonatomic,__weak) id<UIDocumentInteractionControllerDelegate> documentInteractionControllerDelegate;              //@synthesize documentInteractionControllerDelegate=_documentInteractionControllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                                                    //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)displayTypeForAttachment:(id)arg1 ;
-(void)setDocumentInteractionControllerDelegate:(id<UIDocumentInteractionControllerDelegate>)arg1 ;
-(id)documentInteractionControllerForAttachment:(id)arg1 ;
-(char)presentAttachment:(id)arg1 showcaseInfo:(id)arg2 error:(out id*)arg3 ;
-(void)finishedPresenting;
-(id)_viewControllerForVCardAttachment:(id)arg1 ;
-(id)_eventPreviewControllerForICSAttachment:(id)arg1 managed:(char)arg2 error:(out id*)arg3 ;
-(char)_queueProvisioningProfileAttachmentForAcceptance:(id)arg1 error:(out id*)arg2 ;
-(id)_rfc822AttachmentViewControllerForAttachment:(id)arg1 ;
-(id<UIDocumentInteractionControllerDelegate>)documentInteractionControllerDelegate;
-(void)dealloc;
-(UIViewController *)presentingViewController;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(char)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(void)personViewController:(id)arg1 willSetEditing:(char)arg2 animated:(char)arg3 ;
-(char)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)icsPreviewControllerWantsDismissal:(id)arg1 ;
-(void)_doneButtonTapped:(id)arg1 ;
@end


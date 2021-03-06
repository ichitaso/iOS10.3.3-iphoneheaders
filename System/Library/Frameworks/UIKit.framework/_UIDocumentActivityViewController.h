/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@class UIDocumentInteractionController;

@interface _UIDocumentActivityViewController : UIActivityViewController {

	char _hideSystemActivities;
	UIDocumentInteractionController* _documentInteractionController;
	UIDocumentInteractionController* _documentInteractionControllerRetained;

}

@property (assign,nonatomic,__weak) UIDocumentInteractionController * documentInteractionController;               //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
@property (nonatomic,retain) UIDocumentInteractionController * documentInteractionControllerRetained;              //@synthesize documentInteractionControllerRetained=_documentInteractionControllerRetained - In the implementation block
@property (assign,nonatomic) char hideSystemActivities;                                                            //@synthesize hideSystemActivities=_hideSystemActivities - In the implementation block
-(char)sourceIsManaged;
-(void)_performActivity:(id)arg1 ;
-(void)setDocumentInteractionController:(UIDocumentInteractionController *)arg1 ;
-(UIDocumentInteractionController *)documentInteractionController;
-(void)setDocumentInteractionControllerRetained:(UIDocumentInteractionController *)arg1 ;
-(char)_shouldShowSystemActivity:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
-(UIDocumentInteractionController *)documentInteractionControllerRetained;
-(char)hideSystemActivities;
-(void)setHideSystemActivities:(char)arg1 ;
@end


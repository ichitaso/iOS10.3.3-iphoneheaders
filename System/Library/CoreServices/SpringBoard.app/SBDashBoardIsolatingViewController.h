/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMultiplexingViewController.h>

@class SBDashBoardViewControllerBase;

@interface SBDashBoardIsolatingViewController : SBMultiplexingViewController {

	SBDashBoardViewControllerBase* _isolatedViewController;

}

@property (nonatomic,readonly) SBDashBoardViewControllerBase * isolatedViewController;              //@synthesize isolatedViewController=_isolatedViewController - In the implementation block
-(SBDashBoardViewControllerBase *)isolatedViewController;
-(char)wantsToShareTouches;
-(void)presentationControllerWillBeginPresenting:(id)arg1 ;
-(void)presentationControllerDidEndPresenting:(id)arg1 ;
-(void)presentationControllerWillBeginDismissing:(id)arg1 ;
-(void)presentationControllerDidEndDismissing:(id)arg1 ;
-(id)initWithPresenter:(id)arg1 isolatedViewController:(id)arg2 ;
-(id)createViewControllerForIsolation;
-(void)dealloc;
-(id)description;
-(void)viewDidLoad;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

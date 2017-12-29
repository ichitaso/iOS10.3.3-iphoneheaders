/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBModalAlertPresentationCoordinatorDelegate, BSInvalidatable;
@class NSMutableSet, SBModalAlertPresenter;

@interface SBModalAlertPresentationCoordinator : NSObject {

	id<SBModalAlertPresentationCoordinatorDelegate> _delegate;
	NSMutableSet* _activeModalAlertPresenters;
	SBModalAlertPresenter* _springBoardModalAlertPresenter;
	id<BSInvalidatable> _hideApplicationModalAlertsAssertionWhileSBModalAlertsActive;

}

@property (setter=_setSpringBoardPresenter:,getter=_getSpringBoardPresenter,nonatomic,retain) SBModalAlertPresenter * springBoardPresenter;              //@synthesize springBoardModalAlertPresenter=_springBoardModalAlertPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<SBModalAlertPresentationCoordinatorDelegate> delegate;                                                            //@synthesize delegate=_delegate - In the implementation block
@property (getter=isShowingModalAlert,nonatomic,readonly) char showingModalAlert; 
@property (getter=isShowingSystemModalAlert,nonatomic,readonly) char showingSystemModalAlert; 
@property (getter=canShowApplicationModalAlerts,nonatomic,readonly) char canShowApplicationModalAlerts; 
-(void)_setSpringBoardPresenter:(id)arg1 ;
-(char)isShowingModalAlert;
-(char)isShowingSystemModalAlert;
-(void)_setNotifyStateThatSpringBoardIsShowingAMiniAlert:(char)arg1 ;
-(void)_hideApplicationModalAlertsWithFence:(char)arg1 ;
-(void)_showApplicationModalAlertsWithFence:(char)arg1 ;
-(void)_noteSpringBoardModalAlertStateChanged:(char)arg1 ;
-(id)hideApplicationModalAlertsForReason:(id)arg1 ;
-(id)_fencingTransitionContext:(char)arg1 ;
-(char)canShowApplicationModalAlerts;
-(void)_addModalAlertPresenterIfNecessary:(id)arg1 ;
-(void)_removeModalAlertPresenter:(id)arg1 ;
-(id)_getSpringBoardPresenter;
-(id)init;
-(void)setDelegate:(id<SBModalAlertPresentationCoordinatorDelegate>)arg1 ;
-(id<SBModalAlertPresentationCoordinatorDelegate>)delegate;
@end


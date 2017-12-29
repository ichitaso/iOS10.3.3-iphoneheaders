/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HomeUIService.app/HomeUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <HomeUIService/HFSetupPairingObserver.h>

@protocol HFSetupPairingController;
@class HSSetupStatusView, NSString;

@interface HSPairingStatusViewController : UIViewController <HFSetupPairingObserver> {

	id<HFSetupPairingController> _pairingController;
	HSSetupStatusView* _setupStatusView;
	unsigned _viewMode;

}

@property (nonatomic,retain) HSSetupStatusView * setupStatusView;                         //@synthesize setupStatusView=_setupStatusView - In the implementation block
@property (nonatomic,readonly) unsigned viewMode;                                         //@synthesize viewMode=_viewMode - In the implementation block
@property (nonatomic,retain) id<HFSetupPairingController> pairingController;              //@synthesize pairingController=_pairingController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HFSetupPairingController>)pairingController;
-(void)setPairingController:(id<HFSetupPairingController>)arg1 ;
-(void)setSetupStatusView:(HSSetupStatusView *)arg1 ;
-(HSSetupStatusView *)setupStatusView;
-(id)_discoveredAccessoryToPair;
-(unsigned)_viewStateForCurrentPhase;
-(void)loadView;
-(unsigned)viewMode;
-(id)initWithMode:(unsigned)arg1 ;
-(void)updateUI;
-(void)pairingController:(id)arg1 didTransitionToPhase:(unsigned)arg2 statusText:(id)arg3 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UINavigationController.h>
#import <MobileNotes/ICStartupControllerDelegate.h>

@class ICStartupViewController, ICStartupDeviceListViewController, ICStartupWhatsNewViewController, ICStartupController, ICDeviceListRequest;

@interface ICStartupNavigationController : UINavigationController <ICStartupControllerDelegate> {

	ICStartupViewController* _startupViewController;
	ICStartupDeviceListViewController* _deviceListViewController;
	ICStartupWhatsNewViewController* _startupWhatsNewViewController;
	ICStartupController* _startupController;
	/*^block*/id _dismissBlock;

}

@property (nonatomic,retain) ICStartupViewController * startupViewController;                              //@synthesize startupViewController=_startupViewController - In the implementation block
@property (nonatomic,retain) ICStartupDeviceListViewController * deviceListViewController;                 //@synthesize deviceListViewController=_deviceListViewController - In the implementation block
@property (nonatomic,retain) ICStartupWhatsNewViewController * startupWhatsNewViewController;              //@synthesize startupWhatsNewViewController=_startupWhatsNewViewController - In the implementation block
@property (nonatomic,retain) ICStartupController * startupController;                                      //@synthesize startupController=_startupController - In the implementation block
@property (nonatomic,copy) id dismissBlock;                                                                //@synthesize dismissBlock=_dismissBlock - In the implementation block
@property (nonatomic,readonly) ICDeviceListRequest * deviceListRequest; 
@property (nonatomic,readonly) char shouldSwapChoices; 
+(char)checkIfExtraSmallDeviceFromView:(id)arg1 ;
+(float)introductionControlsButtonWidthForView:(id)arg1 viewSize:(CGSize)arg2 ;
+(char)shouldUseCompactLayoutForTraitCollection:(id)arg1 viewSize:(CGSize)arg2 ;
+(void)setColorAndLetterpressForLabel:(id)arg1 ;
+(float)introductionControlsBottomSpacingForViewSize:(CGSize)arg1 ;
+(id)defaultLabelColor;
+(id)allLabelsUnderView:(id)arg1 ;
+(void)setColorAndLetterpressForAllLabelsInView:(id)arg1 ;
+(id)defaultColorLetterpressedString:(id)arg1 font:(id)arg2 ;
+(id)letterpressedString:(id)arg1 withColor:(id)arg2 font:(id)arg3 ;
-(ICStartupDeviceListViewController *)deviceListViewController;
-(void)setDeviceListViewController:(ICStartupDeviceListViewController *)arg1 ;
-(void)setDismissBlock:(id)arg1 ;
-(id)dismissBlock;
-(void)continueAction;
-(unsigned)getStartupMigrationTypeWithTimeout:(double)arg1 ;
-(void)upgradeAction;
-(void)dismissWithCompletionBlock:(/*^block*/id)arg1 ;
-(ICDeviceListRequest *)deviceListRequest;
-(char)shouldSwapChoices;
-(id)initWithForceWelcomeScreen:(char)arg1 dismissBlock:(/*^block*/id)arg2 ;
-(void)startupControllerShouldCloseDeviceListView;
-(void)startupMigrationTypeMightHaveChanged;
-(void)setStartupWhatsNewViewController:(ICStartupWhatsNewViewController *)arg1 ;
-(ICStartupWhatsNewViewController *)startupWhatsNewViewController;
-(void)setStartupController:(ICStartupController *)arg1 ;
-(void)setStartupViewController:(ICStartupViewController *)arg1 ;
-(ICStartupViewController *)startupViewController;
-(ICStartupController *)startupController;
-(void)noUpgradeAction;
-(void)noUpgradeActionAndDismiss;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillAppear:(char)arg1 ;
-(void)dismiss;
@end


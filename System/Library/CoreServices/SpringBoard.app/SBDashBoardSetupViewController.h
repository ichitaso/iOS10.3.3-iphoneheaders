/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardViewControllerBase.h>
#import <SpringBoard/SBDashBoardEventHandling.h>

@class SBSetupManager, NSMutableArray, NSDictionary, NSArray, NSTimer, SBActivationInfoViewController, NSString, SBSetupWiFiScanner, SBSetupRegulatoryInfoViewController, SBAppStatusBarSettingsAssertion;

@interface SBDashBoardSetupViewController : SBDashBoardViewControllerBase <SBDashBoardEventHandling> {

	SBSetupManager* _setupManager;
	NSMutableArray* _currentStringsOrdering;
	char _needsTransitionFromFakeLogoToWelcomeStrings;
	char _cyclingLabels;
	char _viewVisible;
	char _canShowActivationInfo;
	char _shouldResetOrderingOnNextCycle;
	NSDictionary* _localizedStrings;
	NSArray* _stringsOrdering;
	NSTimer* _stringCycleTimer;
	SBActivationInfoViewController* _activationInfoViewController;
	NSString* _telephonyPrimaryLanguage;
	SBSetupWiFiScanner* _wifiScanner;
	SBSetupRegulatoryInfoViewController* _regulatoryInfoViewController;
	unsigned _currentStringIndex;
	NSString* _wifiPrimaryLanguage;
	SBAppStatusBarSettingsAssertion* _statusBarAssertion;

}

@property (setter=_setWifiScanner:,getter=_wifiScanner,nonatomic,retain) SBSetupWiFiScanner * wifiScanner;                                                       //@synthesize wifiScanner=_wifiScanner - In the implementation block
@property (nonatomic,retain) SBActivationInfoViewController * activationInfoViewController;                                                                      //@synthesize activationInfoViewController=_activationInfoViewController - In the implementation block
@property (nonatomic,retain) SBSetupRegulatoryInfoViewController * regulatoryInfoViewController;                                                                 //@synthesize regulatoryInfoViewController=_regulatoryInfoViewController - In the implementation block
@property (setter=_setLocalizedStrings:,getter=_localizedStrings,nonatomic,copy) NSDictionary * localizedStrings;                                                //@synthesize localizedStrings=_localizedStrings - In the implementation block
@property (setter=_setStringOrdering:,nonatomic,copy) NSArray * stringsOrdering;                                                                                 //@synthesize stringsOrdering=_stringsOrdering - In the implementation block
@property (assign,setter=_setCurrentStringIndex:,getter=_currentStringIndex,nonatomic) unsigned currentStringIndex;                                              //@synthesize currentStringIndex=_currentStringIndex - In the implementation block
@property (setter=_setWifiPrimaryLanguage:,nonatomic,copy) NSString * wifiPrimaryLanguage;                                                                       //@synthesize wifiPrimaryLanguage=_wifiPrimaryLanguage - In the implementation block
@property (setter=_setTelephonyPrimaryLanguage:,nonatomic,copy) NSString * telephonyPrimaryLanguage;                                                             //@synthesize telephonyPrimaryLanguage=_telephonyPrimaryLanguage - In the implementation block
@property (setter=_setStringCycleTimer:,nonatomic,retain) NSTimer * stringCycleTimer;                                                                            //@synthesize stringCycleTimer=_stringCycleTimer - In the implementation block
@property (nonatomic,retain) SBAppStatusBarSettingsAssertion * statusBarAssertion;                                                                               //@synthesize statusBarAssertion=_statusBarAssertion - In the implementation block
@property (assign,setter=_setShouldResetOrderingOnNextCycle:,getter=_shouldResetOrderingOnNextCycle,nonatomic) char shouldResetOrderingOnNextCycle;              //@synthesize shouldResetOrderingOnNextCycle=_shouldResetOrderingOnNextCycle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(int)presentationPriority;
-(void)_didShowBootSetupLogo:(id)arg1 ;
-(void)_didHideBootSetupLogo:(id)arg1 ;
-(void)_setStringOrdering:(id)arg1 ;
-(void)_setLocalizedStrings:(id)arg1 ;
-(void)_fetchLanguageFromTelephony;
-(void)_resetDisplayedLocalizedStringsImmediately:(char)arg1 ;
-(void)_transitionFromFakeBootLogoToWelcomeStrings;
-(void)_stopCyclingLocalizedStrings;
-(void)_infoButtonTapped:(id)arg1 ;
-(void)_startCyclingLocalizedStrings;
-(void)_cancelWifiScan;
-(void)_setStringCycleTimer:(id)arg1 ;
-(void)_startCyclingLocalizedStringsWithDelay:(double)arg1 ;
-(id)_currentLanguageIdentifier;
-(unsigned)_currentStringIndex;
-(NSString *)telephonyPrimaryLanguage;
-(NSString *)wifiPrimaryLanguage;
-(NSArray *)stringsOrdering;
-(void)_setTelephonyPrimaryLanguage:(id)arg1 ;
-(id)_importantLanguageIdentifiers;
-(void)_setWifiPrimaryLanguage:(id)arg1 ;
-(void)_setShouldResetOrderingOnNextCycle:(char)arg1 ;
-(void)_setCurrentStringIndex:(unsigned)arg1 ;
-(void)_updateDisplayedStrings;
-(id)_currentStringsDictionary;
-(char)_shouldResetOrderingOnNextCycle;
-(SBActivationInfoViewController *)activationInfoViewController;
-(SBSetupRegulatoryInfoViewController *)regulatoryInfoViewController;
-(void)_regulatoryInfoButtonTapped:(id)arg1 ;
-(void)setActivationInfoViewController:(SBActivationInfoViewController *)arg1 ;
-(void)setRegulatoryInfoViewController:(SBSetupRegulatoryInfoViewController *)arg1 ;
-(id)_wifiScanner;
-(void)_setWifiScanner:(id)arg1 ;
-(void)_updateWifiPrimaryLanguageFromGuessedCountries:(id)arg1 ;
-(NSTimer *)stringCycleTimer;
-(SBAppStatusBarSettingsAssertion *)statusBarAssertion;
-(void)setStatusBarAssertion:(SBAppStatusBarSettingsAssertion *)arg1 ;
-(void)_cycleTimerDidFire:(id)arg1 ;
-(id)init;
-(char)handleEvent:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(int)presentationType;
-(id)_localizedStrings;
-(id)setupView;
-(void)_startWifiScan;
@end


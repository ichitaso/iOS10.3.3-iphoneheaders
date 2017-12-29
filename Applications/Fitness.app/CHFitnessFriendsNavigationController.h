/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FUNavigationController.h>
#import <Fitness/CHFriendsSetupViewControllerDelegate.h>

@class CHFriendsSetupViewController, NSArray, HKHealthStore, NSSManager, NSDate, FFFriendListManager, NSString;

@interface CHFitnessFriendsNavigationController : FUNavigationController <CHFriendsSetupViewControllerDelegate> {

	int _fitnessFriendsCloudKitAccountStatusChangedToken;
	int _fitnessFriendsGatewayStatusChangedToken;
	char _currentlyPairedWatchIsMinimumVersion;
	char _phoneCloudKitAccountIsActive;
	char _watchCloudKitAccountExists;
	char _watchCloudKitAccountAssumedToExist;
	char _watchCloudKitAccountFetchInProgress;
	CHFriendsSetupViewController* _friendsSetupViewController;
	NSArray* _navigationStackDisplacedBySetupController;
	HKHealthStore* _healthStore;
	NSSManager* _nanoSystemSettingsManager;
	NSDate* _lastPhoneCloudKitAccountFetchTimestamp;
	NSDate* _lastWatchCloudKitAccountFetchTimestamp;
	FFFriendListManager* _friendListManager;

}

@property (nonatomic,retain) CHFriendsSetupViewController * friendsSetupViewController;              //@synthesize friendsSetupViewController=_friendsSetupViewController - In the implementation block
@property (nonatomic,retain) NSArray * navigationStackDisplacedBySetupController;                    //@synthesize navigationStackDisplacedBySetupController=_navigationStackDisplacedBySetupController - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                            //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) NSSManager * nanoSystemSettingsManager;                                 //@synthesize nanoSystemSettingsManager=_nanoSystemSettingsManager - In the implementation block
@property (assign,nonatomic) char phoneCloudKitAccountIsActive;                                      //@synthesize phoneCloudKitAccountIsActive=_phoneCloudKitAccountIsActive - In the implementation block
@property (assign,nonatomic) char watchCloudKitAccountExists;                                        //@synthesize watchCloudKitAccountExists=_watchCloudKitAccountExists - In the implementation block
@property (assign,nonatomic) char watchCloudKitAccountAssumedToExist;                                //@synthesize watchCloudKitAccountAssumedToExist=_watchCloudKitAccountAssumedToExist - In the implementation block
@property (assign,nonatomic) char watchCloudKitAccountFetchInProgress;                               //@synthesize watchCloudKitAccountFetchInProgress=_watchCloudKitAccountFetchInProgress - In the implementation block
@property (nonatomic,retain) NSDate * lastPhoneCloudKitAccountFetchTimestamp;                        //@synthesize lastPhoneCloudKitAccountFetchTimestamp=_lastPhoneCloudKitAccountFetchTimestamp - In the implementation block
@property (nonatomic,retain) NSDate * lastWatchCloudKitAccountFetchTimestamp;                        //@synthesize lastWatchCloudKitAccountFetchTimestamp=_lastWatchCloudKitAccountFetchTimestamp - In the implementation block
@property (nonatomic,retain) FFFriendListManager * friendListManager;                                //@synthesize friendListManager=_friendListManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFriendListManager:(id)arg1 friendManager:(id)arg2 workoutsDataProvider:(id)arg3 model:(id)arg4 ;
-(void)setNanoSystemSettingsManager:(NSSManager *)arg1 ;
-(char)_cachedPhoneCloudKitAccountStatusIsActive;
-(char)_cachedWatchCloudKitAccountStatusIsActive;
-(char)_cachedWatchCloudKitAccountAssumedToExist;
-(char)phoneCloudKitAccountIsActive;
-(char)watchCloudKitAccountExists;
-(char)watchCloudKitAccountAssumedToExist;
-(char)_checkPairedWatchIsMinimumVersion;
-(void)_showSetupControllerInPhase:(int)arg1 animated:(char)arg2 ;
-(char)_fitnessFriendsIsSetup;
-(void)_handleWatchStatusAndCloudKitAccountStatusChange;
-(void)_getAndHandlePhoneCloudKitAccountStatus;
-(void)_updateFitnessFriendsWatchPairingStatus;
-(void)_getAndHandleWatchCloudKitAccountStatus;
-(CHFriendsSetupViewController *)friendsSetupViewController;
-(char)_isSetupViewControllerVisible;
-(void)setNavigationStackDisplacedBySetupController:(NSArray *)arg1 ;
-(void)setFriendsSetupViewController:(CHFriendsSetupViewController *)arg1 ;
-(NSArray *)navigationStackDisplacedBySetupController;
-(char)_cloudKitAccountsAreActive;
-(void)_setFitnessFriendsIsSetup:(char)arg1 ;
-(void)_hideSetupControllerAnimated:(char)arg1 ;
-(void)setWatchCloudKitAccountAssumedToExist:(char)arg1 ;
-(void)setWatchCloudKitAccountExists:(char)arg1 ;
-(void)setPhoneCloudKitAccountIsActive:(char)arg1 ;
-(void)setLastPhoneCloudKitAccountFetchTimestamp:(NSDate *)arg1 ;
-(char)watchCloudKitAccountFetchInProgress;
-(void)setWatchCloudKitAccountFetchInProgress:(char)arg1 ;
-(NSSManager *)nanoSystemSettingsManager;
-(void)setLastWatchCloudKitAccountFetchTimestamp:(NSDate *)arg1 ;
-(char)friendsSetupViewControllerShouldTransitionToCloudKitSignInPhase:(id)arg1 ;
-(void)friendsSetupViewController:(id)arg1 didCompletePhase:(int)arg2 ;
-(void)friendsSetupViewControllerDidCompleteSetup:(id)arg1 ;
-(NSDate *)lastPhoneCloudKitAccountFetchTimestamp;
-(NSDate *)lastWatchCloudKitAccountFetchTimestamp;
-(void)dealloc;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(FFFriendListManager *)friendListManager;
-(void)setFriendListManager:(FFFriendListManager *)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
@end


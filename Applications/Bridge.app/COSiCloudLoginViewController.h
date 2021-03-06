/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSAppleIDLoginViewController.h>

@class ACAccount, NSString;

@interface COSiCloudLoginViewController : COSAppleIDLoginViewController {

	ACAccount* _account;
	NSString* _detailTextKey;
	char _hasCheckedStockholm;

}
+(char)controllerNeedsToRunForBuddyControllerDelegate:(id)arg1 ;
-(void)stockholmSupportedInGizmoRegion:(char)arg1 ;
-(id)detailTextKeyForActivationLockEnabled:(char)arg1 findMyWatchSupported:(char)arg2 stockholmSupported:(char)arg3 ;
-(void)checkIfCanReleaseHold;
-(void)loggedInSuccessfully;
-(id)holdActivityIdentifier;
-(void)silentSignInStateChanged:(id)arg1 ;
-(void)markEndOfHoldActivity;
-(char)allowSkipping;
-(id)performanceMonitorActivityName;
-(unsigned)performanceMonitorAggTiming;
-(id)activationHoldActivityIdentifier;
-(void)signInFailedWithError:(id)arg1 ;
-(void)didEstablishHold;
-(void)finishedUpdatingAppleAccountProperties;
-(void)finishedActivating;
-(id)init;
-(void)dealloc;
-(id)detailText;
-(id)titleString;
-(id)account;
-(char)controllerAllowsNavigatingBackTo;
-(char)holdBeforeDisplaying;
@end


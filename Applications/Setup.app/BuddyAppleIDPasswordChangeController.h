/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/BuddySpinnerController.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>

@class AKAppleIDAuthenticationPurpleBuddyContext, UINavigationController, NSString;

@interface BuddyAppleIDPasswordChangeController : BuddySpinnerController <AKAppleIDAuthenticationDelegate> {

	AKAppleIDAuthenticationPurpleBuddyContext* _context;
	UINavigationController* _originalNavController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)controllerNeedsToRun;
-(void)_startFlow;
-(void)_stopSpinning;
-(void)createAndRecoverAccountWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_failWithError:(id)arg1 ;
-(void)controllerDone;
-(char)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Accounts/Notification/AKAccountNotificationPlugin.bundle/AKAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AKAccountNotificationPlugin/AKAppleIDAuthenticationDelegate.h>

@protocol AKFollowUpProvider;
@class AKAppleIDAuthenticationController, NSString;

@interface AKFollowUpSynchronizer : NSObject <AKAppleIDAuthenticationDelegate> {

	id<AKFollowUpProvider> _followupProvider;
	AKAppleIDAuthenticationController* _controller;

}

@property (nonatomic,retain) id<AKFollowUpProvider> followupProvider;                     //@synthesize followupProvider=_followupProvider - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)updateSynchronizeTimeNoSaveForAccount:(id)arg1 ;
+(void)updateSynchronizeTimeForAccount:(id)arg1 inStore:(id)arg2 ;
-(id)_authController;
-(void)setFollowupProvider:(id<AKFollowUpProvider>)arg1 ;
-(char)synchronizeFollowUpsForAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(char)shouldSynchronizeForAccount:(id)arg1 ;
-(id<AKFollowUpProvider>)followupProvider;
-(AKAppleIDAuthenticationController *)controller;
-(void)setController:(AKAppleIDAuthenticationController *)arg1 ;
-(char)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
@end


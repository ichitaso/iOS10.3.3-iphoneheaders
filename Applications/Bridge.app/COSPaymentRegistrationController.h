/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentSetupAssistantRegistrationViewController, NSString;

@interface COSPaymentRegistrationController : NSObject <PKPaymentSetupViewControllerDelegate> {

	PKPaymentSetupAssistantRegistrationViewController* _registrationController;
	id<PKPaymentSetupViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) PKPaymentSetupAssistantRegistrationViewController * registrationController;              //@synthesize registrationController=_registrationController - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)startRegistrationTransactionIfNeeded;
-(void)endRegistrationTransaction;
-(void)prewarmPaymentInfrastructure;
-(PKPaymentSetupAssistantRegistrationViewController *)registrationController;
-(void)setRegistrationController:(PKPaymentSetupAssistantRegistrationViewController *)arg1 ;
-(void)setDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)delegate;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
@end


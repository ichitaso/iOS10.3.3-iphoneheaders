/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CRBluetoothSyncContactsPrompt : NSObject {

	/*^block*/id _contactsApprovalCompletion;

}

@property (nonatomic,copy) id contactsApprovalCompletion;              //@synthesize contactsApprovalCompletion=_contactsApprovalCompletion - In the implementation block
-(void)setContactsApprovalCompletion:(id)arg1 ;
-(void)presentSyncContactsAlertFromViewController:(id)arg1 ;
-(void)_handleContactsApprovalCompleted:(char)arg1 ;
-(id)contactsApprovalCompletion;
@end


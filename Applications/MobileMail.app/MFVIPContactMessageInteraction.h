/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactViewController, MFVIPSender;

@interface MFVIPContactMessageInteraction : NSObject {

	CNContactViewController* _contactViewController;
	MFVIPSender* _currentVIP;

}

@property (assign,nonatomic,__weak) CNContactViewController * contactViewController;              //@synthesize contactViewController=_contactViewController - In the implementation block
@property (nonatomic,retain) MFVIPSender * currentVIP;                                            //@synthesize currentVIP=_currentVIP - In the implementation block
+(id)vipContactMessageInteractionWithViewController:(id)arg1 ;
-(void)configureVIPInteractionForMessage:(id)arg1 ;
-(void)setCurrentVIP:(MFVIPSender *)arg1 ;
-(void)_updateVIPContactButtonForViewController:(id)arg1 addVIP:(char)arg2 removePreviousAction:(char)arg3 ;
-(MFVIPSender *)currentVIP;
-(void)_addVIP:(id)arg1 ;
-(void)_removeVIP:(id)arg1 ;
-(void)dealloc;
-(id)initWithViewController:(id)arg1 ;
-(CNContactViewController *)contactViewController;
-(void)setContactViewController:(CNContactViewController *)arg1 ;
-(id)contact;
@end


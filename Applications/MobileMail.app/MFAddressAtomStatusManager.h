/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFAddressBookClient.h>

@protocol MFAddressAtomProvider, MFCancelable;
@class MFMessageLoadingContext, MailAccount, MFMessageLoadingContextSMIMEInfo, NSError, NSString;

@interface MFAddressAtomStatusManager : NSObject <MFAddressBookClient> {

	id<MFAddressAtomProvider> _atomProvider;
	MFMessageLoadingContext* _context;
	MailAccount* _account;
	id<MFCancelable> _smimeCancelable;
	MFMessageLoadingContextSMIMEInfo* _smimeInfo;
	NSError* _smimeError;

}

@property (assign,nonatomic,__weak) MFMessageLoadingContext * context;                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) MailAccount * account;                                                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<MFCancelable> smimeCancelable;                                               //@synthesize smimeCancelable=_smimeCancelable - In the implementation block
@property (setter=setSMIMEInfo:,nonatomic,retain) MFMessageLoadingContextSMIMEInfo * smimeInfo;              //@synthesize smimeInfo=_smimeInfo - In the implementation block
@property (setter=setSMIMEError:,nonatomic,retain) NSError * smimeError;                                     //@synthesize smimeError=_smimeError - In the implementation block
@property (assign,nonatomic,__weak) id<MFAddressAtomProvider> atomProvider;                                  //@synthesize atomProvider=_atomProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_trustDidChange:(id)arg1 ;
-(void)_accountsDidChange:(id)arg1 ;
-(void)_vipSendersDidChange:(id)arg1 ;
-(void)updateSMIMEInfo:(id)arg1 error:(id)arg2 ;
-(void)setSmimeCancelable:(id<MFCancelable>)arg1 ;
-(void)updateTrustForDisplayedAtoms;
-(void)_invalidateAtoms;
-(id<MFAddressAtomProvider>)atomProvider;
-(void)setSMIMEInfo:(id)arg1 ;
-(void)setSMIMEError:(id)arg1 ;
-(void)_updateAtomsInList:(id)arg1 ;
-(MFMessageLoadingContextSMIMEInfo *)smimeInfo;
-(char)_atomContainsVIPSender:(id)arg1 ;
-(void)_updateVIPStatus;
-(id)initWithLoadingContext:(id)arg1 ;
-(void)setAtomProvider:(id<MFAddressAtomProvider>)arg1 ;
-(id<MFCancelable>)smimeCancelable;
-(void)dealloc;
-(MFMessageLoadingContext *)context;
-(void)setContext:(MFMessageLoadingContext *)arg1 ;
-(NSError *)smimeError;
-(void)addressBookManager:(id)arg1 addressBookDidChange:(void*)arg2 ;
-(void)addressBookPreferencesChangedForAddressBookManager:(id)arg1 ;
-(MailAccount *)account;
-(void)setAccount:(MailAccount *)arg1 ;
@end


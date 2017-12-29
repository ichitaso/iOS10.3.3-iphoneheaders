/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreServices/StoreServices-Structs.h>
@interface SSVFairPlaySAPContext : NSObject {

	char _complete;
	FPSAPContextOpaque_Ref _context;
	FairPlayHWInfo_ _hardwareInfo;
	int _version;

}

@property (getter=isComplete,nonatomic,readonly) char complete;              //@synthesize complete=_complete - In the implementation block
-(id)initWithSAPVersion:(int)arg1 ;
-(id)primingSignatureForData:(id)arg1 error:(id*)arg2 ;
-(char)verifySignature:(id)arg1 forData:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(char)verifyPrimeSignature:(id)arg1 error:(id*)arg2 ;
-(void)_teardownSession;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(char)isComplete;
@end


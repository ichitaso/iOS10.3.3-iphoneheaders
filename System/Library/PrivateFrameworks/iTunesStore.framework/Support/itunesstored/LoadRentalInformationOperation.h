/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSDictionary;

@interface LoadRentalInformationOperation : ISOperation {

	NSNumber* _accountIdentifier;
	NSNumber* _rentalKeyIdentifier;
	NSDictionary* _rentalInformation;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;                           //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * rentalKeyIdentifier;                         //@synthesize rentalKeyIdentifier=_rentalKeyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * rentalInformation;              //@synthesize rentalInformation=_rentalInformation - In the implementation block
-(void)setRentalKeyIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
-(void)run;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(NSDictionary *)rentalInformation;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
@end

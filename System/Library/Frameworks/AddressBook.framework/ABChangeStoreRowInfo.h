/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABChangeStoreRowInfo : NSObject {

	NSString* _clientIdentifier;
	int _consumedSequenceNumber;

}

@property (nonatomic,retain) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) int consumedSequenceNumber;               //@synthesize consumedSequenceNumber=_consumedSequenceNumber - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(int)consumedSequenceNumber;
-(void)setConsumedSequenceNumber:(int)arg1 ;
-(NSString *)clientIdentifier;
@end


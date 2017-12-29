/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, CBCentral, CBCharacteristic, NSNumber, NSData;

@interface CBATTRequest : NSObject {

	NSMutableData* _value;
	char _ignoreResponse;
	CBCentral* _central;
	CBCharacteristic* _characteristic;
	unsigned _offset;
	NSNumber* _transactionID;

}

@property (nonatomic,retain) CBCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionID;                     //@synthesize transactionID=_transactionID - In the implementation block
@property (assign,nonatomic) char ignoreResponse;                            //@synthesize ignoreResponse=_ignoreResponse - In the implementation block
@property (nonatomic,readonly) CBCentral * central;                          //@synthesize central=_central - In the implementation block
@property (nonatomic,readonly) unsigned offset;                              //@synthesize offset=_offset - In the implementation block
@property (copy) NSData * value;                                             //@synthesize value=_value - In the implementation block
-(id)description;
-(NSData *)value;
-(void)setValue:(NSData *)arg1 ;
-(unsigned)offset;
-(unsigned)endOffset;
-(char)ignoreResponse;
-(id)initWithCentral:(id)arg1 characteristic:(id)arg2 offset:(unsigned)arg3 transactionID:(id)arg4 ;
-(void)appendValueData:(id)arg1 ;
-(void)setIgnoreResponse:(char)arg1 ;
-(CBCentral *)central;
-(CBCharacteristic *)characteristic;
-(NSNumber *)transactionID;
-(void)setCharacteristic:(CBCharacteristic *)arg1 ;
@end


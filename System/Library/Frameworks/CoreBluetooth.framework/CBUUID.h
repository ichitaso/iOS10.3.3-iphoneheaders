/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CBUUID : NSObject <NSCopying> {

	unsigned char _bytes[16];
	char _type;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * UUIDString; 
+(id)UUIDWithData:(id)arg1 ;
+(id)UUIDWithCFUUID:(CFUUIDRef)arg1 ;
+(id)UUIDWithNSUUID:(id)arg1 ;
+(id)UUIDWithString:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)UUIDString;
-(id)initWithCFUUID:(CFUUIDRef)arg1 ;
-(id)initWithNSUUID:(id)arg1 ;
@end


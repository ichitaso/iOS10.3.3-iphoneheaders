/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface _NSDispatchData : NSData
+(char)supportsSecureCoding;
-(char)_isDispatchData;
-(char)_allowsDirectEncoding;
-(void)getBytes:(void*)arg1 ;
-(id)_createDispatchData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned)arg2 ;
-(Class)classForCoder;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
@end

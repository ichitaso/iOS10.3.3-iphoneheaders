/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStream.h>

@interface NSOutputStream : NSStream

@property (readonly) char hasSpaceAvailable; 
+(id)outputStreamToBuffer:(char*)arg1 capacity:(unsigned)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)outputStreamToMemory;
+(id)outputStreamWithURL:(id)arg1 append:(char)arg2 ;
+(id)outputStreamToFileAtPath:(id)arg1 append:(char)arg2 ;
-(SCD_Struct_NS14)_cfStreamError;
-(unsigned long)_cfTypeID;
-(id)initWithURL:(id)arg1 append:(char)arg2 ;
-(id)initToMemory;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned)arg2 ;
-(char)hasSpaceAvailable;
-(int)write:(const char*)arg1 maxLength:(unsigned)arg2 ;
@end


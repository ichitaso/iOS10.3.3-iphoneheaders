/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <CoreFoundation/NSData.h>

@protocol OS_xpc_object;
@class NSObject;

@interface MFXPCData : NSData {

	NSObject*<OS_xpc_object> _data;

}
+(id)dataWithXPCData:(id)arg1 ;
-(id)initWithXPCData:(id)arg1 ;
-(id)_data;
-(void)dealloc;
-(unsigned)length;
-(const void*)bytes;
-(void)getBytes:(void*)arg1 length:(unsigned)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
@end


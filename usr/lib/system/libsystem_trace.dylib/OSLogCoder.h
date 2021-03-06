/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /usr/lib/system/libsystem_trace.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libsystem_trace.dylib/libsystem_trace.dylib-Structs.h>
#import <libobjc.A.dylib/OSLogCoder.h>

@protocol OSLogCoder
@required
-(void)setTruncated;
-(void)setPublic;
-(void)appendBytes:(const void*)arg1 length:(unsigned)arg2;

@end


@interface OSLogCoder : NSObject <OSLogCoder> {

	SCD_Struct_OS0* _fmt_cmd;
	os_trace_blob_s* _ob;
	os_trace_blob_s* _ob_pub;
	os_trace_blob_s* _ob_priv;
	unsigned long _maxsz;
	unsigned short _written;
	unsigned short _offset;
	BOOL _truncated;

}
-(void)setTruncated;
-(void)setPublic;
-(void)appendBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(void)_setFlags:(unsigned char)arg1 ;
@end


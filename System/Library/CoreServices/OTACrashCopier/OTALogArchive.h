/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OTACrashCopier/OTACrashCopier-Structs.h>
@interface OTALogArchive : NSObject {

	z_stream_s* _strm;
	char* _in;
	char* _out;
	char _capViolation;

}

@property (assign) char capViolation;              //@synthesize capViolation=_capViolation - In the implementation block
-(id)copyDeflatedDataFromStream:(_sFILE*)arg1 withCap:(unsigned)arg2 ;
-(char)capViolation;
-(void)setCapViolation:(char)arg1 ;
-(id)init;
-(void)dealloc;
@end


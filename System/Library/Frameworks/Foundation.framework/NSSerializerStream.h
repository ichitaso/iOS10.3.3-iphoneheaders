/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSSerializerStream
@required
-(void)copySerializationInto:(void*)arg1;
-(unsigned)writeInt:(unsigned)arg1;
-(unsigned)writeAlignedDataSize:(unsigned)arg1;
-(unsigned)writeData:(const void*)arg1 length:(unsigned)arg2;
-(unsigned)writeRoomForInt:(int*)arg1;
-(void)writeDelayedInt:(unsigned)arg1 for:(int)arg2;

@end


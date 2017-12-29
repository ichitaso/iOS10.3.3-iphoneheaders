/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
@class NSData;

@interface PBDataReader : NSObject {

	unsigned _pos;
	char _error;
	const char* _bytes;
	NSData* _data;
	unsigned _length;

}

@property (assign) unsigned length;                //@synthesize length=_length - In the implementation block
@property (assign) unsigned position;              //@synthesize pos=_pos - In the implementation block
-(char)hasMoreData;
-(void)readTag:(unsigned*)arg1 type:(char*)arg2 ;
-(char)skipValueWithTag:(unsigned)arg1 type:(unsigned char)arg2 ;
-(void)readTag:(unsigned short*)arg1 andType:(char*)arg2 ;
-(char)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2 ;
-(unsigned long long)readBigEndianFixed64;
-(char)readInt8;
-(long long)readVarInt;
-(double)readDouble;
-(int)readInt32;
-(long long)readInt64;
-(unsigned)readUint32;
-(unsigned long long)readUint64;
-(int)readSint32;
-(long long)readSint64;
-(unsigned)readFixed32;
-(unsigned long long)readFixed64;
-(int)readSfixed32;
-(long long)readSfixed64;
-(char)readBOOL;
-(char)mark:(SCD_Struct_PB0*)arg1 ;
-(void)recall:(const SCD_Struct_PB0*)arg1 ;
-(id)readBigEndianShortThenString;
-(void)dealloc;
-(unsigned)length;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)position;
-(unsigned)offset;
-(void)setLength:(unsigned)arg1 ;
-(char)isAtEnd;
-(id)readData;
-(char)hasError;
-(id)readString;
-(char)seekToOffset:(unsigned)arg1 ;
-(void)updateData:(id)arg1 ;
-(id)readProtoBuffer;
-(unsigned)readBigEndianFixed32;
-(unsigned short)readBigEndianFixed16;
-(float)readFloat;
-(id)readBytes:(unsigned)arg1 ;
@end


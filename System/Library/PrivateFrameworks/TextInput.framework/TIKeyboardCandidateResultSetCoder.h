/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface TIKeyboardCandidateResultSetCoder : NSObject {

	NSMutableData* _mutableData;
	NSData* _data;
	unsigned _offset;

}

@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSMutableData * mutableData;                //@synthesize mutableData=_mutableData - In the implementation block
@property (assign,nonatomic) unsigned offset;                            //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) const char* bytes; 
@property (nonatomic,readonly) const char* currentPosition; 
+(Class)classFromCandidateType:(int)arg1 ;
+(id)candidateTypeToClassNameMap;
+(id)encodeWithCandidateResultSet:(id)arg1 ;
+(id)decodeWithData:(id)arg1 ;
-(id)initForEncoding;
-(id)initForDecodingWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 mutableData:(id)arg2 ;
-(id)decodeCandidate;
-(void)encodeBool:(char)arg1 ;
-(char)decodeBool;
-(void)encodeByte:(unsigned char)arg1 ;
-(unsigned char)decodeByte;
-(void)encodeShort:(unsigned short)arg1 ;
-(unsigned short)decodeShort;
-(void)encodeUInt32:(unsigned)arg1 ;
-(unsigned)decodeUInt32;
-(void)encodeUInt64:(unsigned long long)arg1 ;
-(unsigned long long)decodeUInt64;
-(void)encodeString:(id)arg1 ;
-(id)decodeString;
-(void)encodeStringArray:(id)arg1 ;
-(id)decodeStringArray;
-(void)encodePointerValueArray:(id)arg1 ;
-(id)decodePointerValueArray;
-(id)dataFromCandidateResultSet:(id)arg1 ;
-(void)setMutableData:(NSMutableData *)arg1 ;
-(void)dealloc;
-(const char*)bytes;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(id)candidateResultSet;
-(NSMutableData *)mutableData;
-(const char*)currentPosition;
@end


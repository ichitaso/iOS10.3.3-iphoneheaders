/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTLIndexedConstantValue : NSObject {

	unsigned _index;
	unsigned _dataType;
	char* _data;

}

@property (readonly) unsigned index;                 //@synthesize index=_index - In the implementation block
@property (readonly) unsigned dataType;              //@synthesize dataType=_dataType - In the implementation block
@property (readonly) void* data;                     //@synthesize data=_data - In the implementation block
-(id)formattedDescription:(unsigned)arg1 ;
-(id)describe;
-(id)initWithValue:(const void*)arg1 type:(unsigned)arg2 index:(unsigned)arg3 ;
-(void)dealloc;
-(id)description;
-(void*)data;
-(unsigned)index;
-(unsigned)dataType;
@end


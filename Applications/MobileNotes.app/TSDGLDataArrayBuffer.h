/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/TSDGLDataBufferAccessor.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TSDGLDataArrayBuffer : NSObject <TSDGLDataBufferAccessor> {

	NSMutableArray* _vertexAttributes;
	unsigned mVertexCount;
	unsigned long _dataTypeSizeInBytes;
	unsigned _bufferUsage;
	int* mNeedsUpdateFirstIndex;
	int* mNeedsUpdateLastIndex;
	char* mGLData;
	char mGLDataBufferHasBeenSetup;
	unsigned* mGLDataBuffers;
	NSMutableDictionary* mAttributeOffsetsDictionary;
	unsigned _GLDataBufferEntrySize;
	unsigned _bufferCount;
	unsigned _currentBufferIndex;

}

@property (nonatomic,readonly) char hasUpdatedData; 
@property (getter=LDataBufferEntrySize,nonatomic,readonly) unsigned GLDataBufferEntrySize;              //@synthesize GLDataBufferEntrySize=_GLDataBufferEntrySize - In the implementation block
@property (nonatomic,readonly) unsigned bufferCount;                                                    //@synthesize bufferCount=_bufferCount - In the implementation block
@property (assign,nonatomic) unsigned currentBufferIndex;                                               //@synthesize currentBufferIndex=_currentBufferIndex - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)bufferCount;
-(unsigned)GLDataBufferEntrySize;
-(void)p_setupGLDataBufferIfNecessary;
-(char)hasUpdatedData;
-(unsigned)currentBufferIndex;
-(void)addIndexRangeNeedsUpdate:(NSRange)arg1 ;
-(void)addIndexNeedsUpdate:(int)arg1 ;
-(void)updateDataBufferIfNecessary;
-(void)setCurrentBufferIndex:(unsigned)arg1 ;
-(unsigned)p_bufferOffsetOfAttribute:(id)arg1 atIndex:(unsigned)arg2 component:(unsigned)arg3 ;
-(void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3 ;
-(float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setCGFloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3 ;
-(CGSize)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setGLPoint2D:(CGSize)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3 ;
-(SCD_Struct_TS19)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setGLPoint3D:(SCD_Struct_TS19)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3 ;
-(SCD_Struct_IC8)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setGLPoint4D:(SCD_Struct_IC8)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3 ;
-(id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned)arg2 bufferCount:(unsigned)arg3 ;
-(void)addAllIndexesNeedUpdate;
-(void)enableVertexAttributeArrayBuffersWithShader:(id)arg1 ;
-(void)disableVertexAttributeArrayBuffersWithShader:(id)arg1 ;
-(void)swapGLDataBuffers;
-(char*)GLDataPointer;
-(void)dealloc;
-(NSString *)description;
-(unsigned)vertexCount;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCoder.h>

@interface NSKeyedUnarchiver : NSCoder {

	id _delegate;
	unsigned _flags;
	id _objRefMap;
	id _replacementMap;
	id _nameClassMap;
	id _tmpRefObjMap;
	id _refObjMap;
	int _genericKey;
	id _data;
	void* _offsetData;
	id _containers;
	id _objects;
	const char* _bytes;
	unsigned long long _len;
	id _helper;
	void* _reserved0;

}

@property (assign) id<NSKeyedUnarchiverDelegate> delegate; 
@property (assign) char requiresSecureCoding; 
@property (assign) int decodingFailurePolicy; 
+(id)unarchiveTopLevelObjectWithData:(id)arg1 error:(id*)arg2 ;
+(id)unarchiveObjectWithData:(id)arg1 error:(id*)arg2 ;
+(void)initialize;
+(id)unarchiveObjectWithData:(id)arg1 ;
+(Class)classForClassName:(id)arg1 ;
+(id)unarchiveObjectWithFile:(id)arg1 ;
+(void)setClass:(Class)arg1 forClassName:(id)arg2 ;
-(id)_decodeArrayOfObjectsForKey:(id)arg1 ;
-(id)_decodePropertyListForKey:(id)arg1 ;
-(char)requiresSecureCoding;
-(id)allowedClasses;
-(char)_allowsValueCoding;
-(void)setAllowedClasses:(id)arg1 ;
-(int)decodingFailurePolicy;
-(void)__setError:(id)arg1 ;
-(id)_blobForCurrentObject;
-(id)_initWithStream:(CFReadStreamRef)arg1 data:(id)arg2 topDict:(CFDictionaryRef)arg3 ;
-(void)_setAllowedClassNames:(id)arg1 ;
-(void)_temporaryMapReplaceObject:(id)arg1 withObject:(id)arg2 ;
-(id)_allowedClassNames;
-(void)_replaceObject:(id)arg1 withObject:(id)arg2 ;
-(char)_validatePropertyListClass:(Class)arg1 forKey:(id)arg2 ;
-(void)setDecodingFailurePolicy:(int)arg1 ;
-(unsigned)_currentUniqueIdentifier;
-(id)init;
-(id)decodeObjectForKey:(id)arg1 ;
-(char)decodeBoolForKey:(id)arg1 ;
-(char)containsValueForKey:(id)arg1 ;
-(void)setDelegate:(id<NSKeyedUnarchiverDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<NSKeyedUnarchiverDelegate>)delegate;
-(unsigned)systemVersion;
-(int)decodeIntForKey:(id)arg1 ;
-(void)finishDecoding;
-(char)allowsKeyedCoding;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned*)arg2 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(void)setRequiresSecureCoding:(char)arg1 ;
-(id)initForReadingWithData:(id)arg1 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(id)decodeDataObject;
-(int)versionForClassName:(id)arg1 ;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(Class)classForClassName:(id)arg1 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(id)decodeObject;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned)arg2 at:(void*)arg3 ;
-(void*)decodeBytesWithReturnedLength:(unsigned*)arg1 ;
-(id)error;
-(void)setClass:(Class)arg1 forClassName:(id)arg2 ;
-(id)initWithStream:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSMethodSignature : NSObject {

	void* _private;
	void** _reserved[6];

}

@property (readonly) unsigned numberOfArguments; 
@property (readonly) unsigned frameLength; 
@property (readonly) const char* methodReturnType; 
@property (readonly) unsigned methodReturnLength; 
+(id)cd_signatureWithObjCTypes:(const char*)arg1 ;
+(id)signatureWithObjCTypes:(const char*)arg1 ;
-(const char*)cd_getArgumentTypeAtIndex:(int)arg1 ;
-(char)_cheapTypeString:(char*)arg1 maxLength:(long)arg2 ;
-(char)isOneway;
-(char)_isHiddenStructRet;
-(NSMethodFrameArgInfo*)_argInfo:(int)arg1 ;
-(SCD_Struct_NS22*)_frameDescriptor;
-(id)_typeString;
-(id)_signatureForBlockAtArgumentIndex:(int)arg1 ;
-(Class)_classForObjectAtArgumentIndex:(int)arg1 ;
-(id)_protocolsForObjectAtArgumentIndex:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)debugDescription;
-(unsigned)numberOfArguments;
-(const char*)getArgumentTypeAtIndex:(unsigned)arg1 ;
-(unsigned)methodReturnLength;
-(const char*)methodReturnType;
-(unsigned)frameLength;
@end


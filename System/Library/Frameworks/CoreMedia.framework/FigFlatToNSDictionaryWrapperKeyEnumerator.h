/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMedia/CoreMedia-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface FigFlatToNSDictionaryWrapperKeyEnumerator : NSEnumerator {

	/*function pointer*/void** _keys;
	int _keysCount;
	int _counter;

}
-(id)initWithFlatDictionary:(OpaqueFigFlatDictionaryRef)arg1 ;
-(void)dealloc;
-(id)allObjects;
-(id)nextObject;
@end


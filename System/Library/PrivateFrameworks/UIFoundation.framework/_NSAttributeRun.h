/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSTextStorage, NSMutableArray;

@interface _NSAttributeRun : NSObject <NSCopying> {

	NSRange _range;
	NSTextStorage* _textStorage;
	NSMutableArray* _attributesArray;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)range;
-(id)initWithTextStorage:(id)arg1 range:(NSRange)arg2 ;
-(void)restoreAttributesOfTextStorage:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSLayoutDimension.h>
#import <libobjc.A.dylib/NSCompositeLayoutAnchor.h>

@class NSLayoutAnchor, NSArray;

@interface _NSDistanceLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor> {

	NSLayoutAnchor* _minuend;
	NSLayoutAnchor* _subtrahend;

}

@property (readonly) NSArray * _childAnchors; 
+(id)distanceFromAnchor:(id)arg1 toAnchor:(id)arg2 ;
-(id)_expressionInContext:(SCD_Struct_NS49)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(NSArray *)_childAnchors;
-(id)equationDescription;
-(float)_valueInEngine:(id)arg1 ;
-(id)initWithMinuend:(id)arg1 subtrahend:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end


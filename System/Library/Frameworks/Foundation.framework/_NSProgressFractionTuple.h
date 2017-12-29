/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _NSProgressFraction;

@interface _NSProgressFractionTuple : NSObject {

	_NSProgressFraction* _previous;
	_NSProgressFraction* _next;

}

@property (copy) _NSProgressFraction * previous;              //@synthesize previous=_previous - In the implementation block
@property (copy) _NSProgressFraction * next;                  //@synthesize next=_next - In the implementation block
-(char)previousIsEqualToNext;
-(void)setNext:(_NSProgressFraction *)arg1 ;
-(_NSProgressFraction *)next;
-(_NSProgressFraction *)previous;
-(void)dealloc;
-(id)description;
-(void)setPrevious:(_NSProgressFraction *)arg1 ;
@end

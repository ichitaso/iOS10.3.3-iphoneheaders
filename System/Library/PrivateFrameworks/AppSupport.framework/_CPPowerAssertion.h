/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _CPPowerAssertion : NSObject {

	unsigned _assertion;
	double _timeout;
	NSString* _identifier;
	NSArray* _stack;

}

@property (assign,nonatomic) double timeout;              //@synthesize timeout=_timeout - In the implementation block
-(void)dealloc;
-(void)setTimeout:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 timeout:(double)arg2 ;
-(void)timedout;
-(double)timeout;
@end


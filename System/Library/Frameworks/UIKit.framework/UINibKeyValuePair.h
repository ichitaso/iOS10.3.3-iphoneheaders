/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UINibKeyValuePair : NSObject {

	id object;
	NSString* keyPath;
	id value;

}

@property (nonatomic,readonly) id object; 
@property (nonatomic,copy,readonly) NSString * keyPath; 
@property (nonatomic,readonly) id value; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)object;
-(id)value;
-(NSString *)keyPath;
-(void)applyForSimulator;
-(void)apply;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 value:(id)arg3 ;
@end


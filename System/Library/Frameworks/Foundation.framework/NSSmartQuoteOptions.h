/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSSmartQuoteOptions : NSObject <NSCopying, NSSecureCoding> {

	NSString* _leftSingleQuote;
	NSString* _rightSingleQuote;
	NSString* _apostrophe;
	NSString* _leftDoubleQuote;
	NSString* _rightDoubleQuote;

}

@property (copy,readonly) NSString * leftSingleQuote; 
@property (copy,readonly) NSString * rightSingleQuote; 
@property (copy,readonly) NSString * apostrophe; 
@property (copy,readonly) NSString * leftDoubleQuote; 
@property (copy,readonly) NSString * rightDoubleQuote; 
+(id)smartQuoteOptionsForLocale:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)initWithLeftSingleQuote:(id)arg1 rightSingleQuote:(id)arg2 apostrophe:(id)arg3 leftDoubleQuote:(id)arg4 rightDoubleQuote:(id)arg5 ;
-(NSString *)leftSingleQuote;
-(NSString *)rightSingleQuote;
-(NSString *)apostrophe;
-(NSString *)leftDoubleQuote;
-(NSString *)rightDoubleQuote;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


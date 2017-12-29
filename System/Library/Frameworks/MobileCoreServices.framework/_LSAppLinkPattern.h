/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _LSAppLinkPattern : NSObject {

	char _blocking;
	NSString* _pattern;

}

@property (copy) NSString * pattern;                      //@synthesize pattern=_pattern - In the implementation block
@property (getter=isBlocking) char blocking;              //@synthesize blocking=_blocking - In the implementation block
+(id)_normalizedURLPath:(id)arg1 escapeCharacters:(char)arg2 ;
-(id)initWithURLPathPattern:(id)arg1 ;
-(unsigned)evaluateWithURLComponents:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(NSString *)pattern;
-(void)setBlocking:(char)arg1 ;
-(char)isBlocking;
-(void)setPattern:(NSString *)arg1 ;
@end


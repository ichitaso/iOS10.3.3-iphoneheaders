/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDictionary, NSData;

@interface _LSAppLinkOpenState : NSObject <NSSecureCoding> {

	char _openStrategyChanged;
	NSURL* _URL;
	NSString* _bundleIdentifier;
	NSDictionary* _browserState;

}

@property (copy) NSURL * URL;                                  //@synthesize URL=_URL - In the implementation block
@property (copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign) char openStrategyChanged;                   //@synthesize openStrategyChanged=_openStrategyChanged - In the implementation block
@property (copy) NSDictionary * browserState;                  //@synthesize browserState=_browserState - In the implementation block
@property (readonly) NSData * dataRepresentation; 
+(char)supportsSecureCoding;
-(NSData *)dataRepresentation;
-(void)setOpenStrategyChanged:(char)arg1 ;
-(void)setBrowserState:(NSDictionary *)arg1 ;
-(NSDictionary *)browserState;
-(char)openStrategyChanged;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(NSString *)bundleIdentifier;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(char)validate;
-(id)initWithDataRepresentation:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_LSQuery.h>

@class NSURL;

@interface _LSAvailableApplicationsForURLQuery : _LSQuery {

	char _legacySPI;
	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) char legacySPI;                //@synthesize legacySPI=_legacySPI - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithURL:(id)arg1 legacySPI:(char)arg2 ;
-(char)legacySPI;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(char)_shouldCacheResolvedResults;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSURL *)URL;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSMutableDictionary, NSString;

@interface SSSoftwareLibraryItem : NSObject <SSXPCCoding> {

	char _beta;
	NSMutableDictionary* _etags;
	char _placeholder;
	char _profileValidated;
	NSMutableDictionary* _propertyValues;
	char _launchProhibited;

}

@property (assign,getter=isBeta,nonatomic) char beta;                                      //@synthesize beta=_beta - In the implementation block
@property (assign,getter=isLaunchProhibited,nonatomic) char launchProhibited;              //@synthesize launchProhibited=_launchProhibited - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) char placeholder;                        //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isProfileValidated,nonatomic) char profileValidated;              //@synthesize profileValidated=_profileValidated - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLaunchProhibited:(char)arg1 ;
-(id)ETagForAssetType:(id)arg1 ;
-(char)setETag:(id)arg1 forAssetType:(id)arg2 error:(id*)arg3 ;
-(id)_initWithITunesMetadata:(id)arg1 ;
-(void)setBeta:(char)arg1 ;
-(char)isProfileValidated;
-(void)setProfileValidated:(char)arg1 ;
-(void)dealloc;
-(char)isPlaceholder;
-(void)setPlaceholder:(char)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)valueForProperty:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(char)isBeta;
-(char)isLaunchProhibited;
@end


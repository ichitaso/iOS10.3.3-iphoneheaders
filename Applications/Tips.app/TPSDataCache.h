/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/Tips-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate;

@interface TPSDataCache : NSObject <NSCopying, NSCoding> {

	unsigned _cacheType;
	int _maxAge;
	unsigned _fileSize;
	NSString* _identifier;
	NSString* _lastModified;
	NSString* _languageCode;
	NSDate* _updatedDate;

}

@property (nonatomic,readonly) char expired; 
@property (assign,nonatomic) unsigned cacheType;                   //@synthesize cacheType=_cacheType - In the implementation block
@property (assign,nonatomic) int maxAge;                           //@synthesize maxAge=_maxAge - In the implementation block
@property (assign,nonatomic) unsigned fileSize;                    //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * lastModified;              //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,retain) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSDate * updatedDate;                 //@synthesize updatedDate=_updatedDate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(unsigned)fileSize;
-(unsigned)cacheType;
-(void)setCacheType:(unsigned)arg1 ;
-(void)setLastModified:(NSString *)arg1 ;
-(void)setFileSize:(unsigned)arg1 ;
-(char)expired;
-(void)setUpdatedDate:(NSDate *)arg1 ;
-(NSDate *)updatedDate;
-(void)setMaxAge:(int)arg1 ;
-(int)maxAge;
-(NSString *)lastModified;
@end


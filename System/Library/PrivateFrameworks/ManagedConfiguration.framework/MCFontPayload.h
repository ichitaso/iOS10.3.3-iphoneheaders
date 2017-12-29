/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSString, NSURL;

@interface MCFontPayload : MCPayload {

	NSData* _fontData;
	NSString* _name;
	NSURL* _persistentURL;

}

@property (nonatomic,retain) NSData * fontData;                  //@synthesize fontData=_fontData - In the implementation block
@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSURL * persistentURL;              //@synthesize persistentURL=_persistentURL - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(NSURL *)persistentURL;
-(NSData *)fontData;
-(void)setFontData:(NSData *)arg1 ;
-(void)setPersistentURL:(NSURL *)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)title;
@end


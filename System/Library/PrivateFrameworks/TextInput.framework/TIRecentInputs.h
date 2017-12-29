/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TILexicon.h>

@class NSString;

@interface TIRecentInputs : TILexicon {

	char _needsSync;
	NSString* _filePath;

}

@property (assign,nonatomic) char needsSync;                   //@synthesize needsSync=_needsSync - In the implementation block
@property (nonatomic,retain) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
+(void)requestLexiconForRecentInputIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)requestRemovalOfLexiconForRecentInputIdentifier:(id)arg1 ;
+(id)recentInputAtPath:(id)arg1 ;
+(id)_lexiconPathForLocalIdentifier:(id)arg1 ;
+(void)recentInputForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_sanitizeRecentInputString:(id)arg1 ;
+(void)storeInput:(id)arg1 forLocalIdentifier:(id)arg2 ;
+(void)storeInput:(id)arg1 forSystemIdentifier:(id)arg2 ;
+(char)identifierIsSystemIdentifier:(id)arg1 ;
+(void)clearRecentInputForIdentifier:(id)arg1 ;
+(void)removeInput:(id)arg1 forSystemIdentifier:(id)arg2 ;
+(id)recentInputForIdentifier:(id)arg1 ;
+(void)storeInput:(id)arg1 forSystemIdentifier:(id)arg2 atPath:(id)arg3 ;
-(id)lexiconWithAdditionalEntry:(id)arg1 maximumSize:(int)arg2 ;
-(id)lexiconByRemovingEntry:(id)arg1 ;
-(void)storeIfNecessary;
-(char)needsSync;
-(void)setNeedsSync:(char)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
@end


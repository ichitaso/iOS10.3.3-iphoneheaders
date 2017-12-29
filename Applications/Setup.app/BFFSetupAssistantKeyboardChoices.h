/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BFFSetupAssistantKeyboardChoices : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _chosenKeyboards;
	NSString* _guessedKeyboards;
	NSString* _localeIdentifier;
	char _usedDefault;
	SCD_Struct_BF14 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * localeIdentifier;               //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (assign,nonatomic) char usedDefault;                          //@synthesize usedDefault=_usedDefault - In the implementation block
@property (nonatomic,readonly) char hasChosenKeyboards; 
@property (nonatomic,retain) NSString * chosenKeyboards;                //@synthesize chosenKeyboards=_chosenKeyboards - In the implementation block
@property (nonatomic,readonly) char hasGuessedKeyboards; 
@property (nonatomic,retain) NSString * guessedKeyboards;               //@synthesize guessedKeyboards=_guessedKeyboards - In the implementation block
-(void)setChosenKeyboards:(NSString *)arg1 ;
-(void)setGuessedKeyboards:(NSString *)arg1 ;
-(char)hasChosenKeyboards;
-(char)hasGuessedKeyboards;
-(char)usedDefault;
-(void)setUsedDefault:(char)arg1 ;
-(NSString *)chosenKeyboards;
-(NSString *)guessedKeyboards;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localeIdentifier;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasTimestamp;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
@end

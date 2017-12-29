/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/CloudRecentsMigrator.migrator/CloudRecentsMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSInputStream, NSData, NSMutableData, NSError, NSString;

@interface CRCSVParser : NSObject {

	char _shouldAbort;
	NSInputStream* _stream;
	NSData* _separatorData;
	NSMutableData* _data;
	unsigned _head;
	char _consumedNullText;
	/*^block*/id _parsedLineBlock;
	NSError* _parserError;
	NSString* _separator;

}

@property (nonatomic,copy) NSString * separator;              //@synthesize separator=_separator - In the implementation block
-(char)_ensureBufferSize:(unsigned)arg1 ;
-(id)_parseDoubleQuote;
-(id)_parseText;
-(id)_parseLineSeparator;
-(void)_fillBuffer:(unsigned)arg1 ;
-(void)setParsedLineBlock:(/*^block*/id)arg1 ;
-(unsigned)_availableBytes;
-(char)parseableDataAvailable;
-(id)_parseField;
-(id)_parseEscapedText;
-(id)_parseRecord;
-(id)_consumeSingleCharacter:(char)arg1 ;
-(id)_parseSeparator;
-(id)_parseTwoDoubleQuotes;
-(void)abortParsing;
-(id)parserError;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)setSeparator:(NSString *)arg1 ;
-(NSString *)separator;
-(char)shouldProceedParsing;
-(void)didFinishParsing;
-(void)didFindError:(id)arg1 ;
-(char)parse;
@end

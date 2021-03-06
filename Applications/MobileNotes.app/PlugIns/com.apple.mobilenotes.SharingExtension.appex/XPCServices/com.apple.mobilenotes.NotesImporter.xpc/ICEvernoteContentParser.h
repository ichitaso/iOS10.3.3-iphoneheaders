/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/XPCServices/com.apple.mobilenotes.NotesImporter.xpc/com.apple.mobilenotes.NotesImporter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableString, NSXMLParser, NSString;

@interface ICEvernoteContentParser : NSObject <NSXMLParserDelegate> {

	char _shouldAppendCharactersToBuffer;
	NSMutableString* _bufferString;
	NSMutableString* _htmlString;
	NSXMLParser* _parser;
	unsigned _parserType;

}

@property (assign,nonatomic) char shouldAppendCharactersToBuffer;              //@synthesize shouldAppendCharactersToBuffer=_shouldAppendCharactersToBuffer - In the implementation block
@property (nonatomic,retain) NSMutableString * bufferString;                   //@synthesize bufferString=_bufferString - In the implementation block
@property (nonatomic,retain) NSMutableString * htmlString;                     //@synthesize htmlString=_htmlString - In the implementation block
@property (nonatomic,retain) NSXMLParser * parser;                             //@synthesize parser=_parser - In the implementation block
@property (assign,nonatomic) unsigned parserType;                              //@synthesize parserType=_parserType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setParserType:(unsigned)arg1 ;
-(void)parseContentString:(id)arg1 ;
-(void)teardownParser;
-(unsigned)parserType;
-(NSMutableString *)bufferString;
-(void)setBufferString:(NSMutableString *)arg1 ;
-(char)shouldSelfCloseTagForStartElementName:(id)arg1 ;
-(id)stringFromAttributes:(id)arg1 ;
-(void)setShouldAppendCharactersToBuffer:(char)arg1 ;
-(id)htmlStringFromEvernoteContentString:(id)arg1 ;
-(id)titleFromHTMLString:(id)arg1 ;
-(char)shouldAppendCharactersToBuffer;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)setHtmlString:(NSMutableString *)arg1 ;
-(NSXMLParser *)parser;
-(void)setParser:(NSXMLParser *)arg1 ;
-(NSMutableString *)htmlString;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABVCardDateScanner : NSObject {

	NSString* _string;
	unsigned _position;

}

@property (readonly) unsigned position;              //@synthesize position=_position - In the implementation block
+(id)scannerWithString:(id)arg1 ;
-(unsigned)position;
-(id)initWithString:(id)arg1 ;
-(char)isAtEnd;
-(unsigned)lengthOfCalendarUnit:(unsigned)arg1 ;
-(int)scanComponentValueOfLength:(unsigned)arg1 ;
-(int)scanCalendarUnit:(unsigned)arg1 ;
-(char)scanLeapMarker;
-(unsigned short)nextCharacter;
@end


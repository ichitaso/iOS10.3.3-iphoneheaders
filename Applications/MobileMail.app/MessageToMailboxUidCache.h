/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileMail/MobileMail-Structs.h>
@class MFMailMessageLibrary;

@interface MessageToMailboxUidCache : NSObject {

	CFDictionaryRef _mailboxCache;
	MFMailMessageLibrary* _library;

}
-(id)mailboxForMessageInfo:(id)arg1 ;
-(id)mailboxForMessage:(id)arg1 ;
-(id)_mailboxWithMailboxLibraryID:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned)count;
-(void)removeAllObjects;
-(id)debugDescription;
-(id)initWithLibrary:(id)arg1 ;
@end


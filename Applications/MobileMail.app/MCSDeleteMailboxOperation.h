/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MCSMailboxOperation.h>

@class MFMailboxUid;

@interface MCSDeleteMailboxOperation : MCSMailboxOperation {

	MFMailboxUid* _mailboxToDelete;

}
-(id)localizedErrorDescription;
-(id)localizedErrorTitle;
-(id)mailboxToRemove;
-(id)accountForErrorHandling;
-(void)dealloc;
-(char)commit;
-(char)revert;
-(id)initWithMailboxToDelete:(id)arg1 ;
@end

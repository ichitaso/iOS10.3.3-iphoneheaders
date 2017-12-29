/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MCSMailboxOperation.h>

@class MFMailboxUid, NSString;

@interface MCSRenameMailboxOperation : MCSMailboxOperation {

	MFMailboxUid* _mailboxToRename;
	NSString* _pendingName;
	NSString* _reasonForFailure;

}

@property (nonatomic,copy) NSString * reasonForFailure;              //@synthesize reasonForFailure=_reasonForFailure - In the implementation block
-(id)localizedErrorDescription;
-(id)localizedErrorTitle;
-(id)modifiedMailboxName;
-(id)mailboxToMoveOrRename;
-(id)mailboxParentForMove;
-(id)accountForErrorHandling;
-(void)setReasonForFailure:(NSString *)arg1 ;
-(NSString *)reasonForFailure;
-(id)initWithMailboxToRename:(id)arg1 toName:(id)arg2 ;
-(void)dealloc;
-(char)commit;
-(char)revert;
@end

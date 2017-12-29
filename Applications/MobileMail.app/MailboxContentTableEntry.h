/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MailboxContentTableEntry <NSObject>
@required
-(unsigned)entryStyle;
-(void)setHighlightedTerms:(id)arg1;
-(void)setShowsBestMatchedAddress:(char)arg1;
-(void)setMessage:(id)arg1 entryStyle:(unsigned)arg2;
-(void)setHasUnreadMessages:(char)arg1 hasAttachments:(char)arg2 hasFlagged:(char)arg3 hasVIP:(char)arg4 hasNotify:(char)arg5 hasMute:(char)arg6 receivedInterval:(double)arg7;
-(void)updateFlagsFromMessage:(id)arg1;
-(id)message;
-(void)setMailboxName:(id)arg1;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NNMKHTMLParser;

@interface MFNanoServerMessageContentParser : NSObject {

	NNMKHTMLParser* _htmlParser;

}
-(id)parseMessage:(id)arg1 maxImageWidth:(float)arg2 messageBody:(id*)arg3 imageAttachmentsURLsToLoad:(id*)arg4 imageAttachmentsLoaded:(id*)arg5 ;
-(id)_attachmentForURL:(id)arg1 mimePart:(id)arg2 ;
-(id)_nanoAttachmentForURL:(id)arg1 mimePart:(id)arg2 ;
-(char)_parseMimeParts:(id)arg1 messageBody:(id)arg2 attributedString:(id)arg3 maxLength:(unsigned)arg4 maxImageWidth:(float)arg5 maxImageAttachments:(unsigned)arg6 shouldTryAlternatives:(char)arg7 urlsForValidation:(id)arg8 nanoAttachmentsList:(id)arg9 imageAttachmentsURLsToLoad:(id)arg10 imageAttachmentsLoaded:(id)arg11 usingAlternativePart:(char*)arg12 partiallyLoaded:(char*)arg13 ;
-(id)_parseTextAttachmentMimePart:(id)arg1 messageBody:(id)arg2 maxImageAttachments:(unsigned)arg3 nanoAttachmentsList:(id)arg4 imageAttachmentsURLsToLoad:(id)arg5 ;
-(id)_parseStringMimePart:(id)arg1 maxLength:(unsigned)arg2 ;
-(id)_parseWebMessageDocumentMimePart:(id)arg1 messageBody:(id)arg2 maxLength:(unsigned)arg3 maxImageWidth:(float)arg4 maxImageAttachments:(unsigned)arg5 shouldTryAlternatives:(char)arg6 urlsForValidation:(id)arg7 finalNanoAttachmentsList:(id)arg8 finalImageAttachmentsURLsToLoad:(id)arg9 finalImageAttachmentsLoaded:(id)arg10 usingAlternativePart:(char*)arg11 partiallyLoaded:(char*)arg12 ;
-(void)_parseAttachmentsFromMimePart:(id)arg1 messageBody:(id)arg2 maxImageAttachments:(unsigned)arg3 nanoAttachmentsList:(id)arg4 imageAttachmentsURLsToLoad:(id)arg5 ;
-(void)dealloc;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFNanoServerMessageContentLoaderDelegate <NSObject>
@required
-(void)messageContentLoader:(id)arg1 receivedMailContent:(id)arg2 forMessage:(id)arg3 loadedProtected:(char)arg4;
-(void)messageContentLoader:(id)arg1 receivedImageAttachment:(id)arg2 contentId:(id)arg3 loadedProtected:(char)arg4;
-(void)messageContentLoaderDidFinishLoading:(id)arg1;
-(void)messageContentLoaderDidFailLoadingContent:(id)arg1;

@end


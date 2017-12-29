/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBObserverDelegate <NSObject>
@optional
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3 playLightsAndSirens:(char)arg4 withReply:(/*^block*/id)arg5;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned)arg3;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned)arg3;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2;
-(void)observer:(id)arg1 removeBulletin:(id)arg2;
-(void)observer:(id)arg1 updateSectionOrderRule:(int)arg2;
-(void)observer:(id)arg1 updateSectionOrder:(id)arg2;
-(void)observer:(id)arg1 removeSection:(id)arg2;
-(void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
-(void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;
-(void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned)arg2;
-(void)observer:(id)arg1 noteAlertBehaviorOverrideStateChanged:(unsigned)arg2;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(char)arg2;
-(void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2;
-(void)observer:(id)arg1 prepareAttachment:(id)arg2 beforeDeliveringBulletin:(id)arg3 withCompletionHandler:(/*^block*/id)arg4;
-(char)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
-(char)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1;
-(id)observer:(id)arg1 thumbnailSizeConstraintsForAttachment:(id)arg2 bulletin:(id)arg3;
-(id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(int)arg2;
-(void)observer:(id)arg1 processData:(id)arg2 forAttachment:(id)arg3 bulletin:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)observer:(id)arg1 composedImageFromThumbnailData:(id)arg2 forAttachment:(id)arg3 bulletin:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(CGSize*)observer:(id)arg1 composedImageSizeForAttachment:(id)arg2 bulletin:(id)arg3 thumbnailSize:(CGSize)arg4;
-(id)observer:(id)arg1 composedAttachmentImageForType:(int)arg2 thumbnailData:(id)arg3 key:(id)arg4;
-(CGSize*)observer:(id)arg1 composedAttachmentSizeForType:(int)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(id)arg5;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMessageContentViewDelegate <NSObject>
@optional
-(void)messageContentViewDidFinishLoadingMessage:(id)arg1;
-(void)messageContentViewDidFinishFirstPaint:(id)arg1;
-(void)messageContentViewDidDisplayContent:(id)arg1;
-(void)messageContentView:(id)arg1 didFinishRenderingWithHeight:(float)arg2;
-(void)messageContentView:(id)arg1 expandQuoteAtCollapsedOffset:(CGPoint)arg2 expandedOffset:(CGPoint)arg3;
-(void)messageContentViewDidTapRevealActionsButton:(id)arg1;
-(void)messageContentViewWillBeginZoomingMessage:(id)arg1;
-(void)messageContentView:(id)arg1 didEndZoomingMessageWithOffset:(CGPoint)arg2;
-(void)messageContentView:(id)arg1 didChangeSelectedHTML:(id)arg2;
-(void)messageContentView:(id)arg1 loadingIndicatorDidChangeVisibility:(char)arg2;

@required
-(id)presentingViewControllerForMessageContentView:(id)arg1;
-(id)attachmentHandlingDelegateForMessageContentView:(id)arg1;

@end


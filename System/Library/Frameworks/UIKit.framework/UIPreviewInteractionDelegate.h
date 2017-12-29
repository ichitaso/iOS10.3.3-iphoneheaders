/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPreviewInteractionDelegate <NSObject>
@optional
-(char)previewInteractionShouldBegin:(id)arg1;
-(void)previewInteraction:(id)arg1 didUpdateCommitTransition:(float)arg2 ended:(char)arg3;

@required
-(void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(float)arg2 ended:(char)arg3;
-(void)previewInteractionDidCancel:(id)arg1;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPreviewItemDelegate <NSObject>
@optional
-(char)_interactionShouldBeginFromPreviewItemController:(id)arg1 forPosition:(CGPoint)arg2;
-(id)_presentationRectsForPreviewItemController:(id)arg1;
-(id)_presentationSnapshotForPreviewItemController:(id)arg1;
-(void)_interactionStoppedFromPreviewItemController:(id)arg1;
-(void)_interactionStartedFromPreviewItemController:(id)arg1;
-(id)_presentedViewControllerForPreviewItemController:(id)arg1;
-(void)_previewItemController:(id)arg1 willPresentPreview:(id)arg2 forPosition:(CGPoint)arg3 inSourceView:(id)arg4;
-(void)_previewItemController:(id)arg1 didDismissPreview:(id)arg2 committing:(char)arg3;
-(void)_previewItemController:(id)arg1 commitPreview:(id)arg2;
-(void)_previewItemControllerDidCancelPreview:(id)arg1;
-(CGRect*)_presentationRectForPreviewItemController:(id)arg1;

@required
-(id)_dataForPreviewItemController:(id)arg1 atPosition:(CGPoint)arg2 type:(int*)arg3;

@end


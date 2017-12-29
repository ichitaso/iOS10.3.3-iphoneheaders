/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIPreviewInteractionHighlighting.h>

@class UIView, NSString;

@interface _UIPreviewInteractionSystemHighlighter : NSObject <_UIPreviewInteractionHighlighting> {

	UIView* _initialSnapshotView;
	UIView* _updatedSnapshotView;
	UIView* _blinderView;

}

@property (nonatomic,retain) UIView * initialSnapshotView;              //@synthesize initialSnapshotView=_initialSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * updatedSnapshotView;              //@synthesize updatedSnapshotView=_updatedSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * blinderView;                      //@synthesize blinderView=_blinderView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)prepareHighlightWithPreviewingContext:(id)arg1 ;
-(UIView *)initialSnapshotView;
-(UIView *)updatedSnapshotView;
-(UIView *)blinderView;
-(id)_newSnapshotViewForPreviewingContext:(id)arg1 afterScreenUpdates:(char)arg2 ;
-(void)setInitialSnapshotView:(UIView *)arg1 ;
-(void)setUpdatedSnapshotView:(UIView *)arg1 ;
-(void)setBlinderView:(UIView *)arg1 ;
-(id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3 ;
-(void)finalizeHighlightForPreviewingContext:(id)arg1 ;
@end


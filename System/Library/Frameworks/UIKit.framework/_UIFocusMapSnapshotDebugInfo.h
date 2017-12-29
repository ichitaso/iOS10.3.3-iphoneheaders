/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImage, _UIFocusMapSnapshot, _UIFocusMapSearchInfo;

@interface _UIFocusMapSnapshotDebugInfo : NSObject {

	UIImage* _image;
	_UIFocusMapSnapshot* _snapshot;
	_UIFocusMapSearchInfo* _focusMapSearchInfo;
	CGPoint _imageAnchorPoint;

}

@property (nonatomic,copy,readonly) _UIFocusMapSnapshot * snapshot;                            //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,__weak,readonly) _UIFocusMapSearchInfo * focusMapSearchInfo;              //@synthesize focusMapSearchInfo=_focusMapSearchInfo - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                                //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGPoint imageAnchorPoint;                                       //@synthesize imageAnchorPoint=_imageAnchorPoint - In the implementation block
+(id)_summaryImageForDebugInfoArray:(id)arg1 forFocusMovementWithInfo:(id)arg2 scaleFactor:(float)arg3 ;
-(UIImage *)image;
-(id)_drawImage;
-(_UIFocusMapSnapshot *)snapshot;
-(CGRect)_rectContainingAllFocusRegions;
-(CGPoint)imageAnchorPoint;
-(id)initWithSnapshot:(id)arg1 focusMapSearchInfo:(id)arg2 ;
-(_UIFocusMapSearchInfo *)focusMapSearchInfo;
@end


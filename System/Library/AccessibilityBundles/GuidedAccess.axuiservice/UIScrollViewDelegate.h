/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIScrollViewDelegate <NSObject>
@optional
-(void)scrollViewDidScroll:(id)arg1;
-(void)scrollViewDidZoom:(id)arg1;
-(void)scrollViewWillBeginDragging:(id)arg1;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2;
-(void)scrollViewWillBeginDecelerating:(id)arg1;
-(void)scrollViewDidEndDecelerating:(id)arg1;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1;
-(id)viewForZoomingInScrollView:(id)arg1;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
-(char)scrollViewShouldScrollToTop:(id)arg1;
-(void)scrollViewDidScrollToTop:(id)arg1;

@end


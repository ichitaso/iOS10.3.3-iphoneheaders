/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMGridViewDelegate <NSObject,UIScrollViewDelegate>
@optional
-(void)gridView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(int)arg3;
-(int)gridView:(id)arg1 willSelectItemAtIndex:(int)arg2;
-(void)gridView:(id)arg1 didSelectItemAtIndex:(int)arg2;
-(void)gridView:(id)arg1 updateSelectedCell:(id)arg2;
-(char)gridView:(id)arg1 canDeleteCellAtIndex:(int)arg2;
-(char)gridView:(id)arg1 canMoveCellAtIndex:(int)arg2;
-(void)gridView:(id)arg1 moveCellAtIndex:(int)arg2 toIndex:(int)arg3;
-(void)gridView:(id)arg1 willGrabCell:(id)arg2;
-(void)gridView:(id)arg1 shouldDeleteItemAtIndex:(unsigned)arg2;
-(int)gridView:(id)arg1 numberOfColumnsFor:(int)arg2;

@end


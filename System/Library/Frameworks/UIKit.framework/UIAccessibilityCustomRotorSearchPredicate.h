/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIAccessibilityCustomRotorItemResult;

@interface UIAccessibilityCustomRotorSearchPredicate : NSObject {

	UIAccessibilityCustomRotorItemResult* _currentItem;
	int _searchDirection;

}

@property (nonatomic,retain) UIAccessibilityCustomRotorItemResult * currentItem;              //@synthesize currentItem=_currentItem - In the implementation block
@property (assign,nonatomic) int searchDirection;                                             //@synthesize searchDirection=_searchDirection - In the implementation block
-(UIAccessibilityCustomRotorItemResult *)currentItem;
-(void)setCurrentItem:(UIAccessibilityCustomRotorItemResult *)arg1 ;
-(int)searchDirection;
-(void)setSearchDirection:(int)arg1 ;
@end


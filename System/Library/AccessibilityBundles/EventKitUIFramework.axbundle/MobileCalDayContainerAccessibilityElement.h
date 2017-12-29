/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/EventKitUIFramework.axbundle/EventKitUIFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUIFramework/EventKitUIFramework-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSMutableArray, NSDate, UIView;

@interface MobileCalDayContainerAccessibilityElement : UIAccessibilityElement {

	NSMutableArray* _children;
	NSDate* _date;
	int _indexInArray;
	UIView* _dayGrid;

}

@property (nonatomic,retain) NSMutableArray * children;              //@synthesize children=_children - In the implementation block
@property (nonatomic,retain) NSDate * date;                          //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) int indexInArray;                       //@synthesize indexInArray=_indexInArray - In the implementation block
@property (assign,nonatomic,__weak) UIView * dayGrid;                //@synthesize dayGrid=_dayGrid - In the implementation block
-(void)setIndexInArray:(int)arg1 ;
-(void)setDayGrid:(UIView *)arg1 ;
-(int)indexInArray;
-(UIView *)dayGrid;
-(void)dealloc;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
-(id)_accessibilityParentForFindingScrollParent;
-(NSMutableArray *)children;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)accessibilityContainerElements;
-(void)setChildren:(NSMutableArray *)arg1 ;
@end


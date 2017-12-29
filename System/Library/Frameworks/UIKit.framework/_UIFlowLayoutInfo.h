/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableArray, UICollectionViewFlowLayout;

@interface _UIFlowLayoutInfo : NSObject {

	char _useFloatingHeaderFooter;
	CGRect _visibleBounds;
	CGSize _layoutSize;
	char _isValid;
	CGSize _computedEstimatedSum;
	int _computedEstimatedCount;
	char _usesFloatingHeaderFooter;
	char _horizontal;
	char _leftToRight;
	char _estimatesSizes;
	NSMutableArray* _sections;
	float _dimension;
	UICollectionViewFlowLayout* _layout;
	CGSize _contentSize;
	SCD_Struct_UI94 _rowAlignmentOptions;

}

@property (nonatomic,readonly) NSMutableArray * sections;                             //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) char usesFloatingHeaderFooter;                           //@synthesize usesFloatingHeaderFooter=_usesFloatingHeaderFooter - In the implementation block
@property (assign,nonatomic) float dimension;                                         //@synthesize dimension=_dimension - In the implementation block
@property (assign,nonatomic) char horizontal;                                         //@synthesize horizontal=_horizontal - In the implementation block
@property (assign,nonatomic) char leftToRight;                                        //@synthesize leftToRight=_leftToRight - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                      //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI94 rowAlignmentOptions;                     //@synthesize rowAlignmentOptions=_rowAlignmentOptions - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewFlowLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) char estimatesSizes;                                     //@synthesize estimatesSizes=_estimatesSizes - In the implementation block
@property (nonatomic,readonly) CGSize computedEstimatedSize; 
-(id)init;
-(id)copy;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(id)snapshot;
-(UICollectionViewFlowLayout *)layout;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setHorizontal:(char)arg1 ;
-(NSMutableArray *)sections;
-(void)invalidate:(char)arg1 ;
-(id)specifiedItemSizes;
-(char)horizontal;
-(SCD_Struct_UI94)rowAlignmentOptions;
-(id)setSize:(CGSize)arg1 forItemAtIndexPath:(id)arg2 ;
-(CGSize)computedEstimatedSize;
-(float)dimension;
-(void)setLeftToRight:(char)arg1 ;
-(id)addSection;
-(void)setRowAlignmentOptions:(SCD_Struct_UI94)arg1 ;
-(void)setDimension:(float)arg1 ;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(void)didUpdateSizeForSection:(int)arg1 withDelta:(float)arg2 ;
-(id)invalidatedIndexPaths;
-(char)leftToRight;
-(char)usesFloatingHeaderFooter;
-(void)setUsesFloatingHeaderFooter:(char)arg1 ;
-(char)estimatesSizes;
-(void)setEstimatesSizes:(char)arg1 ;
@end


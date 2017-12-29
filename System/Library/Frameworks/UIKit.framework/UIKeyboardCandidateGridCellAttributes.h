/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@class NSIndexPath;

@interface UIKeyboardCandidateGridCellAttributes : UICollectionViewLayoutAttributes {

	char _dummy;
	char _groupHeader;
	char _needsPaddingForIndexScrubber;
	char _groupShowsAlternativeText;
	char _secondaryCandidateAppearance;
	char _emphasizedAppearance;
	NSIndexPath* _candidateIndexPath;
	SCD_Struct_UI35 _visualStyling;
	int _candidatesVisualStyle;
	unsigned _candidateNumber;
	unsigned _rowIndex;
	unsigned _edges;
	CGSize _rowSize;

}

@property (nonatomic,retain) NSIndexPath * candidateIndexPath;               //@synthesize candidateIndexPath=_candidateIndexPath - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI35 visualStyling;                  //@synthesize visualStyling=_visualStyling - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                      //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
@property (assign,nonatomic) char dummy;                                     //@synthesize dummy=_dummy - In the implementation block
@property (assign,nonatomic) char groupHeader;                               //@synthesize groupHeader=_groupHeader - In the implementation block
@property (assign,nonatomic) unsigned candidateNumber;                       //@synthesize candidateNumber=_candidateNumber - In the implementation block
@property (assign,nonatomic) unsigned rowIndex;                              //@synthesize rowIndex=_rowIndex - In the implementation block
@property (assign,nonatomic) CGSize rowSize;                                 //@synthesize rowSize=_rowSize - In the implementation block
@property (assign,nonatomic) unsigned edges;                                 //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) char needsPaddingForIndexScrubber;              //@synthesize needsPaddingForIndexScrubber=_needsPaddingForIndexScrubber - In the implementation block
@property (assign,nonatomic) char groupShowsAlternativeText;                 //@synthesize groupShowsAlternativeText=_groupShowsAlternativeText - In the implementation block
@property (assign,nonatomic) char secondaryCandidateAppearance;              //@synthesize secondaryCandidateAppearance=_secondaryCandidateAppearance - In the implementation block
@property (assign,nonatomic) char emphasizedAppearance;                      //@synthesize emphasizedAppearance=_emphasizedAppearance - In the implementation block
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setEdges:(unsigned)arg1 ;
-(unsigned)representedElementCategory;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVisualStyling:(SCD_Struct_UI35)arg1 ;
-(SCD_Struct_UI35)visualStyling;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(int)candidatesVisualStyle;
-(unsigned)rowIndex;
-(char)dummy;
-(char)groupHeader;
-(NSIndexPath *)candidateIndexPath;
-(void)setNeedsPaddingForIndexScrubber:(char)arg1 ;
-(unsigned)candidateNumber;
-(void)setDummy:(char)arg1 ;
-(CGSize)rowSize;
-(unsigned)edges;
-(char)needsPaddingForIndexScrubber;
-(char)groupShowsAlternativeText;
-(void)setCandidateNumber:(unsigned)arg1 ;
-(char)secondaryCandidateAppearance;
-(void)setSecondaryCandidateAppearance:(char)arg1 ;
-(char)emphasizedAppearance;
-(void)setEmphasizedAppearance:(char)arg1 ;
-(void)setCandidateIndexPath:(NSIndexPath *)arg1 ;
-(void)setGroupHeader:(char)arg1 ;
-(void)setRowIndex:(unsigned)arg1 ;
-(void)setRowSize:(CGSize)arg1 ;
-(void)setGroupShowsAlternativeText:(char)arg1 ;
@end


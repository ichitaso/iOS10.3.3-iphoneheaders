/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UILabel.h>

@class NSArray, NSDictionary;

@interface InstructionsLabel : UILabel {

	char _offsetAlignmentRectToAscender;
	char _offsetAlignmentRectToDescender;
	NSArray* _alternatives;
	NSDictionary* _alternativesTextAttributes;
	SCD_Struct_In10 _growingRequirements;

}

@property (nonatomic,copy) NSArray * alternatives;                                 //@synthesize alternatives=_alternatives - In the implementation block
@property (nonatomic,copy) NSDictionary * alternativesTextAttributes;              //@synthesize alternativesTextAttributes=_alternativesTextAttributes - In the implementation block
@property (assign,nonatomic) SCD_Struct_In10 growingRequirements;                  //@synthesize growingRequirements=_growingRequirements - In the implementation block
@property (assign,nonatomic) char offsetAlignmentRectToAscender;                   //@synthesize offsetAlignmentRectToAscender=_offsetAlignmentRectToAscender - In the implementation block
@property (assign,nonatomic) char offsetAlignmentRectToDescender;                  //@synthesize offsetAlignmentRectToDescender=_offsetAlignmentRectToDescender - In the implementation block
-(void)setAlternativesTextAttributes:(NSDictionary *)arg1 ;
-(void)setGrowingRequirements:(SCD_Struct_In10)arg1 ;
-(id)_alternativeSelectionWithSize:(CGSize)arg1 constrainingToSize:(char)arg2 ;
-(void)_updateAlternativeSelectionConstrainingToBounds:(char)arg1 ;
-(NSDictionary *)alternativesTextAttributes;
-(SCD_Struct_In10)growingRequirements;
-(char)offsetAlignmentRectToAscender;
-(void)setOffsetAlignmentRectToAscender:(char)arg1 ;
-(char)offsetAlignmentRectToDescender;
-(void)setOffsetAlignmentRectToDescender:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(NSArray *)alternatives;
-(void)setAlternatives:(NSArray *)arg1 ;
@end


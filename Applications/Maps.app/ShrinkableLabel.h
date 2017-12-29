/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UILabel.h>

@class UIFont, NSArray;

@interface ShrinkableLabel : UILabel {

	char _needsUpdateLabel;
	UIFont* _maxFont;
	float _maxFontSize;
	float _minFontSize;
	int _maxNumberOfLines;
	NSArray* _textAlternatives;

}

@property (nonatomic,retain) UIFont * maxFont;                        //@synthesize maxFont=_maxFont - In the implementation block
@property (assign,nonatomic) float maxFontSize;                       //@synthesize maxFontSize=_maxFontSize - In the implementation block
@property (assign,nonatomic) float minFontSize;                       //@synthesize minFontSize=_minFontSize - In the implementation block
@property (assign,nonatomic) int maxNumberOfLines;                    //@synthesize maxNumberOfLines=_maxNumberOfLines - In the implementation block
@property (nonatomic,retain) NSArray * textAlternatives;              //@synthesize textAlternatives=_textAlternatives - In the implementation block
-(void)setMaxFont:(UIFont *)arg1 ;
-(void)setTextAlternatives:(NSArray *)arg1 ;
-(void)setNeedsUpdateLabel;
-(UIFont *)maxFont;
-(int)maxNumberOfLines;
-(void)setMaxNumberOfLines:(int)arg1 ;
-(NSArray *)textAlternatives;
-(void)setMaxFontSize:(float)arg1 ;
-(void)layoutSubviews;
-(void)setMinFontSize:(float)arg1 ;
-(float)minFontSize;
-(float)maxFontSize;
-(void)updateLabel;
@end


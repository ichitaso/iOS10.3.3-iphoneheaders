/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableArray, NSArray;

@interface UIPrintPageRenderer : NSObject {

	float _headerHeight;
	float _footerHeight;
	CGRect _paperRect;
	CGRect _printableRect;
	NSMutableArray* _printFormatters;
	CGContextRef _printContext;
	int _cachedPageCount;

}

@property (assign,nonatomic) CGRect paperRect;                     //@synthesize paperRect=_paperRect - In the implementation block
@property (assign,nonatomic) CGRect printableRect;                 //@synthesize printableRect=_printableRect - In the implementation block
@property (assign,nonatomic) float headerHeight;                   //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) float footerHeight;                   //@synthesize footerHeight=_footerHeight - In the implementation block
@property (nonatomic,readonly) int numberOfPages; 
@property (nonatomic,copy) NSArray * printFormatters;              //@synthesize printFormatters=_printFormatters - In the implementation block
-(void)dealloc;
-(int)numberOfPages;
-(int)_numberOfPages;
-(CGRect)printableRect;
-(void)_removePrintFormatter:(id)arg1 ;
-(float)headerHeight;
-(float)footerHeight;
-(CGRect)paperRect;
-(char)_numberOfPagesIsCached;
-(void)setPaperRect:(CGRect)arg1 ;
-(void)setPrintableRect:(CGRect)arg1 ;
-(void)addPrintFormatter:(id)arg1 startingAtPageAtIndex:(int)arg2 ;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(void)_startSaveContext:(CGContextRef)arg1 ;
-(void)_drawPage:(int)arg1 ;
-(void)_endSaveContext;
-(char)_startPrintContext:(id)arg1 printSettings:(id)arg2 ;
-(void)_endPrintContext:(id)arg1 success:(char)arg2 ;
-(int)_maxFormatterPage;
-(void)drawHeaderForPageAtIndex:(int)arg1 inRect:(CGRect)arg2 ;
-(void)drawContentForPageAtIndex:(int)arg1 inRect:(CGRect)arg2 ;
-(void)drawPrintFormatter:(id)arg1 forPageAtIndex:(int)arg2 ;
-(void)drawFooterForPageAtIndex:(int)arg1 inRect:(CGRect)arg2 ;
-(void)drawPageAtIndex:(int)arg1 inRect:(CGRect)arg2 ;
-(void)setPrintFormatters:(NSArray *)arg1 ;
-(id)printFormattersForPageAtIndex:(int)arg1 ;
-(void)setHeaderHeight:(float)arg1 ;
-(void)setFooterHeight:(float)arg1 ;
-(NSArray *)printFormatters;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class NSAttributedString;

@interface RefittedFrame : NSObject {

	float _width;
	unsigned _maximumNumberOfLines;
	float _minimumLineHeight;
	CTFrameRef _frame;
	char _measured;
	unsigned _numberOfLines;
	float _maxLineHeight;
	float _maxLineWidth;
	NSRange _fittedRange;
	NSAttributedString* _string;

}

@property (nonatomic,copy) NSAttributedString * string;                            //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedString; 
@property (nonatomic,readonly) float width;                                        //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) float widthUsed; 
@property (nonatomic,readonly) NSRange fittedRange; 
@property (nonatomic,readonly) float height; 
@property (nonatomic,readonly) unsigned numberOfLines; 
@property (nonatomic,readonly) char textFitsEntirely; 
@property (nonatomic,readonly) CTFrameRef CTFrame; 
-(CTFrameRef)CTFrame;
-(id)initWithAttributedString:(id)arg1 width:(float)arg2 maximumNumberOfLines:(unsigned)arg3 minimumLineHeight:(float)arg4 ;
-(CTFrameRef)newFrameFromFramesetter:(CTFramesetterRef)arg1 ;
-(void)measureIfNeeded;
-(NSRange)fittedRange;
-(float)widthUsed;
-(char)textFitsEntirely;
-(id)getLayersForBounds:(CGRect)arg1 ;
-(void)dealloc;
-(NSAttributedString *)string;
-(void)setString:(NSAttributedString *)arg1 ;
-(float)width;
-(float)height;
-(NSAttributedString *)attributedString;
-(unsigned)numberOfLines;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSLayoutManagerDelegate <NSObject>
@optional
-(unsigned)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const int*)arg3 characterIndexes:(const unsigned*)arg4 font:(id)arg5 forGlyphRange:(NSRange)arg6;
-(float)layoutManager:(id)arg1 lineSpacingAfterGlyphAtIndex:(unsigned)arg2 withProposedLineFragmentRect:(CGRect)arg3;
-(float)layoutManager:(id)arg1 paragraphSpacingBeforeGlyphAtIndex:(unsigned)arg2 withProposedLineFragmentRect:(CGRect)arg3;
-(float)layoutManager:(id)arg1 paragraphSpacingAfterGlyphAtIndex:(unsigned)arg2 withProposedLineFragmentRect:(CGRect)arg3;
-(int)layoutManager:(id)arg1 shouldUseAction:(int)arg2 forControlCharacterAtIndex:(unsigned)arg3;
-(char)layoutManager:(id)arg1 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned)arg2;
-(char)layoutManager:(id)arg1 shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned)arg2;
-(CGRect*)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned)arg2 forTextContainer:(id)arg3 proposedLineFragment:(CGRect)arg4 glyphPosition:(CGPoint)arg5 characterIndex:(unsigned)arg6;
-(char)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout CGRect*)arg2 lineFragmentUsedRect:(inout CGRect*)arg3 baselineOffset:(inout float*)arg4 inTextContainer:(id)arg5 forGlyphRange:(NSRange)arg6;
-(void)layoutManagerDidInvalidateLayout:(id)arg1;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(char)arg3;
-(void)layoutManager:(id)arg1 textContainer:(id)arg2 didChangeGeometryFromSize:(CGSize)arg3;

@end


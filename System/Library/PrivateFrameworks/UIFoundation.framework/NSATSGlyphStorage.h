/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <CoreText/CTGlyphStorageInterface.h>

@class NSATSTypesetter, NSString;

@interface NSATSGlyphStorage : CTGlyphStorageInterface {

	CTGlyphStorageRef _glyphStorage;
	CFArrayRef _masterRuns;
	NSATSTypesetter* _typesetter;
	SCD_Struct_NS12* _runs;
	long _numRuns;
	long _runBufferSize;
	NSRange _glyphRange;
	NSRange _characterRange;
	long _bufferSize;
	NSATSGlyphStorage* _parent;
	CFSetRef _children;
	long _paraEndElasticCharIndex;
	float _paraEndElasticCharWidth;
	NSString* _textString;
	SCD_Struct_NS15* _stack;
	const SCD_Struct_NS12* _lastElasticRun;
	long _lastElasticRunLocation;
	long _totalAbsorbedCount;
	struct {
		unsigned _hasNonNominalGlyph : 1;
		unsigned _hasPositionalStake : 1;
		unsigned _hasBidiRun : 1;
		unsigned _isEllipsisStorage : 1;
		unsigned _hasNonNominalStringIndexes : 1;
		unsigned _isUnordered : 1;
		unsigned _hasTotalAbsorbedCount : 1;
		unsigned _reserved : 25;
	}  _gFlags;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)typesetter;
-(id)initWithTypesetter:(id)arg1 ;
-(void)setGlyphRange:(NSRange)arg1 characterRange:(NSRange)arg2 ;
-(CTTypesetterRef)createCTTypesetter;
-(void)_flushCachedObjects;
-(id)childGlyphStorageWithCharacterRange:(NSRange)arg1 ;
-(CTRunRef)_createEllipsisRunWithStringRange:(SCD_Struct_NS7)arg1 attributes:(CFDictionaryRef)arg2 ;
-(BOOL)_resolvePositionalStakeGlyphsForLineFragment:(CTLineRef)arg1 lineFragmentRect:(CGRect)arg2 minPosition:(float)arg3 maxPosition:(float)arg4 maxLineFragmentWidth:(float)arg5 breakHint:(int*)arg6 ;
-(NSRange)_collectElasticRangeSurroundingCharacterAtIndex:(long)arg1 minimumCharacterIndex:(long)arg2 ;
-(float)_widthForStringRange:(NSRange)arg1 ;
-(const SCD_Struct_NS12*)_attributeRunForCharacterAtIndex:(long)arg1 ;
-(CTGlyphStorageRef)createCopy:(SCD_Struct_NS7)arg1 ;
-(void)getCustomAdvance:(CGSize*)arg1 forIndex:(long)arg2 ;
-(void)setGlyphID:(unsigned short)arg1 forIndex:(long)arg2 ;
-(void)setAdvance:(CGSize)arg1 forIndex:(long)arg2 ;
-(void)setProps:(unsigned)arg1 forIndex:(long)arg2 ;
-(void)setAbsorbedCount:(long)arg1 forIndex:(long)arg2 ;
-(void)setStringIndex:(long)arg1 forIndex:(long)arg2 ;
-(void)swapGlyph:(long)arg1 withIndex:(long)arg2 ;
-(void)moveGlyphsTo:(long)arg1 from:(SCD_Struct_NS7)arg2 ;
-(void)insertGlyphs:(SCD_Struct_NS7)arg1 ;
-(void)initGlyphStack:(long)arg1 ;
-(void)pushGlyph:(long)arg1 ;
-(void)popGlyph:(long)arg1 ;
-(void)disposeGlyphStack;
-(oneway void)release;
-(void)dealloc;
-(char)_isDeallocating;
-(char)_tryRetain;
-(void)_invalidate;
-(void)finalize;
@end


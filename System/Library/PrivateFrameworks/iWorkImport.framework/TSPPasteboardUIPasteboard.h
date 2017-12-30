/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPPasteboard.h>

@class NSArray, NSMutableDictionary;

@interface TSPPasteboardUIPasteboard : TSPPasteboard {

	NSArray* _cachedPasteboardTypes;
	NSMutableDictionary* _pasteboardItemIndexCache;
	unsigned _pasteboardItemCount;
	int _cachedChangeCount;

}
-(int)clearContents;
-(void)addItems:(id)arg1 isSmartCopy:(char)arg2 ;
-(id)initWithGeneralPasteboard;
-(id)initWithPasteboardName:(id)arg1 create:(char)arg2 ;
-(id)initWithUniquePasteboardName;
-(id)initWithNativePasteboard:(id)arg1 ;
-(id)stringForPasteboardType:(id)arg1 ;
-(void)addData:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)stringsForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)importablePlainTextTypes;
-(char)containsImportableTextTypes;
-(unsigned long)pasteboardItemMaxSize;
-(void)addPasteboardItem:(id)arg1 ;
-(void)addPasteboardItem:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)addPasteboardItemIndex:(unsigned)arg1 forType:(id)arg2 ;
-(void)invalidatePasteboardCache;
-(void)invalidatePasteboardCacheIfNeeded;
-(void)updateCachedChangeCount;
-(id)propertyListForValue:(id)arg1 ;
-(void)addPasteboardItemForObject:(id)arg1 type:(id)arg2 ;
-(void)reloadPasteboardItemIndexCacheIfNeeded;
-(oneway void)invalidate;
-(id)string;
-(id)pasteboardTypes;
-(id)dataForPasteboardType:(id)arg1 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(int)numberOfItems;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(void)setString:(id)arg1 ;
-(id)strings;
-(id)URLs;
@end

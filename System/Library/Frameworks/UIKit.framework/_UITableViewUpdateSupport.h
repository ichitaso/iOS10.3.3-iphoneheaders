/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UITableView, NSArray, UITableViewRowData, NSMutableIndexSet, NSMutableArray;

@interface _UITableViewUpdateSupport : NSObject {

	int oldSection;
	int newSection;
	int oldGlobalRow;
	int newGlobalRow;
	UITableView* tableView;
	NSRange visibleRows;
	NSArray* updateItems;
	UITableViewRowData* oldRowData;
	UITableViewRowData* newRowData;
	NSRange oldRowRange;
	NSRange newRowRange;
	NSMutableIndexSet* rows;
	NSMutableIndexSet* movedRows;
	NSMutableIndexSet* movedSections;
	CGRect oldTableViewVisibleBounds;
	CGRect newTableViewVisibleBounds;
	CGRect tableViewVisibleBoundsUnion;
	float tableViewVisibleBoundsOffset;
	int oldSectionCount;
	int newSectionCount;
	int* oldSectionMap;
	int* newSectionMap;
	int oldGlobalRowCount;
	int newGlobalRowCount;
	int* oldGlobalRowMap;
	int* newGlobalRowMap;
	id* animatedCells;
	id* animatedHeaders;
	id* animatedFooters;
	int globalReorderingRow;
	id _context;
	NSMutableArray* viewAnimations;
	NSMutableArray* deletedSections;
	NSMutableArray* insertedSections;
	NSMutableArray* gaps;

}
-(void)dealloc;
-(id)initWithTableView:(id)arg1 updateItems:(id)arg2 oldRowData:(id)arg3 newRowData:(id)arg4 oldRowRange:(NSRange)arg5 newRowRange:(NSRange)arg6 context:(id)arg7 ;
-(void)_setupAnimations;
-(NSRange)_visibleRowRangePlusAdjoining;
-(void)_computeVisibleBounds;
-(float)_startOfRowAfterRow:(int)arg1 withRowData:(id)arg2 ;
-(float)_startOfRowAfterHeaderInSection:(int)arg1 withRowData:(id)arg2 ;
-(float)_startOfRowAfterFooterInSection:(int)arg1 withRowData:(id)arg2 ;
-(void)_setupInsertAnimationForHeaderInSection:(int)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3 ;
-(void)_setupInsertAnimationForFooterInSection:(int)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3 ;
-(void)_addBottomShadowViewViewForViewAnimation:(id)arg1 viewType:(int)arg2 ;
-(void)_setupDeleteAnimationForHeaderInSection:(int)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3 ;
-(void)_setupDeleteAnimationForFooterInSection:(int)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3 ;
-(char)_isReloadSectionUpdate;
-(id)_imageViewForView:(id)arg1 ;
-(void)_validateAnimatedCells;
-(void)_faultInRealHeightsOfNeededCells;
-(void)_computeSectionUpdates;
-(void)_computeRowUpdates;
-(void)_setupAnimationStructures;
-(void)_computeGaps;
-(void)_computeAutomaticAnimationTypes;
-(void)_setupAnimationsForExistingVisibleCells;
-(void)_setupAnimationForReorderingRow;
-(void)_setupAnimationsForNewlyInsertedCells;
-(void)_setupAnimationsForInsertedHeadersAndFooters;
-(void)_setupAnimationsForDeletedCells;
-(void)_setupAnimationsForDeletedHeadersAndFooters;
-(void)_setupAnimationsForExistingOffscreenCells;
-(void)_setupAnimationsForExistingHeadersAndFooters;
-(void)_setupAnimationForTableHeader;
-(void)_setupAnimationForTableFooter;
@end

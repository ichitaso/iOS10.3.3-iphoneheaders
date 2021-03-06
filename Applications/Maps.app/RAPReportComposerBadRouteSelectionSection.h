/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPTablePartSection.h>

@class RAPBadRouteSuggestionsQuestion;

@interface RAPReportComposerBadRouteSelectionSection : RAPTablePartSection {

	RAPBadRouteSuggestionsQuestion* _question;
	char _collapsed;
	/*^block*/id _willChangeQuestionRequiringNoScroll;

}
-(int)rowsCount;
-(id)cellForRowAtIndex:(int)arg1 ;
-(void)didSelectCellForRowAtIndex:(int)arg1 tableIndexPath:(id)arg2 ;
-(char)usesAutoLayoutForRowAtIndex:(int)arg1 ;
-(id)initWithQuestion:(id)arg1 willChangeQuestionRequiringNoScroll:(/*^block*/id)arg2 ;
-(char)_isNoGoodCellIndex:(int)arg1 ;
-(int)_expansionCellIndex;
-(char)_isExpansionCellIndex:(int)arg1 ;
-(unsigned)_selectableRouteSuggestionIndexForCellIndex:(int)arg1 ;
-(UIEdgeInsets)_separatorInset;
-(void)_noteWillSelectWithoutScroll;
-(float)heightForRowAtIndex:(int)arg1 ;
@end


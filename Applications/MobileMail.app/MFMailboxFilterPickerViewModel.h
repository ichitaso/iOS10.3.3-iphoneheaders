/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMailboxFilterProvider;
@class NSMutableSet, NSArray;

@interface MFMailboxFilterPickerViewModel : NSObject {

	id<MFMailboxFilterProvider> _provider;
	NSMutableSet* _selectedIndexPaths;

}

@property (nonatomic,retain) id<MFMailboxFilterProvider> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSMutableSet * selectedIndexPaths;                 //@synthesize selectedIndexPaths=_selectedIndexPaths - In the implementation block
@property (nonatomic,readonly) NSArray * filters; 
-(id)initWithFilterViewModel:(id)arg1 ;
-(id)indexPathsForFilters:(id)arg1 ;
-(id)selectedFilters;
-(id)initWithProvider:(id)arg1 selectedFilters:(id)arg2 ;
-(id)filtersForGroupAtIndex:(int)arg1 ;
-(id)indexPathForFilter:(id)arg1 ;
-(id)filterAtIndexPath:(id)arg1 ;
-(int)numberOfFilterSection;
-(int)numberOfFiltersForSection:(int)arg1 ;
-(char)canDeselectRowAtIndexPath:(id)arg1 ;
-(int)selectionTypeAtIndex:(id)arg1 ;
-(void)selectFilterAtIndexPath:(id)arg1 ;
-(void)deselectFilterAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(NSArray *)filters;
-(id)groupAtIndex:(int)arg1 ;
-(id)selected;
-(id<MFMailboxFilterProvider>)provider;
-(void)setProvider:(id<MFMailboxFilterProvider>)arg1 ;
-(id)titleForSection:(int)arg1 ;
-(NSMutableSet *)selectedIndexPaths;
-(int)indexOfGroup:(id)arg1 ;
-(void)setSelectedIndexPaths:(NSMutableSet *)arg1 ;
@end


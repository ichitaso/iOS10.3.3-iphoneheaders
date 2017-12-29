/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@protocol UITableViewDataSource;
@class NSString;

@interface _UIFilteredDataSource : NSObject <UITableViewDataSource> {

	char _limitingWithSections;
	int _maxVisibleSection;
	int _numberOfVisibleItemsInLastSection;
	int _filterType;
	id<UITableViewDataSource> _tableDataSource;

}

@property (assign,nonatomic) int filterType;                                         //@synthesize filterType=_filterType - In the implementation block
@property (assign,nonatomic) id<UITableViewDataSource> tableDataSource;              //@synthesize tableDataSource=_tableDataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)respondsToSelector:(SEL)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(int)filterType;
-(void)setTableDataSource:(id<UITableViewDataSource>)arg1 ;
-(void)setFilterType:(int)arg1 ;
-(id<UITableViewDataSource>)tableDataSource;
-(int)_filteredNumberOfItemsGivenSection:(int)arg1 numberOfItems:(int)arg2 ;
@end


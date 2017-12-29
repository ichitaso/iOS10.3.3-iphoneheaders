/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@protocol RAPPresentingViewController;
@class UIViewController, NSMutableArray, UITableView, NSArray, NSString;

@interface RAPTablePartsDataSource : NSObject <UITableViewDataSource> {

	UIViewController*<RAPPresentingViewController> _presentingViewController;
	NSMutableArray* _tableParts;
	NSMutableArray* _tableSections;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSArray * tableParts;                    //@synthesize tableParts=_tableParts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)tableParts;
-(void)_clearPartsAndSections;
-(void)setTableParts:(NSArray *)arg1 ;
-(void)setTableParts:(id)arg1 withRowAnimation:(int)arg2 ;
-(void)tablePartDidChange:(id)arg1 ;
-(void)_rebuildTableSections;
-(void)_createPartAndSectionArraysIfNeeded;
-(void)pushTablePart:(id)arg1 withRowAnimation:(int)arg2 ;
-(void)popTablePart:(id)arg1 withRowAnimation:(int)arg2 ;
-(id)indexPathForRow:(int)arg1 ofSection:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(id)sectionAtIndex:(int)arg1 ;
-(int)indexOfSection:(id)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 ;
@end


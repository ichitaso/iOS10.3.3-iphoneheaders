/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableView.h>

@interface ExtendedTableView : UITableView {

	int _countOfActiveUpdateBlocks;

}
-(void)_noteDataSourceChangedIfPossible;
-(void)setDataSource:(id)arg1 ;
-(void)reloadData;
-(void)beginUpdates;
-(void)endUpdates;
-(void)insertSections:(id)arg1 withRowAnimation:(int)arg2 ;
-(void)deleteSections:(id)arg1 withRowAnimation:(int)arg2 ;
-(void)reloadSections:(id)arg1 withRowAnimation:(int)arg2 ;
-(void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2 ;
-(void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2 ;
-(void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2 ;
@end


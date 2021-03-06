/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVSStarkTableViewControllerDelegate
@required
-(id)tableCellIdentifiersAndClasses;
-(Class)showMoreCellClass;
-(id)newShowMoreCellWithIdentifier:(id)arg1;
-(id)cellIdentifierForItem:(id)arg1 atIndex:(unsigned)arg2;
-(id)newCellWithIdentifier:(id)arg1 forItem:(id)arg2 atIndex:(unsigned)arg3;
-(void)configureCell:(id)arg1 forItem:(id)arg2 atIndex:(unsigned)arg3;
-(id)backgroundColorForTableViewCells;
-(void)didPressShowMore;
-(void)didPressItem:(id)arg1 atIndex:(unsigned)arg2;

@end


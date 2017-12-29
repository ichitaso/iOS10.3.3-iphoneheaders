/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDAddDataManualEntryItem.h>
#import <Health/WDManualDataEntryTableViewCellDelegate.h>

@class WDManualDataEntryTableViewCell, NSNumberFormatter;

@interface _WDNumberBasedAddDataManualEntryItem : WDAddDataManualEntryItem <WDManualDataEntryTableViewCellDelegate> {

	WDManualDataEntryTableViewCell* _tableViewCell;
	unsigned _manualEntryType;
	NSNumberFormatter* _numberFormatter;

}

@property (assign,nonatomic) unsigned manualEntryType;                         //@synthesize manualEntryType=_manualEntryType - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;              //@synthesize numberFormatter=_numberFormatter - In the implementation block
-(id)tableViewCells;
-(id)generateValue;
-(void)setManualEntryType:(unsigned)arg1 ;
-(void)manualDataEntryTableViewCell:(id)arg1 valueDidChangeToValue:(id)arg2 ;
-(unsigned)manualEntryType;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)beginEditing;
-(NSNumberFormatter *)numberFormatter;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSArray;

@interface UIMainPrinterUtilityCell : UITableViewCell {

	NSArray* _supplyLevelViews;
	float textLabelY;
	float detailTextLabelY;
	char _showSupplyDataUnderPrinterName;
	NSArray* _supplies;

}

@property (nonatomic,retain) NSArray * supplies;                               //@synthesize supplies=_supplies - In the implementation block
@property (assign,nonatomic) char showSupplyDataUnderPrinterName;              //@synthesize showSupplyDataUnderPrinterName=_showSupplyDataUnderPrinterName - In the implementation block
-(void)layoutSubviews;
-(char)showSupplyDataUnderPrinterName;
-(void)setSupplies:(NSArray *)arg1 ;
-(NSArray *)supplies;
-(void)setShowSupplyDataUnderPrinterName:(char)arg1 ;
@end


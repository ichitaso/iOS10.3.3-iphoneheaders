/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class StocksBacksideTableView, UISegmentedControl, UIButton;

@interface StocksBacksideView : UIView {

	StocksBacksideTableView* _table;
	UISegmentedControl* _segmentedControl;
	UIButton* _logoView;

}
-(void)selectedSegmentChanged;
-(void)_logoClicked;
-(void)setSelectedRowDataType:(int)arg1 ;
-(void)scrollToStock:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)tableView;
@end


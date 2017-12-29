/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RemindersColorPickerViewControllerDelegate;
@class UITableView, NSString;

@interface RemindersColorPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	int _selectedColor;
	id<RemindersColorPickerViewControllerDelegate> _delegate;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;                                              //@synthesize tableView=_tableView - In the implementation block
@property (assign) int selectedColor;                                                              //@synthesize selectedColor=_selectedColor - In the implementation block
@property (nonatomic,retain) id<RemindersColorPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSelectedListColor:(int)arg1 ;
-(void)setDelegate:(id<RemindersColorPickerViewControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<RemindersColorPickerViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(int)selectedColor;
-(void)setSelectedColor:(int)arg1 ;
@end


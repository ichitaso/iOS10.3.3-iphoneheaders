/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol GuidanceEventTableViewContollerDelegate;
@class NSArray;

@interface GuidanceEventTableViewController : UITableViewController {

	NSArray* _events;
	id<GuidanceEventTableViewContollerDelegate> _delegate;

}

@property (nonatomic,retain) NSArray * events;                                                         //@synthesize events=_events - In the implementation block
@property (assign,nonatomic,__weak) id<GuidanceEventTableViewContollerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)annotationsForEvents;
-(void)setDelegate:(id<GuidanceEventTableViewContollerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<GuidanceEventTableViewContollerDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(NSArray *)events;
-(void)setEvents:(NSArray *)arg1 ;
@end

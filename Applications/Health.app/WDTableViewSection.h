/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WDTableViewSectionDelegate;
@interface WDTableViewSection : NSObject {

	id<WDTableViewSectionDelegate> _delegate;
	unsigned _section;

}

@property (nonatomic,readonly) id<WDTableViewSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned section;                                     //@synthesize section=_section - In the implementation block
-(id)initWithDelegate:(id)arg1 atSection:(unsigned)arg2 ;
-(void)setUpWithTableViewController:(id)arg1 ;
-(void)reloadAnimated:(char)arg1 ;
-(id)viewForHeader:(id)arg1 ;
-(id)viewForFooter:(id)arg1 ;
-(float)heightForHeader;
-(float)heightForFooter;
-(void)accessoryButtonTappedForRow:(unsigned)arg1 ;
-(id)cellForRow:(unsigned)arg1 table:(id)arg2 ;
-(id)willSelectRow:(id)arg1 ;
-(void)didSelectRow:(unsigned)arg1 representedByCell:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id<WDTableViewSectionDelegate>)delegate;
-(unsigned)section;
-(void)deactivate;
-(void)viewWillAppear:(char)arg1 ;
-(unsigned)numberOfRows;
-(void)activate;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(float)estimatedHeightForRow:(unsigned)arg1 ;
-(float)heightForRow:(unsigned)arg1 ;
-(id)titleForHeader;
-(id)titleForFooter;
@end


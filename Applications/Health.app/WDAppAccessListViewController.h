/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTableViewController.h>

@class HKHealthStore, NSArray, HKSample, UIFont;

@interface WDAppAccessListViewController : HKTableViewController {

	HKHealthStore* _healthStore;
	NSArray* _allowedApps;
	NSArray* _disallowedApps;
	HKSample* _sample;
	UIFont* _bodyFont;

}

@property (nonatomic,retain) NSArray * allowedApps;                 //@synthesize allowedApps=_allowedApps - In the implementation block
@property (nonatomic,retain) NSArray * disallowedApps;              //@synthesize disallowedApps=_disallowedApps - In the implementation block
@property (nonatomic,retain) HKSample * sample;                     //@synthesize sample=_sample - In the implementation block
@property (nonatomic,retain) UIFont * bodyFont;                     //@synthesize bodyFont=_bodyFont - In the implementation block
-(void)setBodyFont:(UIFont *)arg1 ;
-(void)_refreshAppAuthorizationData;
-(void)setAllowedApps:(NSArray *)arg1 ;
-(void)setDisallowedApps:(NSArray *)arg1 ;
-(id)_identifierForCellInSection:(int)arg1 ;
-(id)_imageForCellAtIndexPath:(id)arg1 ;
-(id)_textForCellAtIndexPath:(id)arg1 ;
-(void)resetAccess;
-(NSArray *)allowedApps;
-(NSArray *)disallowedApps;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)viewDidLoad;
-(UIFont *)bodyFont;
-(void)setSample:(HKSample *)arg1 ;
-(HKSample *)sample;
-(id)initWithSample:(id)arg1 healthStore:(id)arg2 ;
@end


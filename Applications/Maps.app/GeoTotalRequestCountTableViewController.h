/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSDictionary, NSMutableDictionary, NSMutableArray;

@interface GeoTotalRequestCountTableViewController : UITableViewController {

	NSDictionary* _info;
	NSMutableDictionary* _tableRequestData;
	NSMutableArray* _sectionData;

}

@property (nonatomic,retain) NSDictionary * info;                                 //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tableRequestData;              //@synthesize tableRequestData=_tableRequestData - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionData;                        //@synthesize sectionData=_sectionData - In the implementation block
-(NSMutableDictionary *)tableRequestData;
-(NSMutableArray *)sectionData;
-(void)dataPreProcessing;
-(unsigned)getRequestCountForType:(unsigned char)arg1 andApp:(id)arg2 ;
-(void)setTableRequestData:(NSMutableDictionary *)arg1 ;
-(void)setSectionData:(NSMutableArray *)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(NSDictionary *)info;
-(void)setInfo:(NSDictionary *)arg1 ;
@end


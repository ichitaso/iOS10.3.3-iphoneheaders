/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/_EnvironmentURLTableViewCellDelegate.h>

@class GEOEnvironmentInfo, NSDictionary, NSArray, NSMapTable, NSString;

@interface EnvironmentInfoViewController : UITableViewController <_EnvironmentURLTableViewCellDelegate> {

	GEOEnvironmentInfo* _environment;
	NSDictionary* _urlStrings;
	NSArray* _urlTypes;
	char _editable;
	char _editing;
	NSMapTable* _overrideURLs;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStyle:(int)arg1 environment:(id)arg2 editable:(char)arg3 ;
-(void)urlCell:(id)arg1 didChangeURLString:(id)arg2 ;
-(void)_beginEditing:(id)arg1 ;
-(id)_urlStringForIndexPath:(id)arg1 isFromManifest:(char*)arg2 isFromOverrides:(char*)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)_updateNavigationItem;
-(void)_endEditing:(id)arg1 ;
@end


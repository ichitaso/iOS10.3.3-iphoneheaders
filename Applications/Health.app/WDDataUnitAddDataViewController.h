/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDAddDataViewController.h>
#import <Health/WDAddDataManualEntryItemDelegate.h>

@class WDAddDataManualEntryItem, NSString;

@interface WDDataUnitAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate> {

	WDAddDataManualEntryItem* _dateTimeEntryItem;
	WDAddDataManualEntryItem* _valueEntryItem;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)defaultEditingItem;
-(void)validateDataWithCompletion:(/*^block*/id)arg1 ;
-(id)manualEntryItemsForSection:(int)arg1 ;
-(id)generateHKObjects;
-(id)valueFieldManualEntryItem;
-(void)_setDefaultValuesIfNecessary;
-(void)_updateManualEntryItemWithCurrentBMI:(id)arg1 ;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(int)numberOfSections;
-(void)viewDidLoad;
@end


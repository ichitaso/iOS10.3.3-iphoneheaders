/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSUserDefaults, NSArray;

@interface HWRecentsManager : NSObject {

	char _defaultsLoaded;
	char _defaultsLoadedChecked;
	char _storedItemsLoaded;
	NSMutableDictionary* _itemsData;
	NSMutableArray* _cachedSortedItems;
	NSUserDefaults* _handwritingDefaults;

}

@property (nonatomic,readonly) NSArray * items; 
+(id)recentsDomain;
+(id)sharedManager;
-(void)_deleteItem:(id)arg1 notify:(char)arg2 ;
-(void)_storeItemAsData:(id)arg1 optionalData:(id)arg2 persist:(char)arg3 ;
-(void)_notifyChanges;
-(void)_loadItemsFromIMRecentItemsList;
-(void)_addItem:(id)arg1 dataRepresentation:(id)arg2 persist:(char)arg3 ;
-(void)reloadStoredItems;
-(char)_defaultsLoaded;
-(void)_loadStoredItems;
-(void)_sortItems;
-(void)_storeItemDataToDefaults:(id)arg1 withUUID:(id)arg2 persist:(char)arg3 ;
-(void)_loadDefaultItems;
-(void)_synchronizeHandwritingToDefaults;
-(void)_loadItemsFromNSUserDefaults;
-(id)init;
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(void)deleteItem:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFItem, HFRoomItemProvider, HFStaticItemProvider, HFReorderableHomeKitItemList;

@interface HORoomListItemManager : HFItemManager {

	HFItem* _addRoomItem;
	HFRoomItemProvider* _roomItemProvider;
	HFStaticItemProvider* _staticItemProvider;
	HFReorderableHomeKitItemList* _clientReorderableRoomList;

}

@property (nonatomic,retain) HFRoomItemProvider * roomItemProvider;                                 //@synthesize roomItemProvider=_roomItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;                             //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HFItem * addRoomItem;                                                  //@synthesize addRoomItem=_addRoomItem - In the implementation block
@property (nonatomic,retain) HFReorderableHomeKitItemList * clientReorderableRoomList;              //@synthesize clientReorderableRoomList=_clientReorderableRoomList - In the implementation block
@property (nonatomic,readonly) int roomsSection; 
@property (nonatomic,retain) HFReorderableHomeKitItemList * reorderableRoomList; 
-(HFReorderableHomeKitItemList *)clientReorderableRoomList;
-(void)setClientReorderableRoomList:(HFReorderableHomeKitItemList *)arg1 ;
-(void)setRoomItemProvider:(HFRoomItemProvider *)arg1 ;
-(void)setAddRoomItem:(HFItem *)arg1 ;
-(HFItem *)addRoomItem;
-(HFRoomItemProvider *)roomItemProvider;
-(HFReorderableHomeKitItemList *)reorderableRoomList;
-(int)roomsSection;
-(void)setReorderableRoomList:(HFReorderableHomeKitItemList *)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(void)_createItemProvidersWithHome:(id)arg1 ;
-(id)_itemProviders;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
@end


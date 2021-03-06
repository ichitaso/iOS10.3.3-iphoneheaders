/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HMRoom, HFActionSetItemProvider, HFReorderableHomeKitItemList;

@interface HOGridActionSetItemManager : HFItemManager {

	char _onlyShowsFavorites;
	HMRoom* _room;
	unsigned _actionSetStyle;
	HFActionSetItemProvider* _actionSetItemProvider;
	HFReorderableHomeKitItemList* _clientReorderableActionSetList;

}

@property (nonatomic,retain) HFActionSetItemProvider * actionSetItemProvider;                            //@synthesize actionSetItemProvider=_actionSetItemProvider - In the implementation block
@property (nonatomic,retain) HFReorderableHomeKitItemList * clientReorderableActionSetList;              //@synthesize clientReorderableActionSetList=_clientReorderableActionSetList - In the implementation block
@property (nonatomic,retain) HMRoom * room;                                                              //@synthesize room=_room - In the implementation block
@property (assign,nonatomic) char onlyShowsFavorites;                                                    //@synthesize onlyShowsFavorites=_onlyShowsFavorites - In the implementation block
@property (nonatomic,readonly) unsigned actionSetStyle;                                                  //@synthesize actionSetStyle=_actionSetStyle - In the implementation block
@property (nonatomic,retain) HFReorderableHomeKitItemList * reorderableActionSetList; 
-(HFReorderableHomeKitItemList *)clientReorderableActionSetList;
-(void)setClientReorderableActionSetList:(HFReorderableHomeKitItemList *)arg1 ;
-(unsigned)actionSetStyle;
-(void)setActionSetItemProvider:(HFActionSetItemProvider *)arg1 ;
-(HFActionSetItemProvider *)actionSetItemProvider;
-(HFReorderableHomeKitItemList *)reorderableActionSetList;
-(void)setReorderableActionSetList:(HFReorderableHomeKitItemList *)arg1 ;
-(id)initWithDelegate:(id)arg1 actionSetStyle:(unsigned)arg2 room:(id)arg3 ;
-(id)actionSetItemAssociatedWithActionSet:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_updateFilters;
-(HMRoom *)room;
-(void)setRoom:(HMRoom *)arg1 ;
-(char)onlyShowsFavorites;
-(void)setOnlyShowsFavorites:(char)arg1 ;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1 ;
-(char)_requiresNotificationsForCharacteristic:(id)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(void)_createItemProvidersWithHome:(id)arg1 ;
-(id)_itemProviders;
-(id)_itemForSorting;
-(id)_styleForItem:(id)arg1 ;
@end


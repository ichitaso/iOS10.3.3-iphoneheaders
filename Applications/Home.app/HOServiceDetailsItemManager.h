/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@protocol HFItemBuilderItem, HFServiceLikeBuilder;
@class HFItem, HFItemBuilder, HFItemProvider, HFSelectedRoomItemProvider, HOCharacteristicEventOptionProvider, NSArray, NSDictionary, HFControlPanelItemProvider, HFCharacteristicStateItemProvider, HFAssociatedServiceTypeOptionItemProvider, HFStaticItemProvider, HFServiceItemProvider, HFActionSetItemProvider, HULinkedApplicationItemProvider, HUFirmwareUpdateItemProvider, NSSet;

@interface HOServiceDetailsItemManager : HFItemManager {

	char _shouldHideBridgeItem;
	char _showRoomsList;
	char _showAssociatedServiceTypeList;
	HFItem*<HFItemBuilderItem> _builderItem;
	HFItemBuilder*<HFServiceLikeBuilder> _serviceLikeBuilder;
	HFItemProvider* _existingRoomItemProvider;
	HFItemProvider* _suggestedRoomItemProvider;
	HFSelectedRoomItemProvider* _selectedRoomItemProvider;
	HOCharacteristicEventOptionProvider* _programmableSwitchOptionsProvider;
	HFItem* _selectedRoomItem;
	HFItem* _headerItem;
	HFItem* _nameAndIconItem;
	HFItem* _createNewRoomItem;
	HFItem* _addGroupItem;
	HFItem* _showContainedServicesItem;
	HFItem* _roomItem;
	HFItem* _associatedServiceTypeItem;
	HFItem* _favoriteItem;
	HFItem* _statusAndNotificationItem;
	HFItem* _removeItem;
	HFItem* _bridgeItem;
	NSArray* _characteristicSections;
	NSArray* _programmableSwitchSections;
	NSDictionary* _eventOptionItemServiceUUIDToSectionIdentifierDictionary;
	HFControlPanelItemProvider* _controlPanelItemProvider;
	HFCharacteristicStateItemProvider* _characteristicStateItemProvider;
	HFAssociatedServiceTypeOptionItemProvider* _associatedServiceTypeOptionItemProvider;
	HFStaticItemProvider* _staticItemProvider;
	HFServiceItemProvider* _accessoryInfoProvider;
	HFActionSetItemProvider* _actionSetItemProvider;
	HULinkedApplicationItemProvider* _linkedApplicationItemProvider;
	HUFirmwareUpdateItemProvider* _firmwareUpdateItemProvider;

}

@property (nonatomic,__weak,readonly) id<HOServiceDetailsItemManagerDelegate> serviceDetailsDelegate; 
@property (nonatomic,retain) HFItemBuilder*<HFServiceLikeBuilder> serviceLikeBuilder;                                          //@synthesize serviceLikeBuilder=_serviceLikeBuilder - In the implementation block
@property (nonatomic,retain) NSArray * characteristicSections;                                                                 //@synthesize characteristicSections=_characteristicSections - In the implementation block
@property (nonatomic,retain) NSArray * programmableSwitchSections;                                                             //@synthesize programmableSwitchSections=_programmableSwitchSections - In the implementation block
@property (nonatomic,retain) NSDictionary * eventOptionItemServiceUUIDToSectionIdentifierDictionary;                           //@synthesize eventOptionItemServiceUUIDToSectionIdentifierDictionary=_eventOptionItemServiceUUIDToSectionIdentifierDictionary - In the implementation block
@property (nonatomic,retain) HFControlPanelItemProvider * controlPanelItemProvider;                                            //@synthesize controlPanelItemProvider=_controlPanelItemProvider - In the implementation block
@property (nonatomic,retain) HFCharacteristicStateItemProvider * characteristicStateItemProvider;                              //@synthesize characteristicStateItemProvider=_characteristicStateItemProvider - In the implementation block
@property (nonatomic,retain) HFAssociatedServiceTypeOptionItemProvider * associatedServiceTypeOptionItemProvider;              //@synthesize associatedServiceTypeOptionItemProvider=_associatedServiceTypeOptionItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;                                                        //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HFServiceItemProvider * accessoryInfoProvider;                                                    //@synthesize accessoryInfoProvider=_accessoryInfoProvider - In the implementation block
@property (nonatomic,retain) HFActionSetItemProvider * actionSetItemProvider;                                                  //@synthesize actionSetItemProvider=_actionSetItemProvider - In the implementation block
@property (nonatomic,retain) HULinkedApplicationItemProvider * linkedApplicationItemProvider;                                  //@synthesize linkedApplicationItemProvider=_linkedApplicationItemProvider - In the implementation block
@property (nonatomic,retain) HUFirmwareUpdateItemProvider * firmwareUpdateItemProvider;                                        //@synthesize firmwareUpdateItemProvider=_firmwareUpdateItemProvider - In the implementation block
@property (nonatomic,retain) HFSelectedRoomItemProvider * selectedRoomItemProvider;                                            //@synthesize selectedRoomItemProvider=_selectedRoomItemProvider - In the implementation block
@property (nonatomic,retain) HFItemProvider * existingRoomItemProvider;                                                        //@synthesize existingRoomItemProvider=_existingRoomItemProvider - In the implementation block
@property (nonatomic,retain) HFItemProvider * suggestedRoomItemProvider;                                                       //@synthesize suggestedRoomItemProvider=_suggestedRoomItemProvider - In the implementation block
@property (nonatomic,retain) HOCharacteristicEventOptionProvider * programmableSwitchOptionsProvider;                          //@synthesize programmableSwitchOptionsProvider=_programmableSwitchOptionsProvider - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> sourceServiceItem; 
@property (nonatomic,readonly) char isServiceGroup; 
@property (nonatomic,readonly) char isAccessory; 
@property (nonatomic,readonly) char isCamera; 
@property (nonatomic,readonly) char isBridge; 
@property (nonatomic,retain) HFItem * headerItem;                                                                              //@synthesize headerItem=_headerItem - In the implementation block
@property (nonatomic,retain) HFItem * nameAndIconItem;                                                                         //@synthesize nameAndIconItem=_nameAndIconItem - In the implementation block
@property (nonatomic,retain) HFItem * createNewRoomItem;                                                                       //@synthesize createNewRoomItem=_createNewRoomItem - In the implementation block
@property (nonatomic,retain) HFItem * roomItem;                                                                                //@synthesize roomItem=_roomItem - In the implementation block
@property (nonatomic,retain) HFItem * associatedServiceTypeItem;                                                               //@synthesize associatedServiceTypeItem=_associatedServiceTypeItem - In the implementation block
@property (nonatomic,retain) HFItem * addGroupItem;                                                                            //@synthesize addGroupItem=_addGroupItem - In the implementation block
@property (nonatomic,retain) HFItem * showContainedServicesItem;                                                               //@synthesize showContainedServicesItem=_showContainedServicesItem - In the implementation block
@property (nonatomic,retain) HFItem * favoriteItem;                                                                            //@synthesize favoriteItem=_favoriteItem - In the implementation block
@property (nonatomic,retain) HFItem * statusAndNotificationItem;                                                               //@synthesize statusAndNotificationItem=_statusAndNotificationItem - In the implementation block
@property (nonatomic,retain) HFItem * removeItem;                                                                              //@synthesize removeItem=_removeItem - In the implementation block
@property (nonatomic,retain) HFItem * bridgeItem;                                                                              //@synthesize bridgeItem=_bridgeItem - In the implementation block
@property (nonatomic,readonly) HFItem*<HFItemBuilderItem> builderItem;                                                         //@synthesize builderItem=_builderItem - In the implementation block
@property (nonatomic,readonly) HFItem * selectedRoomItem;                                                                      //@synthesize selectedRoomItem=_selectedRoomItem - In the implementation block
@property (nonatomic,readonly) NSSet * allRoomSectionItems; 
@property (assign,nonatomic) char shouldHideBridgeItem;                                                                        //@synthesize shouldHideBridgeItem=_shouldHideBridgeItem - In the implementation block
@property (assign,nonatomic) char showRoomsList;                                                                               //@synthesize showRoomsList=_showRoomsList - In the implementation block
@property (assign,nonatomic) char showAssociatedServiceTypeList;                                                               //@synthesize showAssociatedServiceTypeList=_showAssociatedServiceTypeList - In the implementation block
@property (nonatomic,readonly) HFItem * selectedAssociatedServiceTypeItem; 
-(void)setActionSetItemProvider:(HFActionSetItemProvider *)arg1 ;
-(HFActionSetItemProvider *)actionSetItemProvider;
-(void)setFirmwareUpdateItemProvider:(HUFirmwareUpdateItemProvider *)arg1 ;
-(HUFirmwareUpdateItemProvider *)firmwareUpdateItemProvider;
-(id)initWithServiceItem:(id)arg1 delegate:(id)arg2 ;
-(void)setNameAndIconItem:(HFItem *)arg1 ;
-(HFItem *)nameAndIconItem;
-(char)isServiceGroup;
-(id)sourceItemAccessory;
-(char)showAssociatedServiceTypeList;
-(HFItem *)selectedAssociatedServiceTypeItem;
-(HFItem *)favoriteItem;
-(char)isCharacteristicStateItem:(id)arg1 ;
-(HFItem *)addGroupItem;
-(HFItem *)createNewRoomItem;
-(char)isRoomItem:(id)arg1 ;
-(NSSet *)allRoomSectionItems;
-(HFItemProvider *)suggestedRoomItemProvider;
-(HFItem *)selectedRoomItem;
-(HFItem *)showContainedServicesItem;
-(HFItem *)statusAndNotificationItem;
-(void)setShowRoomsList:(char)arg1 ;
-(void)setShowAssociatedServiceTypeList:(char)arg1 ;
-(HFItem *)associatedServiceTypeItem;
-(HFItemProvider *)existingRoomItemProvider;
-(char)showRoomsList;
-(id)selectRoom:(id)arg1 ;
-(HFItem *)bridgeItem;
-(id)selectAssociatedServiceType:(id)arg1 ;
-(void)setShouldHideBridgeItem:(char)arg1 ;
-(HFItem*<HFServiceLikeItem>)sourceServiceItem;
-(HFSelectedRoomItemProvider *)selectedRoomItemProvider;
-(HFAssociatedServiceTypeOptionItemProvider *)associatedServiceTypeOptionItemProvider;
-(HFCharacteristicStateItemProvider *)characteristicStateItemProvider;
-(void)setProgrammableSwitchOptionsProvider:(HOCharacteristicEventOptionProvider *)arg1 ;
-(HOCharacteristicEventOptionProvider *)programmableSwitchOptionsProvider;
-(void)setShowContainedServicesItem:(HFItem *)arg1 ;
-(void)setAccessoryInfoProvider:(HFServiceItemProvider *)arg1 ;
-(HFServiceItemProvider *)accessoryInfoProvider;
-(void)setAddGroupItem:(HFItem *)arg1 ;
-(void)setCreateNewRoomItem:(HFItem *)arg1 ;
-(void)setAssociatedServiceTypeOptionItemProvider:(HFAssociatedServiceTypeOptionItemProvider *)arg1 ;
-(void)setSelectedRoomItemProvider:(HFSelectedRoomItemProvider *)arg1 ;
-(void)setExistingRoomItemProvider:(HFItemProvider *)arg1 ;
-(void)setSuggestedRoomItemProvider:(HFItemProvider *)arg1 ;
-(void)setRoomItem:(HFItem *)arg1 ;
-(void)setAssociatedServiceTypeItem:(HFItem *)arg1 ;
-(void)setFavoriteItem:(HFItem *)arg1 ;
-(char)isCamera;
-(void)setBridgeItem:(HFItem *)arg1 ;
-(void)setStatusAndNotificationItem:(HFItem *)arg1 ;
-(void)setControlPanelItemProvider:(HFControlPanelItemProvider *)arg1 ;
-(HFControlPanelItemProvider *)controlPanelItemProvider;
-(id<HOServiceDetailsItemManagerDelegate>)serviceDetailsDelegate;
-(void)setCharacteristicStateItemProvider:(HFCharacteristicStateItemProvider *)arg1 ;
-(char)shouldHideBridgeItem;
-(char)_shouldShowLinkedApplicationSection;
-(id)_createGroupCharacteristicSectionsForItems:(id)arg1 ;
-(id)_createStandaloneCharacteristicSectionsForItems:(id)arg1 ;
-(void)setCharacteristicSections:(NSArray *)arg1 ;
-(id)_createProgrammableSwitchSections:(id)arg1 ;
-(void)setProgrammableSwitchSections:(NSArray *)arg1 ;
-(void)setEventOptionItemServiceUUIDToSectionIdentifierDictionary:(NSDictionary *)arg1 ;
-(id)_characteristicSectionForIdentifier:(id)arg1 ;
-(NSArray *)characteristicSections;
-(NSArray *)programmableSwitchSections;
-(NSDictionary *)eventOptionItemServiceUUIDToSectionIdentifierDictionary;
-(char)_shouldShowFirmwareUpdateSection;
-(HFItem*<HFItemBuilderItem>)builderItem;
-(unsigned)_numberOfSections;
-(char)isBridge;
-(HFItem *)headerItem;
-(void)setHeaderItem:(HFItem *)arg1 ;
-(char)isAccessory;
-(id)_identifierForSection:(unsigned)arg1 ;
-(void)setServiceLikeBuilder:(HFItemBuilder*<HFServiceLikeBuilder>)arg1 ;
-(HFItemBuilder*<HFServiceLikeBuilder>)serviceLikeBuilder;
-(HFItem *)roomItem;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1 ;
-(id)_footerTitleForSectionWithIdentifier:(id)arg1 ;
-(id)_sortedItems:(id)arg1 forSectionIdentifier:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(void)_createItemProvidersWithHome:(id)arg1 ;
-(id)_itemProviders;
-(void)setRemoveItem:(HFItem *)arg1 ;
-(HFItem *)removeItem;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_styleForItem:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)currentSectionIdentifiers;
-(id)_itemsToHideInSet:(id)arg1 ;
-(void)_willUpdateSections;
-(HULinkedApplicationItemProvider *)linkedApplicationItemProvider;
-(void)setLinkedApplicationItemProvider:(HULinkedApplicationItemProvider *)arg1 ;
@end


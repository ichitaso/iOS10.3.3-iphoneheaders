/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFServiceItemProvider, HFServiceGroupItemProvider, HFBridgeItemProvider, HFResidentDeviceStatusDetailsItemProvider, HUFirmwareUpdateItemProvider, HFStaticItemProvider, HFProgrammableSwitchItemProvider, HFNoRemoteAccessStatusDetailsItem, NSArray, NSMutableSet;

@interface HOHomeStatusDetailsItemManager : HFItemManager {

	HFServiceItemProvider* _serviceItemProvider;
	HFServiceGroupItemProvider* _serviceGroupItemProvider;
	HFBridgeItemProvider* _bridgeItemProvider;
	HFResidentDeviceStatusDetailsItemProvider* _residentDeviceStatusItemProvider;
	HUFirmwareUpdateItemProvider* _firmwareUpdateItemProvider;
	HFStaticItemProvider* _staticItemProvider;
	HFProgrammableSwitchItemProvider* _programmableSwitchItemProvider;
	HFNoRemoteAccessStatusDetailsItem* _noRemoteAccessItem;
	NSArray* _cachedSectionIdentifiers;
	NSMutableSet* _minimumPriorityItemTuples;

}

@property (nonatomic,retain) HFServiceItemProvider * serviceItemProvider;                                               //@synthesize serviceItemProvider=_serviceItemProvider - In the implementation block
@property (nonatomic,retain) HFServiceGroupItemProvider * serviceGroupItemProvider;                                     //@synthesize serviceGroupItemProvider=_serviceGroupItemProvider - In the implementation block
@property (nonatomic,retain) HFBridgeItemProvider * bridgeItemProvider;                                                 //@synthesize bridgeItemProvider=_bridgeItemProvider - In the implementation block
@property (nonatomic,retain) HFResidentDeviceStatusDetailsItemProvider * residentDeviceStatusItemProvider;              //@synthesize residentDeviceStatusItemProvider=_residentDeviceStatusItemProvider - In the implementation block
@property (nonatomic,retain) HUFirmwareUpdateItemProvider * firmwareUpdateItemProvider;                                 //@synthesize firmwareUpdateItemProvider=_firmwareUpdateItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;                                                 //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HFProgrammableSwitchItemProvider * programmableSwitchItemProvider;                         //@synthesize programmableSwitchItemProvider=_programmableSwitchItemProvider - In the implementation block
@property (nonatomic,retain) HFNoRemoteAccessStatusDetailsItem * noRemoteAccessItem;                                    //@synthesize noRemoteAccessItem=_noRemoteAccessItem - In the implementation block
@property (nonatomic,retain) NSArray * cachedSectionIdentifiers;                                                        //@synthesize cachedSectionIdentifiers=_cachedSectionIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * minimumPriorityItemTuples;                                                  //@synthesize minimumPriorityItemTuples=_minimumPriorityItemTuples - In the implementation block
+(id)_sectionIdentifierForPriority:(int)arg1 ;
-(void)setServiceItemProvider:(HFServiceItemProvider *)arg1 ;
-(void)setServiceGroupItemProvider:(HFServiceGroupItemProvider *)arg1 ;
-(void)setBridgeItemProvider:(HFBridgeItemProvider *)arg1 ;
-(void)setProgrammableSwitchItemProvider:(HFProgrammableSwitchItemProvider *)arg1 ;
-(HFServiceItemProvider *)serviceItemProvider;
-(HFServiceGroupItemProvider *)serviceGroupItemProvider;
-(HFBridgeItemProvider *)bridgeItemProvider;
-(HFProgrammableSwitchItemProvider *)programmableSwitchItemProvider;
-(HFResidentDeviceStatusDetailsItemProvider *)residentDeviceStatusItemProvider;
-(HFNoRemoteAccessStatusDetailsItem *)noRemoteAccessItem;
-(NSMutableSet *)minimumPriorityItemTuples;
-(void)setMinimumPriorityItemTuples:(NSMutableSet *)arg1 ;
-(int)_effectivePriorityForItem:(id)arg1 ;
-(void)setResidentDeviceStatusItemProvider:(HFResidentDeviceStatusDetailsItemProvider *)arg1 ;
-(void)setFirmwareUpdateItemProvider:(HUFirmwareUpdateItemProvider *)arg1 ;
-(void)setNoRemoteAccessItem:(HFNoRemoteAccessStatusDetailsItem *)arg1 ;
-(HUFirmwareUpdateItemProvider *)firmwareUpdateItemProvider;
-(NSArray *)cachedSectionIdentifiers;
-(char)shouldUseTitleDescriptionStyleForItem:(id)arg1 ;
-(char)_shouldUseSeparateSectionForItem:(id)arg1 ;
-(id)_separateSectionIdentifierForItem:(id)arg1 ;
-(char)_shouldUseLowBatterySectionForItem:(id)arg1 ;
-(char)shouldHideItem:(id)arg1 ;
-(void)setCachedSectionIdentifiers:(NSArray *)arg1 ;
-(id)_minimumPriorityNumberForItem:(id)arg1 ;
-(void)maintainMinimumPriorityForItem:(id)arg1 ;
-(void)resetItemPrioritiesToDefaults;
-(unsigned)_numberOfSections;
-(id)_identifierForSection:(unsigned)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(void)_createItemProvidersWithHome:(id)arg1 ;
-(id)_itemProviders;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)_itemsToHideInSet:(id)arg1 ;
-(void)_willUpdateSections;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFServiceGroupBuilder, HFStaticItem, HFItem, HFStaticItemProvider;

@interface HOServiceGroupEditorItemManager : HFItemManager {

	HFServiceGroupBuilder* _serviceGroupBuilder;
	unsigned _mode;
	HFStaticItem* _nameAndIconItem;
	HFItem* _instructionsItem;
	HFStaticItem* _serviceGridItem;
	HFStaticItemProvider* _staticItemProvider;

}

@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;                  //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItem * nameAndIconItem;                             //@synthesize nameAndIconItem=_nameAndIconItem - In the implementation block
@property (nonatomic,retain) HFItem * instructionsItem;                                  //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * serviceGridItem;                             //@synthesize serviceGridItem=_serviceGridItem - In the implementation block
@property (nonatomic,readonly) HFServiceGroupBuilder * serviceGroupBuilder;              //@synthesize serviceGroupBuilder=_serviceGroupBuilder - In the implementation block
@property (nonatomic,readonly) unsigned mode;                                            //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) int instructionsSectionIndex; 
@property (nonatomic,readonly) int serviceGridSectionIndex; 
-(id)initWithServiceGroupBuilder:(id)arg1 mode:(unsigned)arg2 delegate:(id)arg3 ;
-(HFServiceGroupBuilder *)serviceGroupBuilder;
-(void)setNameAndIconItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)nameAndIconItem;
-(void)setServiceGridItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)serviceGridItem;
-(int)instructionsSectionIndex;
-(int)serviceGridSectionIndex;
-(unsigned)_numberOfSections;
-(unsigned)mode;
-(id)_identifierForSection:(unsigned)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(void)_createItemProvidersWithHome:(id)arg1 ;
-(id)_itemProviders;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(HFItem *)instructionsItem;
-(id)currentSectionIdentifiers;
-(void)setInstructionsItem:(HFItem *)arg1 ;
@end


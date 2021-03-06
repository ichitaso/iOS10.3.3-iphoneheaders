/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFStaticItem, HFStaticItemProvider, HFResidentDeviceItemProvider, HFHomeBuilder;

@interface HOEditLocationItemManager : HFItemManager {

	HFStaticItem* _nameItem;
	HFStaticItem* _usersItem;
	HFStaticItem* _inviteUsersItem;
	HFStaticItem* _cameraItem;
	HFStaticItem* _chooseWallpaperItem;
	HFStaticItem* _wallpaperThumbnailItem;
	HFStaticItem* _detailNotesItem;
	HFStaticItem* _removeItem;
	HFStaticItemProvider* _staticItemProvider;
	HFResidentDeviceItemProvider* _residentDeviceItemProvider;
	HFHomeBuilder* _homeBuilder;

}

@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;                              //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HFResidentDeviceItemProvider * residentDeviceItemProvider;              //@synthesize residentDeviceItemProvider=_residentDeviceItemProvider - In the implementation block
@property (nonatomic,retain) HFHomeBuilder * homeBuilder;                                            //@synthesize homeBuilder=_homeBuilder - In the implementation block
@property (nonatomic,retain) HFStaticItem * nameItem;                                                //@synthesize nameItem=_nameItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * usersItem;                                               //@synthesize usersItem=_usersItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * inviteUsersItem;                                         //@synthesize inviteUsersItem=_inviteUsersItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * cameraItem;                                              //@synthesize cameraItem=_cameraItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * chooseWallpaperItem;                                     //@synthesize chooseWallpaperItem=_chooseWallpaperItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * wallpaperThumbnailItem;                                  //@synthesize wallpaperThumbnailItem=_wallpaperThumbnailItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * detailNotesItem;                                         //@synthesize detailNotesItem=_detailNotesItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * removeItem;                                              //@synthesize removeItem=_removeItem - In the implementation block
-(id)_currentSectionIdentifiers;
-(HFHomeBuilder *)homeBuilder;
-(void)setHomeBuilder:(HFHomeBuilder *)arg1 ;
-(id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2 ;
-(HFStaticItem *)usersItem;
-(HFStaticItem *)inviteUsersItem;
-(HFStaticItem *)detailNotesItem;
-(void)setUsersItem:(HFStaticItem *)arg1 ;
-(void)setInviteUsersItem:(HFStaticItem *)arg1 ;
-(void)setDetailNotesItem:(HFStaticItem *)arg1 ;
-(void)setResidentDeviceItemProvider:(HFResidentDeviceItemProvider *)arg1 ;
-(HFResidentDeviceItemProvider *)residentDeviceItemProvider;
-(unsigned)_numberOfSections;
-(id)_identifierForSection:(unsigned)arg1 ;
-(id)_homeFuture;
-(id)_footerTitleForSectionWithIdentifier:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(void)_createItemProvidersWithHome:(id)arg1 ;
-(id)_itemProviders;
-(void)setNameItem:(HFStaticItem *)arg1 ;
-(void)setCameraItem:(HFStaticItem *)arg1 ;
-(void)setChooseWallpaperItem:(HFStaticItem *)arg1 ;
-(void)setWallpaperThumbnailItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)nameItem;
-(HFStaticItem *)cameraItem;
-(HFStaticItem *)chooseWallpaperItem;
-(HFStaticItem *)wallpaperThumbnailItem;
-(void)setRemoveItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)removeItem;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)_itemsToHideInSet:(id)arg1 ;
@end


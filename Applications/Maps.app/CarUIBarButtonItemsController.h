/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CarUIBarButtonItemsControllerDelegate;
@class NSArray, UIBarButtonItem, CarUserTrackingButton;

@interface CarUIBarButtonItemsController : NSObject {

	char _useNavigationAppropriateTitleForDoneButton;
	id<CarUIBarButtonItemsControllerDelegate> _delegate;
	int _overviewButtonItemState;
	NSArray* _primaryUIBarButtonItems;
	NSArray* _primaryUIBarButtonFocusIdentifiers;
	UIBarButtonItem* _userTrackingButtonItem;
	UIBarButtonItem* _toggle3DButtonItem;
	UIBarButtonItem* _volumeControlButtonItem;
	UIBarButtonItem* _searchButtonItem;
	CarUserTrackingButton* _trackingButton;
	UIBarButtonItem* _destinationsButtonItem;
	UIBarButtonItem* _backMapButtonItem;
	UIBarButtonItem* _endButtonItem;
	UIBarButtonItem* _toggleOverviewButtonItem;
	UIBarButtonItem* _doneButtonItem;

}

@property (nonatomic,retain) NSArray * primaryUIBarButtonItems;                              //@synthesize primaryUIBarButtonItems=_primaryUIBarButtonItems - In the implementation block
@property (nonatomic,retain) NSArray * primaryUIBarButtonFocusIdentifiers;                   //@synthesize primaryUIBarButtonFocusIdentifiers=_primaryUIBarButtonFocusIdentifiers - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * userTrackingButtonItem;                       //@synthesize userTrackingButtonItem=_userTrackingButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * toggle3DButtonItem;                           //@synthesize toggle3DButtonItem=_toggle3DButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * volumeControlButtonItem;                      //@synthesize volumeControlButtonItem=_volumeControlButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * searchButtonItem;                             //@synthesize searchButtonItem=_searchButtonItem - In the implementation block
@property (nonatomic,retain) CarUserTrackingButton * trackingButton;                         //@synthesize trackingButton=_trackingButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * destinationsButtonItem;                       //@synthesize destinationsButtonItem=_destinationsButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backMapButtonItem;                            //@synthesize backMapButtonItem=_backMapButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * endButtonItem;                                //@synthesize endButtonItem=_endButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * toggleOverviewButtonItem;                     //@synthesize toggleOverviewButtonItem=_toggleOverviewButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButtonItem;                               //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
@property (__weak,readonly) id<CarUIBarButtonItemsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int overviewButtonItemState;                                    //@synthesize overviewButtonItemState=_overviewButtonItemState - In the implementation block
@property (assign,nonatomic) char useNavigationAppropriateTitleForDoneButton;                //@synthesize useNavigationAppropriateTitleForDoneButton=_useNavigationAppropriateTitleForDoneButton - In the implementation block
+(id)doneButtonFocusIdentifier;
+(id)toggleOverviewButtonFocusIdentifier;
+(id)endButtonFocusIdentifier;
+(id)backMapButtonFocusIdentifier;
+(id)destinationsButtonFocusIdentifier;
+(id)searchButtonFocusIdentifier;
+(id)volumeControlButtonFocusIdentifier;
+(id)toggle3DButtonFocusIdentifier;
+(id)userTrackingButtonFocusIdentifier;
+(id)largeSpacer;
+(id)smallSpacer;
+(void)_setupSpacers;
-(id)identifierForFocusItem:(id)arg1 ;
-(id)focusItemForIdentifier:(id)arg1 ;
-(CarUserTrackingButton *)trackingButton;
-(char)showButtonItemWithSelector:(SEL)arg1 ;
-(NSArray *)primaryUIBarButtonItems;
-(NSArray *)primaryUIBarButtonFocusIdentifiers;
-(void)resetPrimaryUIBarButtonItems;
-(void)unhookTrackingController;
-(void)hookTrackingController;
-(void)update3DButtonAnimated:(char)arg1 ;
-(void)updateVolumeControlButtonAnimated:(char)arg1 ;
-(UIBarButtonItem *)toggle3DButtonItem;
-(UIBarButtonItem *)userTrackingButtonItem;
-(UIBarButtonItem *)volumeControlButtonItem;
-(UIBarButtonItem *)destinationsButtonItem;
-(void)_destinationsButtonItemPressed;
-(UIBarButtonItem *)backMapButtonItem;
-(UIBarButtonItem *)endButtonItem;
-(UIBarButtonItem *)toggleOverviewButtonItem;
-(void)setOverviewButtonItemState:(int)arg1 ;
-(void)setOverviewButtonItemState:(int)arg1 animated:(char)arg2 ;
-(int)overviewButtonItemState;
-(char)useNavigationAppropriateTitleForDoneButton;
-(void)setUseNavigationAppropriateTitleForDoneButton:(char)arg1 ;
-(void)setPrimaryUIBarButtonItems:(NSArray *)arg1 ;
-(void)setPrimaryUIBarButtonFocusIdentifiers:(NSArray *)arg1 ;
-(void)setUserTrackingButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setToggle3DButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setVolumeControlButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setSearchButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setTrackingButton:(CarUserTrackingButton *)arg1 ;
-(void)setDestinationsButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setBackMapButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setEndButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setToggleOverviewButtonItem:(UIBarButtonItem *)arg1 ;
-(id<CarUIBarButtonItemsControllerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(UIBarButtonItem *)searchButtonItem;
-(UIBarButtonItem *)doneButtonItem;
-(void)setDoneButtonItem:(UIBarButtonItem *)arg1 ;
@end


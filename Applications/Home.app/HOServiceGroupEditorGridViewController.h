/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUSelectableServiceGridViewController.h>

@protocol HOServiceGroupEditorGridViewControllerDelegate;
@class HFServiceGroupBuilder, HOServiceGroupEditorGridItemManager;

@interface HOServiceGroupEditorGridViewController : HUSelectableServiceGridViewController {

	HFServiceGroupBuilder* _serviceGroupBuilder;
	id<HOServiceGroupEditorGridViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) HOServiceGroupEditorGridItemManager * itemManager; 
@property (nonatomic,readonly) HFServiceGroupBuilder * serviceGroupBuilder;                                   //@synthesize serviceGroupBuilder=_serviceGroupBuilder - In the implementation block
@property (assign,nonatomic,__weak) id<HOServiceGroupEditorGridViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(HFServiceGroupBuilder *)serviceGroupBuilder;
-(id)initWithServiceGroupBuilder:(id)arg1 ;
-(id)_serviceVendorItemForItem:(id)arg1 ;
-(void)setDelegate:(id<HOServiceGroupEditorGridViewControllerDelegate>)arg1 ;
-(id<HOServiceGroupEditorGridViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(char)itemManager:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 ;
-(id)layoutOptionsForSection:(int)arg1 ;
-(id)initWithServiceGridItemManager:(id)arg1 ;
-(void)didSelectItem:(id)arg1 ;
-(void)didDeselectItem:(id)arg1 ;
@end


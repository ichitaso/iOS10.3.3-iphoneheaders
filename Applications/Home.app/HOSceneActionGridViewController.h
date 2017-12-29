/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <HomeUI/HUServiceGridViewController.h>
#import <Home/HFActionSetValueSourceDelegate.h>
#import <Home/HOServiceActionControlsViewControllerDelegate.h>
#import <libobjc.A.dylib/HUServiceGridItemManagerDelegate.h>
#import <Home/HOContainedServiceGridViewControllerDelegate.h>

@class HFActionSetBuilder, HOContainedServicesGridViewController, NSString;

@interface HOSceneActionGridViewController : HUServiceGridViewController <HFActionSetValueSourceDelegate, HOServiceActionControlsViewControllerDelegate, HUServiceGridItemManagerDelegate, HOContainedServiceGridViewControllerDelegate> {

	HFActionSetBuilder* _actionSetBuilder;
	HOContainedServicesGridViewController* _presentedServiceGroupDetailsViewController;

}

@property (assign,nonatomic,__weak) HOContainedServicesGridViewController * presentedServiceGroupDetailsViewController;              //@synthesize presentedServiceGroupDetailsViewController=_presentedServiceGroupDetailsViewController - In the implementation block
@property (nonatomic,readonly) HFActionSetBuilder * actionSetBuilder;                                                                //@synthesize actionSetBuilder=_actionSetBuilder - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HOContainedServicesGridViewController *)presentedServiceGroupDetailsViewController;
-(void)setPresentedServiceGroupDetailsViewController:(HOContainedServicesGridViewController *)arg1 ;
-(void)_removeActionsInServiceActionItem:(id)arg1 ;
-(void)serviceActionControlsViewController:(id)arg1 removeServiceActionItem:(id)arg2 ;
-(char)hasDetailsActionForContainedServiceGridViewController:(id)arg1 item:(id)arg2 ;
-(id)detailsViewControllerForContainedServiceGridViewController:(id)arg1 item:(id)arg2 ;
-(void)viewDidLoad;
-(HFActionSetBuilder *)actionSetBuilder;
-(void)actionSetValueSource:(id)arg1 didUpdateValuesForActionBuilders:(id)arg2 ;
-(id)initWithActionSetBuilder:(id)arg1 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(char)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(char)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 ;
-(id)layoutOptionsForSection:(int)arg1 ;
@end


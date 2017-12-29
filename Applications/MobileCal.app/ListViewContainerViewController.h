/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MainViewControllerContainer.h>

@class CompactListViewController, MultiColumnMonthViewController;

@interface ListViewContainerViewController : MainViewControllerContainer {

	CompactListViewController* _compactController;
	MultiColumnMonthViewController* _regularController;

}

@property (nonatomic,retain) CompactListViewController * compactController;                   //@synthesize compactController=_compactController - In the implementation block
@property (nonatomic,retain) MultiColumnMonthViewController * regularController;              //@synthesize regularController=_regularController - In the implementation block
-(id)childViewControllerForCompactWidthRegularHeight;
-(id)childViewControllerForUnknownTraits;
-(id)childViewControllerForRegularWidthRegularHeight;
-(Class)childViewControllerClassForTraits:(id)arg1 ;
-(char)childViewControllerNeedsToBeInsettedFromNavigationElements;
-(MultiColumnMonthViewController *)regularController;
-(void)setRegularController:(MultiColumnMonthViewController *)arg1 ;
-(char)shouldRemoveSelfFromNavigationStackIfTraitCollectionIsUnsupported;
-(id)childViewControllerForCompactWidthCompactHeight;
-(CompactListViewController *)compactController;
-(void)setCompactController:(CompactListViewController *)arg1 ;
-(id)currentChildViewController;
@end

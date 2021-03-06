/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPReportViewController.h>
#import <Maps/TransitDirectionsListViewControllerDelegate.h>
#import <Maps/DirectionsStepsTableViewControllerDelegate.h>
#import <Maps/RAPDirectionsStepsTableViewControllerDelegate.h>
#import <libobjc.A.dylib/GEOLogContextDelegate.h>
#import <Maps/RAPInstrumentableTarget.h>

@class RAPDirectionInstructionsIncorrectQuestion, RAPTransitDirectionsListViewController, RAPDirectionsStepsTableViewController, RAPTablePart, NSString;

@interface RAPReportComposerDirectionInstructionsIncorrectViewController : RAPReportViewController <TransitDirectionsListViewControllerDelegate, DirectionsStepsTableViewControllerDelegate, RAPDirectionsStepsTableViewControllerDelegate, GEOLogContextDelegate, RAPInstrumentableTarget> {

	RAPDirectionInstructionsIncorrectQuestion* _question;
	RAPTransitDirectionsListViewController* _transitDirectionsListViewController;
	RAPDirectionsStepsTableViewController* _driveOrWalkDirectionsListViewController;
	RAPTablePart* _instructionsRequestsPart;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int analyticTarget; 
@property (nonatomic,readonly) int backAction; 
-(int)analyticTarget;
-(id)initWithReport:(id)arg1 question:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)directionsStepsTableViewController:(id)arg1 didTapRowForRouteStep:(id)arg2 ;
-(void)transitDirectionsListViewController:(id)arg1 didTapRowForItem:(id)arg2 ;
-(void)transitDirectionsListViewController:(id)arg1 didTapClusteredVehiclesCell:(id)arg2 ;
-(void)transitDirectionsListViewController:(id)arg1 didTapIncidentsCell:(id)arg2 withIncidents:(id)arg3 ;
-(char)viewController:(id)arg1 shouldShowFlagForStep:(id)arg2 listItem:(id)arg3 ;
-(void)setupInstructionview;
-(void)presentDetailViewControllerForQuestion:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(int)currentUITargetForAnalytics;
-(int)currentMapViewTargetForAnalytics;
-(id)tableViewHeaderView;
@end


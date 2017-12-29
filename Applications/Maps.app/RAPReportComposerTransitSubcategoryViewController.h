/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPReportTableViewController.h>
#import <Maps/RAPRouter.h>
#import <Maps/RAPInstrumentableTarget.h>

@class RAPTransitSubcategoryQuestion, RAPTablePart, RAPTransitStationInfoController, NSString;

@interface RAPReportComposerTransitSubcategoryViewController : RAPReportTableViewController <RAPRouter, RAPInstrumentableTarget> {

	RAPTransitSubcategoryQuestion* _question;
	RAPTablePart* _subcategoriesPart;
	RAPTransitStationInfoController* _placeCorrectionController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int analyticTarget; 
@property (nonatomic,readonly) int backAction; 
-(int)analyticTarget;
-(id)tableParts;
-(id)initWithReport:(id)arg1 question:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)proceedToNextQuestion:(id)arg1 ;
-(void)proceedToLinePickerQuestion:(id)arg1 ;
-(void)proceedToProblemWithDirectionsQuestion:(id)arg1 ;
-(void)proceedToTransitLinePickerWithQuestion:(id)arg1 ;
-(void)proceedToLinePickerQuestion:(id)arg1 withSelectedTransitLineMarkers:(id)arg2 ;
-(void)proceedToTransitStationInfoQuestion:(id)arg1 ;
-(void)proceedToProblemNotListedQuestion:(id)arg1 ;
@end


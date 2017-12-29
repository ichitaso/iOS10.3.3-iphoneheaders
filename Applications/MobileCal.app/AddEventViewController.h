/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <MobileCal/ImmunityFromCustomAdaptationOfPresentedViewControllersAcrossSizeClasses.h>

@class EKEventEditViewController, CalendarModel, UINavigationController, EKEvent, EKCalendarDate, NSString;

@interface AddEventViewController : UIViewController <EKEventEditViewDelegate, ImmunityFromCustomAdaptationOfPresentedViewControllersAcrossSizeClasses> {

	EKEventEditViewController* _eventEditViewController;
	char _showEventWhenAdded;
	/*^block*/id _doneBlock;
	CalendarModel* _model;
	UINavigationController* _embeddedNavigationController;
	EKEvent* _event;
	EKCalendarDate* _eventStartDate;

}

@property (nonatomic,retain) CalendarModel * model;                                              //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UINavigationController * embeddedNavigationController;              //@synthesize embeddedNavigationController=_embeddedNavigationController - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                                    //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) EKCalendarDate * eventStartDate;                                    //@synthesize eventStartDate=_eventStartDate - In the implementation block
@property (assign,nonatomic) char showEventWhenAdded;                                            //@synthesize showEventWhenAdded=_showEventWhenAdded - In the implementation block
@property (nonatomic,copy) id doneBlock;                                                         //@synthesize doneBlock=_doneBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)doneBlock;
-(void)setDoneBlock:(id)arg1 ;
-(char)isImmuneToCustomAdaptation;
-(id)initWithModel:(id)arg1 eventStartDate:(id)arg2 ;
-(void)setShowEventWhenAdded:(char)arg1 ;
-(UINavigationController *)embeddedNavigationController;
-(void)setEmbeddedNavigationController:(UINavigationController *)arg1 ;
-(char)showEventWhenAdded;
-(id)_eventEditViewControllerForTestingOnly;
-(id)backgroundColor;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(CalendarModel *)model;
-(char)prefersForcedModalShowViewController;
-(void)setModel:(CalendarModel *)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)setEventStartDate:(EKCalendarDate *)arg1 ;
-(EKCalendarDate *)eventStartDate;
@end


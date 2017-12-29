/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class RAPFixedProblemViewController;

@interface RAPFixedProblemNavigationController : UINavigationController {

	/*^block*/id doneHandler;
	RAPFixedProblemViewController* _fixedProblemViewController;
	/*^block*/id _doneHandler;

}

@property (nonatomic,retain) RAPFixedProblemViewController * fixedProblemViewController;              //@synthesize fixedProblemViewController=_fixedProblemViewController - In the implementation block
@property (nonatomic,copy) id doneHandler;                                                            //@synthesize doneHandler=_doneHandler - In the implementation block
+(id)fixedProblemNavigationControllerWithProblemStatusResponse:(id)arg1 ;
-(RAPFixedProblemViewController *)fixedProblemViewController;
-(void)setFixedProblemViewController:(RAPFixedProblemViewController *)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)setDoneHandler:(id)arg1 ;
-(id)doneHandler;
-(void)handleDone:(id)arg1 ;
@end


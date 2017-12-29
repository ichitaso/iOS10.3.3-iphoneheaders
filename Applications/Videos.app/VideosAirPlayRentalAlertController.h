/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@protocol VideosAirPlayRentalAlertControllerDelegate;
@interface VideosAirPlayRentalAlertController : UIAlertController {

	id<VideosAirPlayRentalAlertControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VideosAirPlayRentalAlertControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)blockingAirPlayViewControllerForRental:(id)arg1 ;
-(void)setDelegate:(id<VideosAirPlayRentalAlertControllerDelegate>)arg1 ;
-(id<VideosAirPlayRentalAlertControllerDelegate>)delegate;
@end


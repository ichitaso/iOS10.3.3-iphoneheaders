/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class MKMapView, UILabel;

@interface NoNetworkViewController : UIViewController {

	MKMapView* _mapView;
	UILabel* _messageLabel;

}

@property (nonatomic,retain) MKMapView * mapView;                 //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;              //@synthesize messageLabel=_messageLabel - In the implementation block
-(void)viewDidLoad;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
@end


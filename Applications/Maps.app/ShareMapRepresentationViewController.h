/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol ShareItemSource;
@class MKMapView;

@interface ShareMapRepresentationViewController : UIViewController {

	MKMapView* _mapView;
	id<ShareItemSource> _shareItem;

}

@property (nonatomic,readonly) id<ShareItemSource> shareItem;              //@synthesize shareItem=_shareItem - In the implementation block
-(id<ShareItemSource>)shareItem;
-(int)preferredStatusBarStyle;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithShareItem:(id)arg1 ;
-(void)_updateMapRegion;
@end


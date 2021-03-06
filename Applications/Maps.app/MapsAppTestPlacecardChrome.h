/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MapsAppTest.h>

@protocol MapsAppTestPlacecardChromeDelegate;
@class SearchInfo, _MKPlaceViewController;

@interface MapsAppTestPlacecardChrome : MapsAppTest {

	SearchInfo* _searchInfo;
	id<MapsAppTestPlacecardChromeDelegate> _placecardChromeDelegate;
	_MKPlaceViewController* _placeViewController;

}

@property (assign,nonatomic,__weak) _MKPlaceViewController * placeViewController;                                //@synthesize placeViewController=_placeViewController - In the implementation block
@property (assign,nonatomic,__weak) id<MapsAppTestPlacecardChromeDelegate> placecardChromeDelegate;              //@synthesize placecardChromeDelegate=_placecardChromeDelegate - In the implementation block
-(char)runTest;
-(void)startPlacecardTest;
-(id<MapsAppTestPlacecardChromeDelegate>)placecardChromeDelegate;
-(void)setPlacecardChromeDelegate:(id<MapsAppTestPlacecardChromeDelegate>)arg1 ;
-(_MKPlaceViewController *)placeViewController;
-(void)setPlaceViewController:(_MKPlaceViewController *)arg1 ;
-(void)cleanup:(char)arg1 ;
@end


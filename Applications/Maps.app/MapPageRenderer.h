/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIPrintPageRenderer.h>
#import <Maps/SnapshotResponderProtocol.h>

@class NSString, MKMapView, UIColor, MKMapSnapshot, MKMapSnapshotter, UIImage;

@interface MapPageRenderer : UIPrintPageRenderer <SnapshotResponderProtocol> {

	NSString* _title;
	NSString* _subTitle;
	int _topContentIconType;
	MKMapView* _mapView;
	UIColor* _blueTextColor;
	UIColor* _calloutTextColor;
	char _hasSnapshot;
	MKMapSnapshot* _snapshot;
	MKMapSnapshotter* _snapshotter;
	float _zoomLevel;
	CLLocationCoordinate2D _centerCoordinate;

}

@property (nonatomic,retain) UIColor * blueTextColor;                 //@synthesize blueTextColor=_blueTextColor - In the implementation block
@property (nonatomic,retain) UIColor * calloutTextColor;              //@synthesize calloutTextColor=_calloutTextColor - In the implementation block
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subTitle;                     //@synthesize subTitle=_subTitle - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                     //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,readonly) UIImage * snapshotImage; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasSnapshot;                      //@synthesize hasSnapshot=_hasSnapshot - In the implementation block
-(CGRect)overviewRect;
-(void)drawTopContentInRect:(CGRect)arg1 forPageAtIndex:(int)arg2 ;
-(/*^block*/id)snapshotBlock;
-(void)releaseSnapshotCreator;
-(char)hasSnapshot;
-(void)drawOverview;
-(UIColor *)blueTextColor;
-(void)setBlueTextColor:(UIColor *)arg1 ;
-(UIColor *)calloutTextColor;
-(void)setCalloutTextColor:(UIColor *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(int)numberOfPages;
-(SCD_Struct_RA12)visibleMapRect;
-(NSString *)subTitle;
-(void)setSubTitle:(NSString *)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(UIImage *)snapshotImage;
@end


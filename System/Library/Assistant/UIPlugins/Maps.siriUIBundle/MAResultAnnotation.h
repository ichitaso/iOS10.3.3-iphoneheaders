/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, SALocalSearchMapItem;

@interface MAResultAnnotation : NSObject <MKAnnotation> {

	SALocalSearchMapItem* _mapItem;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,retain) SALocalSearchMapItem * mapItem;                   //@synthesize mapItem=_mapItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(id)_abbreviatedAddress;
-(NSString *)title;
-(NSString *)subtitle;
-(id)initWithMapItem:(id)arg1 ;
-(SALocalSearchMapItem *)mapItem;
-(void)setMapItem:(SALocalSearchMapItem *)arg1 ;
-(CLLocationCoordinate2D)coordinate;
@end


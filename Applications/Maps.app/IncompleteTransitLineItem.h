/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitLineItem.h>

@protocol GEOTransitLine, GEOTransitSystem;
@class NSArray, GEOMapRegion, VKLabelMarker, NSString;

@interface IncompleteTransitLineItem : NSObject <GEOTransitLineItem> {

	VKLabelMarker* _labelMarker;
	unsigned long long _muid;
	NSString* _name;
	id<GEOTransitLine> _line;
	id<GEOTransitSystem> _system;

}

@property (nonatomic,readonly) VKLabelMarker * labelMarker; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) id<GEOTransitSystem> system; 
@property (nonatomic,readonly) unsigned departureTimeDisplayStyle; 
@property (nonatomic,readonly) char departuresAreVehicleSpecific; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> modeArtwork; 
@property (nonatomic,readonly) char hasLineColorString; 
@property (nonatomic,readonly) NSString * lineColorString; 
@property (nonatomic,readonly) char showVehicleNumber; 
@property (nonatomic,readonly) NSArray * operatingHours; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) id<GEOTransitAttribution> attribution; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) char isIncidentsTTLExpired; 
@property (nonatomic,readonly) char hasIncidentComponent; 
@property (nonatomic,readonly) char hasEncyclopedicInfo; 
@property (nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
-(id)initWithLabelMarker:(id)arg1 system:(id)arg2 ;
-(id)initWithMUID:(unsigned long long)arg1 name:(id)arg2 ;
-(id)initWithTransitLine:(id)arg1 ;
-(VKLabelMarker *)labelMarker;
-(NSString *)name;
-(id<GEOTransitSystem>)system;
-(GEOMapRegion *)mapRegion;
-(unsigned long long)muid;
-(NSArray *)operatingHours;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id<GEOTransitArtworkDataSource>)modeArtwork;
-(NSArray *)labelItems;
-(NSArray *)incidents;
-(id<GEOTransitAttribution>)attribution;
-(char)showVehicleNumber;
-(unsigned)departureTimeDisplayStyle;
-(char)departuresAreVehicleSpecific;
-(char)hasLineColorString;
-(NSString *)lineColorString;
-(char)isIncidentsTTLExpired;
-(char)hasIncidentComponent;
-(char)hasEncyclopedicInfo;
-(id<GEOEncyclopedicInfo>)encyclopedicInfo;
-(id)initWithLabelMarker:(id)arg1 ;
@end


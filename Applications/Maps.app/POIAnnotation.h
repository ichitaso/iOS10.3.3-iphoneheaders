/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/MKCustomFeatureAnnotation.h>
#import <Maps/CustomPOIAnnotation.h>

@class VKCustomFeature, NSString, GEOFeatureStyleAttributes, PersonalizedCompoundItem, NSSet;

@interface POIAnnotation : NSObject <MKCustomFeatureAnnotation, CustomPOIAnnotation> {

	CLLocationCoordinate2D _coordinate;
	VKCustomFeature* _customFeature;
	char _featureGivenToVectorKit;
	NSString* _text;
	NSString* _textLocale;
	NSString* _subtext;
	NSString* _subtextLocale;
	GEOFeatureStyleAttributes* _styleAttributes;
	char _showsBalloonCallout;
	char _isLabelPOI;
	PersonalizedCompoundItem* _compoundItem;
	unsigned _presentationAttributesHash;

}

@property (nonatomic,readonly) NSSet * keys; 
@property (nonatomic,readonly) PersonalizedCompoundItem * compoundItem;              //@synthesize compoundItem=_compoundItem - In the implementation block
@property (nonatomic,readonly) unsigned presentationAttributesHash;                  //@synthesize presentationAttributesHash=_presentationAttributesHash - In the implementation block
@property (nonatomic,readonly) NSString * title;                                     //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                  //@synthesize subtext=_subtext - In the implementation block
@property (nonatomic,readonly) char isLabelPOI;                                      //@synthesize isLabelPOI=_isLabelPOI - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;                      //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double course; 
@property (nonatomic,readonly) char showsBalloonCallout;                             //@synthesize showsBalloonCallout=_showsBalloonCallout - In the implementation block
-(id)parkedCar;
-(id)personalizedItem;
-(char)isLabelPOI;
-(id)initWithItem:(id)arg1 defaultLocale:(id)arg2 ;
-(void)resetSearchResultStyleAttribute;
-(PersonalizedCompoundItem *)compoundItem;
-(unsigned)presentationAttributesHash;
-(char)isEqual:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(NSSet *)keys;
-(id)searchResult;
-(id)styleAttributes;
-(id)feature;
-(char)showsBalloonCallout;
-(id)mapItem;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(id)address;
-(id)debugDictionary;
@end


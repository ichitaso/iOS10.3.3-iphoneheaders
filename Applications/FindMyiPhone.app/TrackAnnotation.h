/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyiPhone/FindMyiPhone-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSDate, FMIPCircle, FMIPDevice, NSString, CLLocation;

@interface TrackAnnotation : NSObject <NSCoding, NSCopying, MKAnnotation> {

	char _isFinalAnnotation;
	NSDate* _timestamp;
	FMIPCircle* _overlay;
	FMIPDevice* _owningDevice;
	NSString* _cachedHashString;
	NSString* _title;
	NSString* _subtitle;
	double _horizontalAccuracy;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double horizontalAccuracy;                      //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * cachedHashString;                      //@synthesize cachedHashString=_cachedHashString - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * hashString; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,retain) FMIPCircle * overlay;                           //@synthesize overlay=_overlay - In the implementation block
@property (assign,nonatomic) char isFinalAnnotation;                         //@synthesize isFinalAnnotation=_isFinalAnnotation - In the implementation block
@property (assign,nonatomic,__weak) FMIPDevice * owningDevice;               //@synthesize owningDevice=_owningDevice - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refreshTitles;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 horizontalAccuracy:(double)arg2 timestamp:(id)arg3 ;
-(void)setIsFinalAnnotation:(char)arg1 ;
-(double)distanceFromAnnotation:(id)arg1 ;
-(char)isFinalAnnotation;
-(id)sharedRelativeDateFormatter;
-(void)setCachedHashString:(NSString *)arg1 ;
-(NSString *)cachedHashString;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSDate *)timestamp;
-(NSString *)title;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FMIPCircle *)overlay;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(CLLocation *)location;
-(NSString *)hashString;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(id)sharedDateFormatter;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(double)horizontalAccuracy;
-(void)setOverlay:(FMIPCircle *)arg1 ;
-(FMIPDevice *)owningDevice;
-(void)setOwningDevice:(FMIPDevice *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/PersonalizedItemKey.h>

@interface DroppedPinMapItemKey : NSObject <PersonalizedItemKey> {

	CLLocationCoordinate2D _coordinate;
	unsigned _hash;

}

@property (readonly) unsigned hash; 
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iap2d/iAP2IdentificationParameter.h>

@class NSNumber, NSString;

@interface iAP2NavigationDisplayComponent : iAP2IdentificationParameter {

	BOOL _isEnabled;
	NSNumber* _identifier;
	NSString* _name;
	NSNumber* _maxCurrentRoadNameLength;
	NSNumber* _maxDestinationRoadNameLength;
	NSNumber* _maxPostManeuverRoadNameLength;
	NSNumber* _maxManeuverDescriptionLength;
	NSNumber* _maxGuidanceManeuverStorageCapacity;

}

@property (retain) NSNumber * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (assign) BOOL isEnabled;                                             //@synthesize isEnabled=_isEnabled - In the implementation block
@property (retain) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (retain) NSNumber * maxCurrentRoadNameLength;                        //@synthesize maxCurrentRoadNameLength=_maxCurrentRoadNameLength - In the implementation block
@property (retain) NSNumber * maxDestinationRoadNameLength;                    //@synthesize maxDestinationRoadNameLength=_maxDestinationRoadNameLength - In the implementation block
@property (retain) NSNumber * maxPostManeuverRoadNameLength;                   //@synthesize maxPostManeuverRoadNameLength=_maxPostManeuverRoadNameLength - In the implementation block
@property (retain) NSNumber * maxManeuverDescriptionLength;                    //@synthesize maxManeuverDescriptionLength=_maxManeuverDescriptionLength - In the implementation block
@property (retain) NSNumber * maxGuidanceManeuverStorageCapacity;              //@synthesize maxGuidanceManeuverStorageCapacity=_maxGuidanceManeuverStorageCapacity - In the implementation block
-(NSNumber *)maxCurrentRoadNameLength;
-(NSNumber *)maxDestinationRoadNameLength;
-(NSNumber *)maxPostManeuverRoadNameLength;
-(NSNumber *)maxManeuverDescriptionLength;
-(NSNumber *)maxGuidanceManeuverStorageCapacity;
-(id)xpc_representation;
-(void)setMaxCurrentRoadNameLength:(NSNumber *)arg1 ;
-(void)setMaxDestinationRoadNameLength:(NSNumber *)arg1 ;
-(void)setMaxPostManeuverRoadNameLength:(NSNumber *)arg1 ;
-(void)setMaxManeuverDescriptionLength:(NSNumber *)arg1 ;
-(void)setMaxGuidanceManeuverStorageCapacity:(NSNumber *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSNumber *)identifier;
-(BOOL)isEnabled;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
@end

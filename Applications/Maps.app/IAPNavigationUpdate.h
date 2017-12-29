/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IAPNavigationAccessoryComponent, NSDictionary, NSNumber;

@interface IAPNavigationUpdate : NSObject {

	NSString* _debugProperties;
	IAPNavigationAccessoryComponent* _component;

}

@property (copy) NSDictionary * iapFormat; 
@property (readonly) NSString * logFormat; 
@property (readonly) NSString * debugProperties;                                        //@synthesize debugProperties=_debugProperties - In the implementation block
@property (nonatomic,retain) IAPNavigationAccessoryComponent * component;               //@synthesize component=_component - In the implementation block
@property (readonly) NSNumber * navigationRouteGuidanceDisplayComponentID; 
+(id)_enumProperties;
+(id)_integersKeyed;
+(void)getStringValue:(id*)arg1 displayUnits:(unsigned short*)arg2 forRemainingDistance:(double)arg3 ;
+(unsigned short)_IAPNavStateForGEONavigationState:(int)arg1 ;
+(unsigned short)_IAPNavManeuverTypeForGEOManeuverType:(int)arg1 ;
+(unsigned short)_IAPNavManeuverStateForGEONavigationAnnouncementStage:(unsigned)arg1 ;
-(void)resetProperties;
-(NSDictionary *)iapFormat;
-(void)setIapFormat:(NSDictionary *)arg1 ;
-(NSString *)logFormat;
-(NSNumber *)navigationRouteGuidanceDisplayComponentID;
-(char)_propertyIsEnum:(id)arg1 ;
-(id)_debugDescriptionForProperty:(id)arg1 withValue:(id)arg2 ;
-(NSString *)debugProperties;
-(id)debugDescription;
-(IAPNavigationAccessoryComponent *)component;
-(void)setComponent:(IAPNavigationAccessoryComponent *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DrivePreferences : NSObject {

	char _avoidTolls;
	char _avoidHighways;

}

@property (nonatomic,readonly) char avoidTolls;                 //@synthesize avoidTolls=_avoidTolls - In the implementation block
@property (nonatomic,readonly) char avoidHighways;              //@synthesize avoidHighways=_avoidHighways - In the implementation block
+(id)userDefaultDrivePreferences;
-(id)initWithAvoidTolls:(char)arg1 avoidHighways:(char)arg2 ;
-(char)isEqualToDrivePreferences:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(char)avoidTolls;
-(char)avoidHighways;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface LaunchAlertsManager : NSObject {

	unsigned _currentAlertNumber;
	NSMutableArray* _alertsArray;

}
+(id)sharedManager;
-(void)displayAlertsIfNecessary;
-(void)cancelAlertIfNecessary:(int)arg1 ;
-(void)_executeFirstAlert;
-(void)_executeNextAlert:(id)arg1 ;
-(id)_getAlertObjectOfType:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addAlert:(int)arg1 ;
@end


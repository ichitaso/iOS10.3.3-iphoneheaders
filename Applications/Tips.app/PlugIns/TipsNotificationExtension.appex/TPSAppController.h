/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/PlugIns/TipsNotificationExtension.appex/TipsNotificationExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUserDefaults, NSMutableArray;

@interface TPSAppController : NSObject {

	char _shouldAggregatedLogs;
	NSString* _model;
	unsigned _supportedInterfaceOrientations;
	char _displayTipTitleUnderAppIcon;
	char _introShown;
	char _appInBackground;
	char _phoneUI;
	float _displayMultiplier;
	int _deviceSize;
	int _deviceSpeed;
	NSUserDefaults* _appGroupDefaults;
	NSMutableArray* _viewedTipIdentifiers;

}

@property (nonatomic,retain) NSUserDefaults * appGroupDefaults;                  //@synthesize appGroupDefaults=_appGroupDefaults - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewedTipIdentifiers;              //@synthesize viewedTipIdentifiers=_viewedTipIdentifiers - In the implementation block
@property (assign,nonatomic) char displayTipTitleUnderAppIcon;                   //@synthesize displayTipTitleUnderAppIcon=_displayTipTitleUnderAppIcon - In the implementation block
@property (assign,nonatomic) char introShown;                                    //@synthesize introShown=_introShown - In the implementation block
@property (assign,nonatomic) char appInBackground;                               //@synthesize appInBackground=_appInBackground - In the implementation block
@property (getter=isPhoneUI,nonatomic,readonly) char phoneUI;                    //@synthesize phoneUI=_phoneUI - In the implementation block
@property (nonatomic,readonly) float displayMultiplier;                          //@synthesize displayMultiplier=_displayMultiplier - In the implementation block
@property (nonatomic,readonly) int deviceSize;                                   //@synthesize deviceSize=_deviceSize - In the implementation block
@property (nonatomic,readonly) int deviceSpeed;                                  //@synthesize deviceSpeed=_deviceSpeed - In the implementation block
+(void)incrementNetworkActivityIndicatorVisible;
+(void)decrementNetworkActivityIndicatorVisible;
+(id)sharedInstance;
-(void)setIntroShown:(char)arg1 ;
-(char)isPhoneUI;
-(NSUserDefaults *)appGroupDefaults;
-(char)introShown;
-(void)analyticsIncreaseCountForKey:(id)arg1 ;
-(void)setAppInBackground:(char)arg1 ;
-(void)reloadAppGroupDefaults;
-(float)displayMultiplier;
-(void)setDisplayTipTitleUnderAppIcon:(char)arg1 ;
-(void)analyticsIncreaseCountForKey:(id)arg1 tip:(id)arg2 additionalParameter:(id)arg3 ;
-(void)addViewedTipID:(id)arg1 ;
-(char)appInBackground;
-(char)displayTipTitleUnderAppIcon;
-(void)updateWithDeviceMeta;
-(void)analyticsSetValue:(int)arg1 forKey:(id)arg2 ;
-(id)analyticsNormalizedKeyForKey:(id)arg1 ;
-(void)analyticsSetValue:(int)arg1 forKey:(id)arg2 tip:(id)arg3 ;
-(void)analyticsIncreaseCountForKey:(id)arg1 tip:(id)arg2 ;
-(int)deviceSpeed;
-(void)setAppGroupDefaults:(NSUserDefaults *)arg1 ;
-(NSMutableArray *)viewedTipIdentifiers;
-(void)setViewedTipIdentifiers:(NSMutableArray *)arg1 ;
-(char)isInternalBuild;
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(int)deviceSize;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIClientDelegate.h>

@class AXUIClient, NSString;

@interface AXBDisplayFilterManager : NSObject <AXUIClientDelegate> {

	char _softwareFiltersEnabled;
	char _didEnableHWFilters;
	char _invertColorsWasEnabled;
	char _grayscaleWasEnabled;
	char _reduceWhitePointWasEnabled;
	char _ignoringNotifications;
	AXUIClient* _displayFilterUIClient;

}

@property (nonatomic,retain) AXUIClient * displayFilterUIClient;              //@synthesize displayFilterUIClient=_displayFilterUIClient - In the implementation block
@property (assign,nonatomic) char softwareFiltersEnabled;                     //@synthesize softwareFiltersEnabled=_softwareFiltersEnabled - In the implementation block
@property (assign,nonatomic) char didEnableHWFilters;                         //@synthesize didEnableHWFilters=_didEnableHWFilters - In the implementation block
@property (assign,nonatomic) char invertColorsWasEnabled;                     //@synthesize invertColorsWasEnabled=_invertColorsWasEnabled - In the implementation block
@property (assign,nonatomic) char grayscaleWasEnabled;                        //@synthesize grayscaleWasEnabled=_grayscaleWasEnabled - In the implementation block
@property (assign,nonatomic) char reduceWhitePointWasEnabled;                 //@synthesize reduceWhitePointWasEnabled=_reduceWhitePointWasEnabled - In the implementation block
@property (assign,nonatomic) char ignoringNotifications;                      //@synthesize ignoringNotifications=_ignoringNotifications - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)disableAllFilters;
+(void)initializeMonitor;
-(void)setDisplayFilterUIClient:(AXUIClient *)arg1 ;
-(void)updateSettings;
-(void)_updateNotificationCache;
-(void)_updateSettings:(id)arg1 ;
-(char)_allowSoftwareFilters;
-(void)setInvertColorsWasEnabled:(char)arg1 ;
-(void)setGrayscaleWasEnabled:(char)arg1 ;
-(void)setReduceWhitePointWasEnabled:(char)arg1 ;
-(void)setIgnoringNotifications:(char)arg1 ;
-(char)invertColorsWasEnabled;
-(char)grayscaleWasEnabled;
-(char)reduceWhitePointWasEnabled;
-(char)_forceSoftwareFilters;
-(void)_updateBrightnessFilters:(char)arg1 ;
-(char)didEnableHWFilters;
-(void)setDidEnableHWFilters:(char)arg1 ;
-(char)softwareFiltersEnabled;
-(void)setSoftwareFiltersEnabled:(char)arg1 ;
-(AXUIClient *)displayFilterUIClient;
-(char)ignoringNotifications;
-(void)_updateMatrixSupport;
-(void)_updateCoreSupport;
-(void)_repostNotificationIfNeeded;
-(void)dealloc;
@end


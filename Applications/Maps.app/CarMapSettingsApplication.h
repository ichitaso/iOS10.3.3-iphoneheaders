/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableArray, NSArray;

@interface CarMapSettingsApplication : NSObject {

	NSDictionary* _settingsDictionary;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,readonly) NSDictionary * settingsDictionary;              //@synthesize settingsDictionary=_settingsDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * completionHandlers; 
-(id)initWithSettingsDictionary:(id)arg1 ;
-(NSDictionary *)settingsDictionary;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)completionHandlers;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class BSMutableSettings, BSSettings, _UILegibilitySettings, NSString;

@interface SBAppStatusBarSettings : NSObject <BSSettingDescriptionProvider, NSCopying, NSMutableCopying> {

	BSMutableSettings* _settings;

}

@property (getter=_BSSettings,nonatomic,readonly) BSSettings * BSSettings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) float alpha; 
@property (nonatomic,readonly) int style; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_BSSettings;
-(id)_initWithBSSettings:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(int)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)alpha;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
-(id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
@end


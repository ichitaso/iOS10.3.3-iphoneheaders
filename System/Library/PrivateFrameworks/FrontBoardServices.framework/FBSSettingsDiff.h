/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>

@class BSSettings, BSSettingsDiff, NSString;

@interface FBSSettingsDiff : NSObject <BSXPCCoding, BSSettingDescriptionProvider> {

	BSSettings* _changes;
	BSSettingsDiff* _otherSettingsDiff;
	Class _settingsClass;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)inspectChangesWithBlock:(/*^block*/id)arg1 ;
-(id)settings:(id)arg1 keyDescriptionForSetting:(unsigned)arg2 ;
-(id)settings:(id)arg1 valueDescriptionForFlag:(int)arg2 object:(id)arg3 ofSetting:(unsigned)arg4 ;
-(id)initWithChanges:(id)arg1 fromSettings:(id)arg2 toSettings:(id)arg3 ;
-(id)_initWithChanges:(id)arg1 otherSettingsDiff:(id)arg2 settingsClass:(Class)arg3 ;
-(void)inspectOtherChangesWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned)arg3 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end


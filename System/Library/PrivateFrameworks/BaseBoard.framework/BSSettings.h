/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol BSSettingDescriptionProvider;
@class NSMapTable, NSString;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding, NSSecureCoding, BSDescriptionProviding> {

	id<BSSettingDescriptionProvider> _descriptionProvider;
	NSMapTable* _settingToFlagMap;
	NSMapTable* _settingToObjectMap;

}

@property (assign,nonatomic,__weak) id<BSSettingDescriptionProvider> descriptionProvider;              //@synthesize descriptionProvider=_descriptionProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)enumerateFlagsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSettingsForFlagsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSettingsForObjectsWithBlock:(/*^block*/id)arg1 ;
-(id<BSSettingDescriptionProvider>)descriptionProvider;
-(void)setDescriptionProvider:(id<BSSettingDescriptionProvider>)arg1 ;
-(void)_applyToSettings:(id)arg1 ;
-(void)_setObject:(id)arg1 forSetting:(unsigned)arg2 ;
-(void)_removeAllSettings;
-(id)_valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned)arg3 multilinePrefix:(id)arg4 ;
-(char)isKeyedSettings;
-(id)_keyDescriptionForSetting:(unsigned)arg1 ;
-(void)_setFlag:(int)arg1 forSetting:(unsigned)arg2 ;
-(void)_enumerateSettingsInMap:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_newMapTable;
-(id)basicDescriptionWithPrefix:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(id)objectForSetting:(unsigned)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)allSettings;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(char)boolForSetting:(unsigned)arg1 ;
-(int)flagForSetting:(unsigned)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end


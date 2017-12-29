/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <SpringBoard/SBProcessSettings.h>

@protocol SBProcessSettings <NSObject>
@required
-(void)clearProcessSettings;
-(char)boolForProcessSetting:(int)arg1;
-(void)setFlag:(int)arg1 forProcessSetting:(int)arg2;
-(void)setObject:(id)arg1 forProcessSetting:(int)arg2;
-(int)flagForProcessSetting:(int)arg1;
-(id)objectForProcessSetting:(int)arg1;
-(void)applyProcessSettings:(id)arg1;
-(id)copyProcessSettings;

@end

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSMutableSettings, NSString;

@interface SBProcessSettings : NSObject <BSSettingDescriptionProvider, SBProcessSettings, NSCopying, BSDescriptionProviding> {

	BSMutableSettings* _settings;

}

@property (getter=isEmpty,nonatomic,readonly) char empty; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearProcessSettings;
-(char)boolForProcessSetting:(int)arg1 ;
-(void)setFlag:(int)arg1 forProcessSetting:(int)arg2 ;
-(void)setObject:(id)arg1 forProcessSetting:(int)arg2 ;
-(int)flagForProcessSetting:(int)arg1 ;
-(id)objectForProcessSetting:(int)arg1 ;
-(void)applyProcessSettings:(id)arg1 ;
-(id)copyProcessSettings;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
-(id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end


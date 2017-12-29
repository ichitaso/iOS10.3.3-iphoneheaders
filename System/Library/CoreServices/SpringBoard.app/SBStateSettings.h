/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <SpringBoard/SBStateSettings.h>

@protocol SBStateSettings <NSObject>
@required
-(void)clearStateSettings;
-(char)boolForStateSetting:(unsigned)arg1;
-(void)applyStateSettings:(id)arg1;
-(int)flagForStateSetting:(unsigned)arg1;
-(void)setObject:(id)arg1 forStateSetting:(unsigned)arg2;
-(id)objectForStateSetting:(unsigned)arg1;
-(id)copyStateSettings;
-(void)setFlag:(int)arg1 forStateSetting:(unsigned)arg2;

@end

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSMutableSettings, NSString;

@interface SBStateSettings : NSObject <BSSettingDescriptionProvider, SBStateSettings, NSCopying, BSDescriptionProviding> {

	BSMutableSettings* _settings;

}

@property (getter=isEmpty,nonatomic,readonly) char empty; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearStateSettings;
-(char)boolForStateSetting:(unsigned)arg1 ;
-(void)applyStateSettings:(id)arg1 ;
-(int)flagForStateSetting:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forStateSetting:(unsigned)arg2 ;
-(id)objectForStateSetting:(unsigned)arg1 ;
-(id)copyStateSettings;
-(void)setFlag:(int)arg1 forStateSetting:(unsigned)arg2 ;
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

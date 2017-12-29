/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIKeyboardPreferencesController : NSObject

@property (nonatomic,readonly) UIKeyboardPreferencesController*<TIPreferencesControllerActions> preferencesActions; 
@property (assign) int handBias; 
+(id)sharedPreferencesController;
-(id)init;
-(id)valueForKey:(int)arg1 ;
-(void)setValue:(id)arg1 forKey:(int)arg2 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(UIKeyboardPreferencesController*<TIPreferencesControllerActions>)preferencesActions;
-(float)rivenSizeFactor:(float)arg1 ;
-(char)boolForKey:(int)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)valueForPreferenceKey:(id)arg1 ;
-(char)boolForPreferenceKey:(id)arg1 ;
-(void)synchronizePreferences;
-(void)saveInputModes:(id)arg1 ;
-(void)setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(void)setLanguageAwareInputModeLastUsed:(id)arg1 ;
-(char)typologyEnabled;
-(int)handBias;
-(void)setHandBias:(int)arg1 ;
-(char)allEnabledInputModesAreValid;
-(char)isPreferenceKeyLockedDown:(id)arg1 ;
-(void)_configurePreferences;
-(void)preferencesControllerChanged:(id)arg1 ;
-(void)touchSynchronizePreferencesTimer;
-(char)spaceConfirmationEnabled;
@end


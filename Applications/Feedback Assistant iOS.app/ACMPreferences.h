/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/ACMBasePreferences.h>

@protocol ACMPreferencesStore;
@class NSString;

@interface ACMPreferences : NSObject <ACMBasePreferences> {

	id<ACMPreferencesStore> _preferencesStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) id<ACMPreferencesStore> preferencesStore;              //@synthesize preferencesStore=_preferencesStore - In the implementation block
-(void)dealloc;
-(id)preferencesValueForKey:(id)arg1 ;
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(id)multiplePreferencesValuesForKeys:(id)arg1 ;
-(void)setMultiplePreferencesValues:(id)arg1 ;
-(id)multiplePreferencesValuesForKeys:(id)arg1 withOptions:(int)arg2 ;
-(void)setMultiplePreferencesValues:(id)arg1 withOptions:(int)arg2 ;
-(void)setPreferencesStore:(id<ACMPreferencesStore>)arg1 ;
-(id<ACMPreferencesStore>)preferencesStore;
-(id)preferencesValueForKey:(id)arg1 withOptions:(int)arg2 ;
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 withOptions:(int)arg3 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/XBApplicationController.h>

@class FBApplicationLibrary, NSMutableDictionary, NSHashTable, NSArray;

@interface SBApplicationLibraryObserver : XBApplicationController {

	FBApplicationLibrary* _appLibrary;
	NSMutableDictionary* _placeholdersByBundleID;
	NSHashTable* _applicationObservers;
	NSHashTable* _placeholderObservers;

}

@property (nonatomic,readonly) FBApplicationLibrary * appLibrary;              //@synthesize appLibrary=_appLibrary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * placeholders; 
-(void)addApplicationLifecycleObserver:(id)arg1 ;
-(void)_addObserver:(id)arg1 table:(id)arg2 ;
-(void)_removeObserver:(id)arg1 table:(id)arg2 ;
-(void)_waitForLaunchImageGenerationForApplications:(id)arg1 ;
-(void)removeApplicationLifecycleObserver:(id)arg1 ;
-(void)addPlaceholderLifecycleObserver:(id)arg1 ;
-(void)removePlaceholderLifecycleObserver:(id)arg1 ;
-(id)init;
-(FBApplicationLibrary *)appLibrary;
-(NSArray *)placeholders;
-(id)_allApplicationsFilteredBySystem:(char)arg1 bySplashBoard:(char)arg2 ;
-(id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2 ;
@end


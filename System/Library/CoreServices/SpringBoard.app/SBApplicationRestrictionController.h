/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol SBApplicationRestrictionDataSource;
@class NSHashTable, NSMutableDictionary, NSMutableSet, NSSet, SBApplicationDefaults, NSString;

@interface SBApplicationRestrictionController : NSObject <MCProfileConnectionObserver> {

	id<SBApplicationRestrictionDataSource> _dataSource;
	NSHashTable* _observers;
	NSMutableDictionary* _tagValidityMap;
	NSMutableDictionary* _validTagsByIdentifier;
	MGNotificationTokenStructRef _tagsNotificationToken;
	NSMutableSet* _enabledTags;
	NSMutableDictionary* _ratingRanksByIdentifier;
	NSSet* _restrictedIdentifiers;
	SBApplicationDefaults* _applicationDefaults;
	char _showInternalApps;
	char _hasHideNonDefaultSystemAppsCapability;
	char _showAllSystemApps;
	char _canPostRestrictionState;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginPostingChanges;
-(char)isApplicationIdentifierRestricted:(id)arg1 ;
-(void)noteApplicationIdentifiersDidChangeWithAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3 ;
-(void)noteVisibilityOverridesDidChange;
-(void)_updateRestrictions;
-(void)_updateVisibilityPreferences;
-(void)_postRestrictionStateToObservers:(id)arg1 ;
-(void)_postRestrictionState;
-(void)_updateRestrictionsAndForcePost:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 ;
@end


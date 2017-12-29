/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconModelStore, SBIconModelApplicationDataSource, SBIconModelDelegate;
@class NSDictionary, NSOrderedSet, NSMutableDictionary, NSSet, SBRootFolder;

@interface SBIconModel : NSObject {

	NSDictionary* _desiredIconState;
	NSOrderedSet* _desiredIconStateFlattened;
	NSMutableDictionary* _leafIconsByIdentifier;
	NSMutableDictionary* _leafIdentifiersForMasqueradeIdentifier;
	NSSet* _hiddenIconTags;
	NSSet* _visibleIconTags;
	char _tagsHaveBeenSet;
	SBRootFolder* _rootFolder;
	id<SBIconModelStore> _store;
	id<SBIconModelApplicationDataSource> _applicationDataSource;
	id<SBIconModelDelegate> _delegate;
	char _allowsSaving;
	char _ignoresIconsNotInIconState;
	char _sortsIconsAlphabetically;
	NSSet* _archivedLeafIdentifiers;

}

@property (nonatomic,retain) NSDictionary * leafIconsByIdentifier;                                      //@synthesize leafIconsByIdentifier=_leafIconsByIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * leafIdentifiersForMasqueradeIdentifier;                     //@synthesize leafIdentifiersForMasqueradeIdentifier=_leafIdentifiersForMasqueradeIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * archivedLeafIdentifiers;                                             //@synthesize archivedLeafIdentifiers=_archivedLeafIdentifiers - In the implementation block
@property (assign,nonatomic) char allowsSaving;                                                         //@synthesize allowsSaving=_allowsSaving - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconModelDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<SBIconModelStore> store;                                              //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) id<SBIconModelApplicationDataSource> applicationDataSource;              //@synthesize applicationDataSource=_applicationDataSource - In the implementation block
@property (assign,nonatomic) char ignoresIconsNotInIconState;                                           //@synthesize ignoresIconsNotInIconState=_ignoresIconsNotInIconState - In the implementation block
@property (assign,nonatomic) char sortsIconsAlphabetically;                                             //@synthesize sortsIconsAlphabetically=_sortsIconsAlphabetically - In the implementation block
-(id)bookmarkIconForWebClipIdentifier:(id)arg1 ;
-(id)placeholdersByDisplayID;
-(void)clearDesiredIconState;
-(id)addBookmarkIconForWebClip:(id)arg1 ;
-(id)leafIconForIdentifier:(id)arg1 ;
-(id)exportState:(char)arg1 ;
-(id)exportPendingState:(char)arg1 includeMissingIcons:(char)arg2 ;
-(id)exportFlattenedState:(char)arg1 includeMissingIcons:(char)arg2 ;
-(char)isMasqueradedLeafIdentifier:(id)arg1 ;
-(id)prioritizedMasqueradeIconForIdentifier:(id)arg1 ;
-(id)downloadingIconForBundleIdentifier:(id)arg1 ;
-(void)removeIcon:(id)arg1 ;
-(char)hasDesiredIconState;
-(void)saveIconStateIfNeeded;
-(id)indexPathForNewIcon:(id)arg1 isDesignatedLocation:(char*)arg2 replaceExistingIconAtIndexPath:(id*)arg3 ;
-(id)iconsOfClass:(Class)arg1 ;
-(id)initWithStore:(id)arg1 applicationDataSource:(id)arg2 ;
-(char)sortsIconsAlphabetically;
-(void)setSortsIconsAlphabetically:(char)arg1 ;
-(void)loadAllIcons;
-(void)setVisibilityOfIconsWithVisibleTags:(id)arg1 hiddenTags:(id)arg2 ;
-(char)importState:(id)arg1 ;
-(id)leafIcons;
-(id)visibleIconIdentifiers;
-(char)_canAddDownloadingIconForBundleID:(id)arg1 ;
-(void)addIconForApplication:(id)arg1 ;
-(id)addDownloadingIconForDownload:(id)arg1 ;
-(void)removeIconForIdentifier:(id)arg1 ;
-(id)_iconState;
-(id)iconState;
-(char)ignoresIconsNotInIconState;
-(void)deleteIconState;
-(void)didUnarchiveMetadata:(id)arg1 ;
-(id)_indexPathInRootFolder:(id)arg1 forNewIcon:(id)arg2 isDesignatedLocation:(char*)arg3 replaceExistingIconAtIndexPath:(id*)arg4 ;
-(id)indexPathForIconInPlatformState:(id)arg1 ;
-(NSSet *)archivedLeafIdentifiers;
-(id)iconModelMetadata;
-(void)_saveIconState;
-(void)_replaceAppIconsWithDownloadingIcons:(id)arg1 ;
-(void)_replaceAppIconsWithDownloadingIcons;
-(id)_unarchiveRootFolder;
-(void)setArchivedLeafIdentifiers:(NSSet *)arg1 ;
-(void)clearDesiredIconStateIfPossible;
-(void)_saveDesiredIconState;
-(id<SBIconModelApplicationDataSource>)applicationDataSource;
-(void)setLeafIconsByIdentifier:(NSDictionary *)arg1 ;
-(void)setLeafIdentifiersForMasqueradeIdentifier:(NSDictionary *)arg1 ;
-(id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(char)arg2 ;
-(id)addDownloadingIconForBundleID:(id)arg1 withIdentifier:(id)arg2 ;
-(id)leafIconsWithIdentifiers:(id)arg1 ;
-(id)_applicationIcons;
-(void)importDesiredIconState:(id)arg1 ;
-(NSDictionary *)leafIconsByIdentifier;
-(NSDictionary *)leafIdentifiersForMasqueradeIdentifier;
-(char)allowsSaving;
-(void)setAllowsSaving:(char)arg1 ;
-(void)setIgnoresIconsNotInIconState:(char)arg1 ;
-(id)expectedIconForDisplayIdentifier:(id)arg1 ;
-(void)setDelegate:(id<SBIconModelDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<SBIconModelDelegate>)delegate;
-(void)layout;
-(void)addIcon:(id)arg1 ;
-(id)rootFolder;
-(id)applicationWithBundleIdentifier:(id)arg1 ;
-(id)applicationIconForBundleIdentifier:(id)arg1 ;
-(char)isIconVisible:(id)arg1 ;
-(void)localeChanged;
-(id<SBIconModelStore>)store;
@end


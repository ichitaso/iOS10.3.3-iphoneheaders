/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTreeNode.h>
#import <SpringBoard/SBIconIndexNode.h>
#import <SpringBoard/SBIconIndexMutableListObserver.h>
#import <SpringBoard/SBIconListModelObserver.h>

@class NSArray, NSHashTable, SBIconIndexMutableList, NSString, SBFolderIcon, NSMutableSet, NSCountedSet;

@interface SBFolder : NSObject <SBTreeNode, SBIconIndexNode, SBIconIndexMutableListObserver, SBIconListModelObserver> {

	NSHashTable* _nodeObservers;
	NSHashTable* _folderObservers;
	SBIconIndexMutableList* _lists;
	NSString* _displayName;
	NSString* _defaultDisplayName;
	char _displayNameDirty;
	char _open;
	SBFolderIcon* _icon;
	char _cancelable;
	NSMutableSet* _addedIcons;
	NSMutableSet* _removedIcons;
	NSCountedSet* _coalesceChangesRequests;
	unsigned _maxListCount;
	unsigned _maxIconCountInLists;
	SBFolder* _parentFolder;

}

@property (nonatomic,copy) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
@property (assign,getter=isOpen,nonatomic) char open;                          //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) SBFolderIcon * icon;                       //@synthesize icon=_icon - In the implementation block
@property (assign,getter=isCancelable,nonatomic) char cancelable;              //@synthesize cancelable=_cancelable - In the implementation block
@property (assign,nonatomic,__weak) SBFolder * parentFolder;                   //@synthesize parentFolder=_parentFolder - In the implementation block
@property (nonatomic,copy,readonly) NSArray * lists; 
@property (nonatomic,readonly) unsigned listCount; 
@property (nonatomic,readonly) unsigned maxListCount; 
@property (nonatomic,readonly) unsigned maxIconCountInLists;                   //@synthesize maxIconCountInLists=_maxIconCountInLists - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,__weak,readonly) id<SBTreeNode> parent; 
+(char)isRootFolderClass;
-(id)iconAtIndexPath:(id)arg1 ;
-(char)canAddIcon;
-(void)startCoalescingContentChangesWithRequestID:(id)arg1 ;
-(void)stopCoalescingContentChangesForRequestID:(id)arg1 ;
-(id)folderIcons;
-(id)indexPathForIconWithIdentifier:(id)arg1 ;
-(id)listsContainingLeafIconWithIdentifier:(id)arg1 ;
-(id)placeIcon:(id)arg1 atIndexPath:(id*)arg2 ;
-(id)performCascadingIconInsertion:(id)arg1 indexPath:(id)arg2 ;
-(unsigned)maxListCount;
-(void)removeIconAtIndexPath:(id)arg1 ;
-(char)compactLists;
-(void)removeEmptyList:(id)arg1 ;
-(id)nodeIdentifier;
-(void)setCancelable:(char)arg1 ;
-(char)shouldRemoveWhenEmpty;
-(id)iconsOfClass:(Class)arg1 ;
-(id)indexPathForFirstFreeSlotAvoidingFirstList:(char)arg1 ;
-(void)enumerateAllIconsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithMaxListCount:(unsigned)arg1 maxIconCountInLists:(unsigned)arg2 ;
-(id)leafIcons;
-(void)markIconStateClean;
-(id)insertIcon:(id)arg1 atIndexPath:(id*)arg2 ;
-(id)orderedIcons;
-(id)indexPathForIcon:(id)arg1 includingPlaceholders:(char)arg2 ;
-(char)isIconStateDirty;
-(void)addNodeObserver:(id)arg1 ;
-(void)addFolderObserver:(id)arg1 ;
-(void)removeNodeObserver:(id)arg1 ;
-(void)removeFolderObserver:(id)arg1 ;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned)arg2 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(unsigned)indexOfList:(id)arg1 ;
-(id)addEmptyList;
-(char)_compactLists;
-(id)_listsForCompaction;
-(void)_removeLists:(id)arg1 ;
-(void)didAddFolder:(id)arg1 ;
-(void)_addList:(id)arg1 ;
-(void)didRemoveFolder:(id)arg1 ;
-(id)_createNewListWithIcon:(id)arg1 ;
-(Class)listModelClass;
-(id)performCascadingIconInsertion:(id)arg1 listIndex:(unsigned)arg2 iconIndex:(unsigned)arg3 ;
-(void)stopCoalescingContentChangesForRequestID:(id)arg1 forceReload:(char)arg2 ;
-(char)_isCoalescingContentChanges;
-(void)purgeLists;
-(void)iconList:(id)arg1 didRemoveIcon:(id)arg2 ;
-(void)iconList:(id)arg1 didAddIcon:(id)arg2 ;
-(void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3 ;
-(id)defaultDisplayName;
-(void)setDefaultDisplayName:(id)arg1 ;
-(char)canRemoveIcons;
-(char)canEditDisplayName;
-(void)_setLists:(id)arg1 ;
-(unsigned)maxIconCountInLists;
-(id)indexPathForIcon:(id)arg1 ;
-(id)folderContainingIndexPath:(id)arg1 relativeIndexPath:(id*)arg2 ;
-(id)indexPathForNodeIdentifier:(id)arg1 ;
-(void)compactIconsAndLists;
-(char)containsNodeIdentifier:(id)arg1 ;
-(id)listsContainingIcon:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(char)isEmpty;
-(void)setIcon:(SBFolderIcon *)arg1 ;
-(SBFolderIcon *)icon;
-(NSString *)displayName;
-(id)listAtIndex:(unsigned)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)addIcon:(id)arg1 ;
-(void)sort;
-(char)isFull;
-(void)setParentFolder:(SBFolder *)arg1 ;
-(void)setOpen:(char)arg1 ;
-(NSArray *)children;
-(id<SBTreeNode>)parent;
-(char)isOpen;
-(char)isCancelable;
-(char)isRootFolder;
-(SBFolder *)parentFolder;
-(NSArray *)lists;
-(unsigned)listCount;
-(id)allIcons;
@end


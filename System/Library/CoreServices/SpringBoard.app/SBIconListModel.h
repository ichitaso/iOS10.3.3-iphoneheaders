/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTreeNode.h>
#import <SpringBoard/SBIconIndexNode.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class SBIconIndexMutableList, NSHashTable, SBFolder, NSString, NSArray;

@interface SBIconListModel : NSObject <SBTreeNode, SBIconIndexNode, NSFastEnumeration> {

	SBIconIndexMutableList* _icons;
	unsigned _maxIconCount;
	NSHashTable* _nodeObservers;
	NSHashTable* _listObservers;
	char _iconStateIsDirty;
	SBFolder* _folder;

}

@property (nonatomic,__weak,readonly) SBFolder * folder;                  //@synthesize folder=_folder - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,__weak,readonly) id<SBTreeNode> parent; 
-(char)needsCompacting;
-(unsigned)compactIcons;
-(unsigned)firstFreeSlotIndexForType:(int)arg1 ;
-(id)placeIcon:(id)arg1 atIndex:(unsigned*)arg2 ;
-(id)insertIcon:(id)arg1 atIndex:(unsigned*)arg2 ;
-(void)removeIconAtIndex:(unsigned)arg1 ;
-(void)enumerateIconsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned)firstFreeSlotIndex;
-(void)removeIcon:(id)arg1 ;
-(unsigned)numberOfIcons;
-(id)nodeIdentifier;
-(void)enumerateFolderIconsUsingBlock:(/*^block*/id)arg1 ;
-(id)iconsOfClass:(Class)arg1 ;
-(void)markIconStateClean;
-(char)allowsAddingIcon:(id)arg1 ;
-(char)isIconStateDirty;
-(void)addNodeObserver:(id)arg1 ;
-(void)removeNodeObserver:(id)arg1 ;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned)arg2 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(void)removeListObserver:(id)arg1 ;
-(void)addListObserver:(id)arg1 ;
-(id)initWithFolder:(id)arg1 maxIconCount:(unsigned)arg2 ;
-(unsigned)maxNumberOfIcons;
-(void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(id)_iconAtIndex:(unsigned)arg1 ;
-(char)addIcon:(id)arg1 asDirty:(char)arg2 ;
-(void)_notifyListObservers:(/*^block*/id)arg1 ;
-(void)warmUpIconImagesForLocation:(int)arg1 ;
-(unsigned)indexForIcon:(id)arg1 ;
-(char)containsNodeIdentifier:(id)arg1 ;
-(char)directlyContainsIcon:(id)arg1 ;
-(char)directlyContainsLeafIconWithIdentifier:(id)arg1 ;
-(id)init;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_SB35*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(NSString *)description;
-(char)isEmpty;
-(void)sortUsingSelector:(SEL)arg1 ;
-(id)icons;
-(char)addIcon:(id)arg1 ;
-(id)iconAtIndex:(unsigned)arg1 ;
-(SBFolder *)folder;
-(char)isFull;
-(NSArray *)children;
-(id<SBTreeNode>)parent;
@end

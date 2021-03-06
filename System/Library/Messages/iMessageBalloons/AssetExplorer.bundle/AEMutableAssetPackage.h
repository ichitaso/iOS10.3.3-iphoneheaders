/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AEAssetPackage.h>

@interface AEMutableAssetPackage : AEAssetPackage
-(void)addSidecarEntriesFromDictionary:(id)arg1 ;
-(id)_copyMetadataFromDisplayAsset:(id)arg1 ;
-(void)suppressURLForType:(id)arg1 ;
-(void)expressURLForType:(id)arg1 ;
-(void)storeMetadataFromPHAsset:(id)arg1 imageURL:(id)arg2 adjustmentURL:(id)arg3 ;
-(void)setSidecarObject:(id)arg1 forKey:(id)arg2 ;
-(void)storeURL:(id)arg1 forType:(id)arg2 ;
-(void)storeMetadataFromReviewAsset:(id)arg1 ;
-(void)endSuppressingLivePhoto;
-(void)setMediaOrigin:(int)arg1 ;
-(void)beginSupressingLivePhoto;
-(void)removeURLForType:(id)arg1 ;
-(void)removeSidecarObjectForKey:(id)arg1 ;
-(id)initWithAssetIdentifier:(id)arg1 ;
@end


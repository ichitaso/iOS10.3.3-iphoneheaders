/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface SVSTranscriptFlowLayout : UICollectionViewFlowLayout {

	NSMutableArray* _insertedIndexPaths;
	NSMutableArray* _reloadedIndexPaths;
	NSMutableArray* _handledIndexPaths;

}

@property (getter=_insertedIndexPaths,nonatomic,readonly) NSMutableArray * insertedIndexPaths;              //@synthesize insertedIndexPaths=_insertedIndexPaths - In the implementation block
@property (getter=_reloadedIndexPaths,nonatomic,readonly) NSMutableArray * reloadedIndexPaths;              //@synthesize reloadedIndexPaths=_reloadedIndexPaths - In the implementation block
@property (getter=_handledIndexPaths,nonatomic,readonly) NSMutableArray * handledIndexPaths;                //@synthesize handledIndexPaths=_handledIndexPaths - In the implementation block
-(id)_insertedIndexPaths;
-(id)_reloadedIndexPaths;
-(id)_handledIndexPaths;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned)arg3 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
@end


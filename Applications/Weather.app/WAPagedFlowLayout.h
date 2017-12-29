/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>
#import <Weather/WACollectionViewLayoutProtocol.h>

@class NSIndexPath, NSString;

@interface WAPagedFlowLayout : UICollectionViewFlowLayout <WACollectionViewLayoutProtocol> {

	NSIndexPath* _targetIndexPath;

}

@property (nonatomic,retain) NSIndexPath * targetIndexPath;              //@synthesize targetIndexPath=_targetIndexPath - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)cityViewPanOffsetForCell:(id)arg1 indexPath:(id)arg2 contentOffset:(CGPoint)arg3 ;
-(NSIndexPath *)targetIndexPath;
-(void)setTargetIndexPath:(NSIndexPath *)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
@end


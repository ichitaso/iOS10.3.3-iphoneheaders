/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKBHandwritingCandidateView.h>

@class UIKBCandidateCollectionView;

@interface UIKBLinearCandidateView : UIKBHandwritingCandidateView

@property (nonatomic,readonly) UIKBCandidateCollectionView * candidatesCollectionView; 
+(Class)cellClass;
-(void)scrollViewDidChangeContentSize:(id)arg1 ;
-(void)reloadDataByAppendingAtEnd:(char)arg1 ;
-(void)refreshSelectedCandidate;
-(unsigned)focusableVariantCount;
@end

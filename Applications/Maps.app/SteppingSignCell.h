/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Maps/SteppingSignViewDelegate.h>

@protocol SteppingSignCellDelegate;
@class SteppingSignView, NSString;

@interface SteppingSignCell : UICollectionViewCell <SteppingSignViewDelegate> {

	id<SteppingSignCellDelegate> _delegate;
	SteppingSignView* _signView;

}

@property (assign,nonatomic,__weak) id<SteppingSignCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SteppingSignView * signView;                             //@synthesize signView=_signView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SteppingSignView *)signView;
-(void)steppingSignViewDidTapClusteredRoutesButton:(id)arg1 ;
-(void)steppingSignView:(id)arg1 expandingLabelDidExpand:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SteppingSignCellDelegate>)arg1 ;
-(id<SteppingSignCellDelegate>)delegate;
-(void)prepareForReuse;
@end

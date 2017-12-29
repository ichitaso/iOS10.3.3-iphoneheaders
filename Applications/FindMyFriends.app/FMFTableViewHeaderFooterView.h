/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@class FMFHorizontalRule;

@interface FMFTableViewHeaderFooterView : UITableViewHeaderFooterView {

	char _needsTopBorder;
	char _needsBottomBorder;
	FMFHorizontalRule* _topBorder;
	FMFHorizontalRule* _bottomBorder;

}

@property (nonatomic,retain) FMFHorizontalRule * topBorder;                 //@synthesize topBorder=_topBorder - In the implementation block
@property (nonatomic,retain) FMFHorizontalRule * bottomBorder;              //@synthesize bottomBorder=_bottomBorder - In the implementation block
@property (assign,nonatomic) char needsTopBorder;                           //@synthesize needsTopBorder=_needsTopBorder - In the implementation block
@property (assign,nonatomic) char needsBottomBorder;                        //@synthesize needsBottomBorder=_needsBottomBorder - In the implementation block
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(FMFHorizontalRule *)bottomBorder;
-(FMFHorizontalRule *)topBorder;
-(void)setTopBorder:(FMFHorizontalRule *)arg1 ;
-(void)setBottomBorder:(FMFHorizontalRule *)arg1 ;
-(void)setNeedsBottomBorder:(char)arg1 ;
-(void)setNeedsTopBorder:(char)arg1 ;
-(char)needsTopBorder;
-(char)needsBottomBorder;
@end


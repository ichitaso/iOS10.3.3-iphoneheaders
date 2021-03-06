/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MapDimmingViewDelegate;
@interface MapDimmingView : UIView {

	id<MapDimmingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MapDimmingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<MapDimmingViewDelegate>)arg1 ;
-(id<MapDimmingViewDelegate>)delegate;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
@end


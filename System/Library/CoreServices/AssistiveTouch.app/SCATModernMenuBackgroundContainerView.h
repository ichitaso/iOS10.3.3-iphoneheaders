/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UIView.h>

@class SCATModernMenuContentViewContainer, SCATModernMenuFooterView;

@interface SCATModernMenuBackgroundContainerView : UIView {

	char _showingFooterView;
	char _shouldUseDockContentPadding;
	SCATModernMenuContentViewContainer* _contentViewContainer;
	SCATModernMenuFooterView* _footerView;

}

@property (nonatomic,retain) SCATModernMenuContentViewContainer * contentViewContainer;              //@synthesize contentViewContainer=_contentViewContainer - In the implementation block
@property (nonatomic,retain) SCATModernMenuFooterView * footerView;                                  //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentPadding; 
@property (assign,getter=isShowingFooterView,nonatomic) char showingFooterView;                      //@synthesize showingFooterView=_showingFooterView - In the implementation block
@property (assign,nonatomic) char shouldUseDockContentPadding;                                       //@synthesize shouldUseDockContentPadding=_shouldUseDockContentPadding - In the implementation block
-(void)setContentViewContainer:(SCATModernMenuContentViewContainer *)arg1 ;
-(void)setShowingFooterView:(char)arg1 ;
-(char)shouldUseDockContentPadding;
-(char)isShowingFooterView;
-(SCATModernMenuContentViewContainer *)contentViewContainer;
-(void)setShouldUseDockContentPadding:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SCATModernMenuFooterView *)footerView;
-(void)setFooterView:(SCATModernMenuFooterView *)arg1 ;
-(UIEdgeInsets)contentPadding;
@end


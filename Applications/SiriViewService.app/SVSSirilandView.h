/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <UIKit/UIView.h>

@protocol SVSSirilandViewDelegate;
@class UIView, SiriUIPassThroughHitTestView, SiriUIKeyline;

@interface SVSSirilandView : UIView {

	UIView* _contentView;
	SiriUIPassThroughHitTestView* _clipView;
	UIView* _conversationView;
	SiriUIKeyline* _keyline;
	char _showingDeviceLockView;
	char _masksContent;
	char _pageTransitionKeylineVisible;
	id<SVSSirilandViewDelegate> _delegate;
	UIOffset _topChevronOffset;

}

@property (assign,nonatomic) UIOffset topChevronOffset;                                                            //@synthesize topChevronOffset=_topChevronOffset - In the implementation block
@property (nonatomic,retain) UIView * conversationView;                                                            //@synthesize conversationView=_conversationView - In the implementation block
@property (getter=isShowingDeviceLockView,nonatomic,readonly) char showingDeviceLockView;                          //@synthesize showingDeviceLockView=_showingDeviceLockView - In the implementation block
@property (assign,nonatomic,__weak) id<SVSSirilandViewDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char masksContent;                                                                    //@synthesize masksContent=_masksContent - In the implementation block
@property (assign,getter=isPageTransitionKeylineVisible,nonatomic) char pageTransitionKeylineVisible;              //@synthesize pageTransitionKeylineVisible=_pageTransitionKeylineVisible - In the implementation block
+(id)sirilandView;
-(void)statusBarFrameDidChange;
-(void)setConversationView:(UIView *)arg1 ;
-(void)setMasksContent:(char)arg1 ;
-(void)setPageTransitionKeylineVisible:(char)arg1 ;
-(char)isShowingDeviceLockView;
-(UIView *)conversationView;
-(UIOffset)topChevronOffset;
-(void)setTopChevronOffset:(UIOffset)arg1 ;
-(char)masksContent;
-(char)isPageTransitionKeylineVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SVSSirilandViewDelegate>)arg1 ;
-(id<SVSSirilandViewDelegate>)delegate;
@end


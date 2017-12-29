/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <SiriUI/SiriUIReusableHeaderView.h>

@class SiriUIContentLabel, SiriUIKeyline, SiriUIContentButton;

@interface SiriGKDisambiguationHeader : SiriUIReusableHeaderView {

	SiriUIContentLabel* _titleLabel;
	SiriUIKeyline* _topKeyline;
	SiriUIContentButton* _headerButton;

}

@property (nonatomic,readonly) SiriUIContentButton * headerButton;              //@synthesize headerButton=_headerButton - In the implementation block
+(float)defaultHeight;
-(void)configureWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)_edgeInsets;
-(SiriUIContentButton *)headerButton;
@end

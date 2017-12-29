/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/WAAnswer.siriUIBundle/WAAnswer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WAAnswer/WAAnswer-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@protocol WAAttributionViewDelegate;
@class UIImage, UIButton;

@interface WAAttributionView : SiriUIContentCollectionViewCell {

	UIImage* _logoImage;
	UIButton* _attributionButton;
	id<WAAttributionViewDelegate> _delegate;

}

@property (nonatomic,retain) UIButton * attributionButton;                               //@synthesize attributionButton=_attributionButton - In the implementation block
@property (assign,nonatomic,__weak) id<WAAttributionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)attributionButtonTapped;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<WAAttributionViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<WAAttributionViewDelegate>)delegate;
-(void)setAttributionButton:(UIButton *)arg1 ;
-(UIButton *)attributionButton;
@end


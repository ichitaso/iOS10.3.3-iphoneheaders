/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@protocol HUTextInteractionHandling;
@class HUGridLayoutOptions, UILabel, UITextView, NSArray, NSString;

@interface HOStatusDetailsTitleDescriptionCell : UICollectionViewCell <UITextViewDelegate> {

	HUGridLayoutOptions* _layoutOptions;
	id<HUTextInteractionHandling> _textInteractionHandler;
	UILabel* _titleLabel;
	UITextView* _descriptionTextView;
	NSArray* _labelConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UITextView * descriptionTextView;                                         //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) NSArray * labelConstraints;                                               //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                                      //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,copy) id<HFStringGenerator> titleText; 
@property (nonatomic,copy) id<HFStringGenerator> descriptionText; 
@property (assign,nonatomic,__weak) id<HUTextInteractionHandling> textInteractionHandler;              //@synthesize textInteractionHandler=_textInteractionHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_layoutContentApplyingFrames:(char)arg1 forTargetSize:(CGSize)arg2 desiredSize:(out CGSize*)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleText:(id<HFStringGenerator>)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(char)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(int)arg4 ;
-(id<HFStringGenerator>)titleText;
-(id<HFStringGenerator>)descriptionText;
-(void)setDescriptionText:(id<HFStringGenerator>)arg1 ;
-(NSArray *)labelConstraints;
-(void)setLabelConstraints:(NSArray *)arg1 ;
-(HUGridLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(id<HUTextInteractionHandling>)textInteractionHandler;
-(void)setTextInteractionHandler:(id<HUTextInteractionHandling>)arg1 ;
-(UITextView *)descriptionTextView;
-(void)setDescriptionTextView:(UITextView *)arg1 ;
@end


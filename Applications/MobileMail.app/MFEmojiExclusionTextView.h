/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@protocol MFEmojiExclusionTextViewDelegate;
@class NSAttributedString, UIFont, UITextView, UIView, NSString;

@interface MFEmojiExclusionTextView : UIView <UITextViewDelegate, NSLayoutManagerDelegate> {

	char _textViewLayoutNeedsUpdate;
	char _showsDataDetection;
	char _isVibrant;
	id<MFEmojiExclusionTextViewDelegate> _delegate;
	NSAttributedString* _attributedText;
	UIFont* _font;
	unsigned _maximumNumberOfLines;
	UITextView* _emojiTextView;
	UIView* _emojiTextViewMask;
	UITextView* _textTextView;
	UIView* _textTextViewMask;
	float _contentHeightMaxY;

}

@property (nonatomic,retain) UITextView * emojiTextView;                                 //@synthesize emojiTextView=_emojiTextView - In the implementation block
@property (nonatomic,retain) UIView * emojiTextViewMask;                                 //@synthesize emojiTextViewMask=_emojiTextViewMask - In the implementation block
@property (nonatomic,retain) UITextView * textTextView;                                  //@synthesize textTextView=_textTextView - In the implementation block
@property (nonatomic,retain) UIView * textTextViewMask;                                  //@synthesize textTextViewMask=_textTextViewMask - In the implementation block
@property (assign,nonatomic) float contentHeightMaxY;                                    //@synthesize contentHeightMaxY=_contentHeightMaxY - In the implementation block
@property (assign,nonatomic) id<MFEmojiExclusionTextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                          //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font;                                              //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) char showsDataDetection;                                    //@synthesize showsDataDetection=_showsDataDetection - In the implementation block
@property (assign,nonatomic) char isVibrant;                                             //@synthesize isVibrant=_isVibrant - In the implementation block
@property (assign,nonatomic) unsigned maximumNumberOfLines;                              //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (nonatomic,readonly) float contentOffsetFromBottom; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShowsDataDetection:(char)arg1 ;
-(void)setIsVibrant:(char)arg1 ;
-(void)setEmojiTextView:(UITextView *)arg1 ;
-(UITextView *)emojiTextView;
-(void)setTextTextView:(UITextView *)arg1 ;
-(UITextView *)textTextView;
-(char)isVibrant;
-(void)_setVibrancyEnabled:(char)arg1 animated:(char)arg2 ;
-(char)showsDataDetection;
-(id)_vibrancyTintColor;
-(id)_maskWithFrame:(CGRect)arg1 cutouts:(id)arg2 invert:(char)arg3 ;
-(void)setEmojiTextViewMask:(UIView *)arg1 ;
-(UIView *)emojiTextViewMask;
-(void)setTextTextViewMask:(UIView *)arg1 ;
-(UIView *)textTextViewMask;
-(void)setContentHeightMaxY:(float)arg1 ;
-(float)contentHeightMaxY;
-(float)contentOffsetFromBottom;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MFEmojiExclusionTextViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(id<MFEmojiExclusionTextViewDelegate>)delegate;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setMaximumNumberOfLines:(unsigned)arg1 ;
-(void)layoutMarginsDidChange;
-(UIFont *)font;
-(NSAttributedString *)attributedText;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(char)arg3 ;
-(id)viewForLastBaselineLayout;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(id)_textView;
-(unsigned)maximumNumberOfLines;
-(void)_updateMasks;
@end


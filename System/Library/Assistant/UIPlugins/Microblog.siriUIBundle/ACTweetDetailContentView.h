/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol ACTweetDetailContentViewDelegate;
@class UIView, UITextView, UILabel, NSString;

@interface ACTweetDetailContentView : UIView <UITextViewDelegate> {

	UIView* _contentView;
	UITextView* _contentTextView;
	UILabel* _creationDateLabel;
	id<ACTweetDetailContentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ACTweetDetailContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_enumerateMatchingRangesForString:(id)arg1 inString:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(id)_tweetLabelEmphasisedAttributes;
+(id)_tweetLabelHyperlinkAttributes;
+(id)_contentTextForPost:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 tweet:(id)arg2 ;
-(CGSize)_calculateSizeForWidth:(float)arg1 setFrames:(char)arg2 ;
-(void)setLockScreenState:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<ACTweetDetailContentViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<ACTweetDetailContentViewDelegate>)delegate;
-(char)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(int)arg4 ;
@end


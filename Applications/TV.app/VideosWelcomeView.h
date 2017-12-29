/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TV/TV-Structs.h>
#import <UIKit/UIView.h>

@class UILayoutGuide, UIImageView, UILabel, UIButton, UIScrollView;

@interface VideosWelcomeView : UIView {

	UILayoutGuide* _contentLayoutGuide;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UILabel* _bodyLabel;
	UIButton* _continueButton;
	UIScrollView* _lockupScroll;
	char _didLayout;

}
-(id)lockupScroll;
-(id)_buildLockupScroll;
-(id)_buildLockupAtIndex:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)continueButton;
@end

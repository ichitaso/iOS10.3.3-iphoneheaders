/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
#import <UIKit/UITextView.h>

@class UILabel;

@interface FBAPlaceholderTextView : UITextView {

	UILabel* _placeholderLabel;

}

@property (nonatomic,readonly) UILabel * placeholderLabel;              //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(void)_updatePlaceholderVisibility;
-(UILabel *)placeholderLabel;
@end


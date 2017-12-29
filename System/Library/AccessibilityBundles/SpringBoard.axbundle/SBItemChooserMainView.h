/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBVoiceOverTouchItemChooser;

@interface SBItemChooserMainView : UIView {

	SBVoiceOverTouchItemChooser* _itemChooser;

}

@property (nonatomic,retain) SBVoiceOverTouchItemChooser * itemChooser;              //@synthesize itemChooser=_itemChooser - In the implementation block
-(void)setItemChooser:(SBVoiceOverTouchItemChooser *)arg1 ;
-(SBVoiceOverTouchItemChooser *)itemChooser;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(char)accessibilityViewIsModal;
-(char)accessibilityPerformEscape;
-(char)accessibilityActivate;
-(id)_accessibilityObscuredScreenAllowedViews;
-(char)_accessibilitySupportsActivateAction;
@end


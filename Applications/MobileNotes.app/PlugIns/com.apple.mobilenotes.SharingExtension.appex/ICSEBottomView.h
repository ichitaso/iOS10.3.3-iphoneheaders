/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/com.apple.mobilenotes.SharingExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class UILabel;

@interface ICSEBottomView : UIButton {

	char _didInitialLayout;
	UILabel* _chooseNoteLabel;
	UILabel* _destinationLabel;

}

@property (nonatomic,retain) UILabel * chooseNoteLabel;               //@synthesize chooseNoteLabel=_chooseNoteLabel - In the implementation block
@property (nonatomic,retain) UILabel * destinationLabel;              //@synthesize destinationLabel=_destinationLabel - In the implementation block
@property (assign,nonatomic) char didInitialLayout;                   //@synthesize didInitialLayout=_didInitialLayout - In the implementation block
-(UILabel *)destinationLabel;
-(UILabel *)chooseNoteLabel;
-(char)didInitialLayout;
-(void)setDidInitialLayout:(char)arg1 ;
-(void)setChooseNoteLabel:(UILabel *)arg1 ;
-(void)setDestinationLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)accessibilityLabel;
-(id)accessibilityValue;
@end


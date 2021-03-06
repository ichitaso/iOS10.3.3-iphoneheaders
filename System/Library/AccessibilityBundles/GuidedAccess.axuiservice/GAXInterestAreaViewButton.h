/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIButton.h>

@interface GAXInterestAreaViewButton : UIButton {

	char _closeButton;
	unsigned _associatedInterestAreaPathIndex;
	unsigned _knobPosition;

}

@property (assign,nonatomic) unsigned associatedInterestAreaPathIndex;              //@synthesize associatedInterestAreaPathIndex=_associatedInterestAreaPathIndex - In the implementation block
@property (assign,nonatomic) unsigned knobPosition;                                 //@synthesize knobPosition=_knobPosition - In the implementation block
@property (assign,getter=isCloseButton,nonatomic) char closeButton;                 //@synthesize closeButton=_closeButton - In the implementation block
+(id)buttonWithImage:(id)arg1 ;
-(char)isCloseButton;
-(unsigned)associatedInterestAreaPathIndex;
-(void)setAssociatedInterestAreaPathIndex:(unsigned)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(void)setKnobPosition:(unsigned)arg1 ;
-(unsigned)knobPosition;
-(void)setCloseButton:(char)arg1 ;
@end


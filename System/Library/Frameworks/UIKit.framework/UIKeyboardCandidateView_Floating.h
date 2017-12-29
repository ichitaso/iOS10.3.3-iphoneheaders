/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardCandidateView.h>
#import <UIKit/UIKeyboardCandidateViewInline.h>

@class NSString;

@interface UIKeyboardCandidateView_Floating : UIKeyboardCandidateView <UIKeyboardCandidateViewInline> {

	CGRect _collapsedRect;
	CGSize presentationSize;

}

@property (assign) CGSize presentationSize; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)defaultExtendedControlHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)candidatesDidChange;
-(id)_inheritedRenderConfig;
-(int)candidatesVisualStyle;
-(id)activeCandidateList;
-(void)setCandidateViewExtended:(char)arg1 ;
-(unsigned)_numberOfColumns:(char)arg1 ;
-(void)setPresentationSize:(CGSize)arg1 ;
-(CGSize)presentationSize;
@end


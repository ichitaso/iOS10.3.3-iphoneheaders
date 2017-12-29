/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStoryboardSegueTemplate.h>

@interface UIStoryboardPresentationSegueTemplate : UIStoryboardSegueTemplate {

	char _useDefaultModalPresentationStyle;
	char _useDefaultModalTransitionStyle;
	int _modalPresentationStyle;
	int _modalTransitionStyle;

}

@property (assign,nonatomic) char useDefaultModalPresentationStyle;              //@synthesize useDefaultModalPresentationStyle=_useDefaultModalPresentationStyle - In the implementation block
@property (assign,nonatomic) char useDefaultModalTransitionStyle;                //@synthesize useDefaultModalTransitionStyle=_useDefaultModalTransitionStyle - In the implementation block
@property (assign,nonatomic) int modalPresentationStyle;                         //@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (assign,nonatomic) int modalTransitionStyle;                           //@synthesize modalTransitionStyle=_modalTransitionStyle - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)modalPresentationStyle;
-(void)setModalPresentationStyle:(int)arg1 ;
-(int)modalTransitionStyle;
-(void)setModalTransitionStyle:(int)arg1 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(char)useDefaultModalPresentationStyle;
-(char)useDefaultModalTransitionStyle;
-(/*^block*/id)newDefaultPrepareHandlerForSegue:(id)arg1 ;
-(void)setUseDefaultModalPresentationStyle:(char)arg1 ;
-(void)setUseDefaultModalTransitionStyle:(char)arg1 ;
@end


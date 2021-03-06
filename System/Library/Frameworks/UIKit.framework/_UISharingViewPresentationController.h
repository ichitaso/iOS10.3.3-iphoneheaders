/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPopoverPresentationController.h>

@interface _UISharingViewPresentationController : UIPopoverPresentationController {

	char _suppressDismissalHandlerUnlessDimmingViewTapped;
	/*^block*/id _dismissalHandler;

}

@property (nonatomic,copy) id dismissalHandler;                                                 //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (assign,nonatomic) char suppressDismissalHandlerUnlessDimmingViewTapped;              //@synthesize suppressDismissalHandlerUnlessDimmingViewTapped=_suppressDismissalHandlerUnlessDimmingViewTapped - In the implementation block
-(void)dismissalTransitionDidEnd:(char)arg1 ;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
-(char)suppressDismissalHandlerUnlessDimmingViewTapped;
-(void)setSuppressDismissalHandlerUnlessDimmingViewTapped:(char)arg1 ;
@end


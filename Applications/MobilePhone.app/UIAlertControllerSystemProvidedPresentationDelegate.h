/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIAlertControllerSystemProvidedPresentationDelegate <NSObject>
@optional
-(void)_willBeginSystemProvidedDismissalOfAlertController:(id)arg1;
-(void)_didBeginSystemProvidedDismissalOfAlertController:(id)arg1;
-(void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1;
-(void)_willPerformSystemProvidedPresentationOfAlertController:(id)arg1;
-(char)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(CGPoint)arg2;
-(void)_didBeginSystemProvidedPresentationOfAlertController:(id)arg1;
-(void)_didEndSystemProvidedPresentationOfAlertController:(id)arg1 wasSuccessful:(char)arg2;

@required
-(id)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(id)arg1;

@end


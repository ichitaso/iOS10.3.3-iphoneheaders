/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HOOnboardingChildViewController <NSObject>
@property (assign,nonatomic,__weak) id<HOOnboardingChildViewControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<HOOnboardingChildViewControllerNavigationBarDelegate> navigationBarDelegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<HOOnboardingChildViewControllerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1;
-(void)nextButtonPressed;
-(id<HOOnboardingChildViewControllerNavigationBarDelegate>)navigationBarDelegate;
-(void)setNavigationBarDelegate:(id)arg1;

@end

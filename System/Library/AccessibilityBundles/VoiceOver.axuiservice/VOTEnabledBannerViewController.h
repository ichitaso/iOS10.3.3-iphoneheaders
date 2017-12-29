/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class VOTEnabledBannerView;

@interface VOTEnabledBannerViewController : UIViewController {

	VOTEnabledBannerView* _bannerView;

}

@property (nonatomic,retain) VOTEnabledBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
-(void)hideAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)showAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadView;
-(void)setBannerView:(VOTEnabledBannerView *)arg1 ;
-(VOTEnabledBannerView *)bannerView;
@end


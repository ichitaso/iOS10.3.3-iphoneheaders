/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SocialUIService.app/PlugIns/com.apple.social.TwitterComposeService.appex/com.apple.social.TwitterComposeService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLMicroBlogComposeViewController.h>

@class SLTwitterSession;

@interface SLTwitterComposeViewController : SLMicroBlogComposeViewController {

	SLTwitterSession* _remoteSession;

}
+(id)serviceBundle;
-(void)tearDownSession;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)presentationAnimationDidFinish;
-(void)presentNoAccountsAlert;
-(id)session;
@end


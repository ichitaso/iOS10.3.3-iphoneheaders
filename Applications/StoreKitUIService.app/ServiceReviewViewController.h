/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/StoreKitUIService.app/StoreKitUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SKUIConfigurationPreloader, SKUIReviewInAppController;

@interface ServiceReviewViewController : UIViewController {

	SKUIConfigurationPreloader* _configurationPreloader;
	SKUIReviewInAppController* _reviewInAppController;

}

@property (nonatomic,retain) SKUIConfigurationPreloader * configurationPreloader;              //@synthesize configurationPreloader=_configurationPreloader - In the implementation block
@property (nonatomic,retain) SKUIReviewInAppController * reviewInAppController;                //@synthesize reviewInAppController=_reviewInAppController - In the implementation block
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)_clientViewControllerProxy;
-(void)_loadDidFailWithError:(id)arg1 ;
-(id)_reviewInAppConfigurationWithParameters:(id)arg1 clientContext:(id)arg2 ;
-(void)setReviewInAppController:(SKUIReviewInAppController *)arg1 ;
-(SKUIReviewInAppController *)reviewInAppController;
-(id)_iconForApplication:(id)arg1 ;
-(void)setConfigurationPreloader:(SKUIConfigurationPreloader *)arg1 ;
-(void)setupWithParameters:(id)arg1 ;
-(void)finishImmediately:(id)arg1 ;
-(SKUIConfigurationPreloader *)configurationPreloader;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UINavigationController, NSString;

@interface InternalConfigurationsUIActivity : UIActivity <UINavigationControllerDelegate> {

	UINavigationController* _navigationController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)activityDidFinish:(char)arg1 ;
-(id)activityType;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(void)_dismissViewController:(id)arg1 ;
@end


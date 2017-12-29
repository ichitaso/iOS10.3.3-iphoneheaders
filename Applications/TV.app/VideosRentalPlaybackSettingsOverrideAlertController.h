/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@protocol VideosRentalPlaybackSettingsOverrideAlertControllerDelegate;
@interface VideosRentalPlaybackSettingsOverrideAlertController : UIAlertController {

	id<VideosRentalPlaybackSettingsOverrideAlertControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VideosRentalPlaybackSettingsOverrideAlertControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)settingsOverrideAlertControllerForItem:(id)arg1 ;
+(char)shouldWarnAboutRentalPlaybackSettings:(id)arg1 ;
+(id)_generateAlertForItem:(id)arg1 ;
-(void)setDelegate:(id<VideosRentalPlaybackSettingsOverrideAlertControllerDelegate>)arg1 ;
-(id<VideosRentalPlaybackSettingsOverrideAlertControllerDelegate>)delegate;
@end


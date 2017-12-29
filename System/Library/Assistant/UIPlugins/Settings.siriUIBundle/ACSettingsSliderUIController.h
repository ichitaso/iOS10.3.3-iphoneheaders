/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Settings.siriUIBundle/Settings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <Settings/ACSettingsSliderUpdateDelegate.h>

@class SASettingFloatSnippet, ACSettingsSliderSetting, ACSettingsSliderView, NSString;

@interface ACSettingsSliderUIController : SiriUISnippetViewController <ACSettingsSliderUpdateDelegate> {

	SASettingFloatSnippet* _snippet;
	ACSettingsSliderSetting* _setting;
	ACSettingsSliderView* _settingView;
	char _viewHasAppeared;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snippetViewController;
-(void)_touchesEnded:(id)arg1 ;
-(void)settingChangedExternally:(id)arg1 ;
-(id)init;
-(void)loadView;
-(char)isTracking;
-(void)viewWillAppear:(char)arg1 ;
-(void)setSnippet:(id)arg1 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(char)removedAfterDialogProgresses;
-(void)_sliderChanged:(id)arg1 ;
@end


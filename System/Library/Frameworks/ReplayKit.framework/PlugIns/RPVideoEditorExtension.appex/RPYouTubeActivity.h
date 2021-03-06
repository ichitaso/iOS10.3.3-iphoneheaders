/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:31:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/PlugIns/RPVideoEditorExtension.appex/RPVideoEditorExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <RPVideoEditorExtension/RPPublishingAgentDelegate.h>

@protocol RPPublishingAgent;
@class NSURL, NSString, RPYouTubeActivityProgressOverlay;

@interface RPYouTubeActivity : UIActivity <RPPublishingAgentDelegate> {

	NSURL* _movieURL;
	id<RPPublishingAgent> _publishingAgent;
	NSString* _descriptionText;
	RPYouTubeActivityProgressOverlay* _progressOverlay;
	NSURL* _tempFilePath;

}

@property (nonatomic,retain) NSURL * movieURL;                                                //@synthesize movieURL=_movieURL - In the implementation block
@property (nonatomic,retain) id<RPPublishingAgent> publishingAgent;                           //@synthesize publishingAgent=_publishingAgent - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                                      //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) RPYouTubeActivityProgressOverlay * progressOverlay;              //@synthesize progressOverlay=_progressOverlay - In the implementation block
@property (nonatomic,retain) NSURL * tempFilePath;                                            //@synthesize tempFilePath=_tempFilePath - In the implementation block
+(id)photosUIFrameworkBundle;
+(id)photosUIImageNamed:(id)arg1 ;
+(int)activityCategory;
-(id)tempFileURL;
-(void)setPublishingAgent:(id<RPPublishingAgent>)arg1 ;
-(void)setProgressOverlay:(RPYouTubeActivityProgressOverlay *)arg1 ;
-(id<RPPublishingAgent>)publishingAgent;
-(RPYouTubeActivityProgressOverlay *)progressOverlay;
-(NSURL *)tempFilePath;
-(void)setTempFilePath:(NSURL *)arg1 ;
-(id)activityType;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(id)activityImage;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)showAlertWithError:(id)arg1 ;
-(void)publishingAgentWillBeDisplayed:(id)arg1 ;
-(void)publishingAgentDoneButtonClicked:(id)arg1 ;
-(void)publishingAgentCancelButtonClicked:(id)arg1 ;
-(void)publishingAgentDidBeginPublishing:(id)arg1 ;
-(void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2 ;
-(void)setMovieURL:(NSURL *)arg1 ;
-(NSURL *)movieURL;
-(void)_selectComedyPickerRow;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UINavigationController.h>

@class NSMutableDictionary, NSString;

@interface UIVideoEditorController : UINavigationController {

	int _previousStatusBarStyle;
	NSMutableDictionary* _properties;
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned didRevertStatusBar : 1;
	}  _flags;

}

@property (assign,nonatomic) id<UINavigationControllerDelegate><UIVideoEditorControllerDelegate> delegate; 
@property (nonatomic,copy) NSString * videoPath; 
@property (assign,nonatomic) double videoMaximumDuration; 
@property (assign,nonatomic) int videoQuality; 
+(char)canEditVideoAtPath:(id)arg1 ;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillUnload;
-(char)_isSupportedInterfaceOrientation:(int)arg1 ;
-(id)_valueForProperty:(id)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)_initializeProperties;
-(void)_removeAllChildren;
-(id)_properties;
-(id)_createInitialController;
-(void)_autoDismiss;
-(double)videoMaximumDuration;
-(void)setVideoMaximumDuration:(double)arg1 ;
-(int)videoQuality;
-(void)setVideoQuality:(int)arg1 ;
-(void)_setProperties:(id)arg1 ;
-(char)_didRevertStatusBar;
-(void)_setupControllers;
-(void)editVideoViewControllerDidCancel:(id)arg1 ;
-(id)_videoURL;
-(void)_setVideoURL:(id)arg1 ;
-(void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2 ;
-(void)editVideoViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(NSString *)videoPath;
-(void)setVideoPath:(NSString *)arg1 ;
@end


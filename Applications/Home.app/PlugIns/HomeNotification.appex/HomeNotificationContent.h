/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/PlugIns/HomeNotification.appex/HomeNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMCameraSource, UIImage, NSString, HUCameraErrorContent;

@interface HomeNotificationContent : NSObject {

	unsigned _mode;
	HMCameraSource* _cameraSource;
	UIImage* _statusAccessoryImage;
	unsigned _statusDisplayStyle;
	NSString* _statusText;
	HUCameraErrorContent* _errorContent;
	NSString* _actionResultText;

}

@property (assign,nonatomic) unsigned mode;                                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) HMCameraSource * cameraSource;                    //@synthesize cameraSource=_cameraSource - In the implementation block
@property (assign,nonatomic) unsigned statusDisplayStyle;                      //@synthesize statusDisplayStyle=_statusDisplayStyle - In the implementation block
@property (nonatomic,retain) UIImage * statusAccessoryImage;                   //@synthesize statusAccessoryImage=_statusAccessoryImage - In the implementation block
@property (nonatomic,copy) NSString * statusText;                              //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,retain) HUCameraErrorContent * errorContent;              //@synthesize errorContent=_errorContent - In the implementation block
@property (nonatomic,copy) NSString * actionResultText;                        //@synthesize actionResultText=_actionResultText - In the implementation block
+(id)contentWithSpinner;
+(id)contentWithStream:(id)arg1 microphoneMuted:(char)arg2 actionResultText:(id)arg3 ;
+(id)contentWithSnapshot:(id)arg1 loadingStream:(char)arg2 actionResultText:(id)arg3 errorContent:(id)arg4 ;
-(void)setStatusDisplayStyle:(unsigned)arg1 ;
-(void)setActionResultText:(NSString *)arg1 ;
-(void)setStatusAccessoryImage:(UIImage *)arg1 ;
-(UIImage *)statusAccessoryImage;
-(unsigned)statusDisplayStyle;
-(NSString *)actionResultText;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(id)initWithMode:(unsigned)arg1 ;
-(NSString *)statusText;
-(void)setStatusText:(NSString *)arg1 ;
-(void)setCameraSource:(HMCameraSource *)arg1 ;
-(HMCameraSource *)cameraSource;
-(HUCameraErrorContent *)errorContent;
-(void)setErrorContent:(HUCameraErrorContent *)arg1 ;
@end


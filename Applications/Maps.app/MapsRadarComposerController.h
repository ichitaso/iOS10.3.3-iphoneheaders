/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, TracePickerController, NSURLComponents, NSMutableArray, NSMutableString;

@interface MapsRadarComposerController : NSObject {

	char _showTracePicker;
	UIViewController* _viewController;
	TracePickerController* _tracePicker;
	NSURLComponents* _urlComponents;
	NSMutableArray* _queryItems;
	NSMutableString* _attachmentsPath;

}

@property (assign,nonatomic) char showTracePicker;              //@synthesize showTracePicker=_showTracePicker - In the implementation block
-(id)_generateURL;
-(void)addToAttachmentsPath:(id)arg1 ;
-(void)_selectTraceWithName:(id)arg1 path:(id)arg2 ;
-(void)showTracePickerForRadarLaunchUsingViewController:(id)arg1 ;
-(void)_cancelRadarCompose;
-(void)_skipAttachingTrace;
-(char)showTracePicker;
-(void)setShowTracePicker:(char)arg1 ;
-(void)_launchTapToRadar;
@end


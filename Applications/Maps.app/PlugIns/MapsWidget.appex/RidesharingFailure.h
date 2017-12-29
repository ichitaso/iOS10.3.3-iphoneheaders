/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RidesharingFailure : NSObject {

	/*^block*/id _resolve;
	NSString* _message;
	NSString* _resolutionCommandTitle;

}

@property (nonatomic,readonly) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSString * resolutionCommandTitle;              //@synthesize resolutionCommandTitle=_resolutionCommandTitle - In the implementation block
+(id)localizedGenericFailureMessage;
+(id)localizedOpenInAppCommandTitleForApplication:(id)arg1 ;
-(id)initWithMessage:(id)arg1 resolutionCommandTitle:(id)arg2 openingApplication:(id)arg3 userActivity:(id)arg4 ;
-(id)initWithMessage:(id)arg1 resolutionCommandTitle:(id)arg2 performResolutionCommandBlock:(/*^block*/id)arg3 ;
-(NSString *)resolutionCommandTitle;
-(NSString *)message;
-(void)resolve;
@end


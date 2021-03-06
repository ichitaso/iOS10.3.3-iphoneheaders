/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/Phone.assistantBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAPhoneCall.h>
#import <Accessibility/AFServiceCommand.h>

@class NSBundle, NSString;

@interface PHAssistantCall : SAPhoneCall <AFServiceCommand> {

	NSBundle* _voiceDialBundle;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_isEmailAddress;
-(id)_appPunchOutURL;
-(char)_isCarPlayActive;
-(char)_faceTimeAudioIsAvailable;
-(void)_performAppPunchOutWithURL:(id)arg1 withServiceHelper:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_voiceDialBundle;
-(void)_removeFaceTimeAvailabilityListener;
-(char)_shouldApplyInternationalAssist;
-(char)_faceTimeVideoIsAvailable;
-(void)_addFaceTimeAvailabilityListener;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)_validate;
-(id)_countryCode;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(id)_copyExceptionsForCountryCode:(id)arg1 ;
@end

